
import FWCore.ParameterSet.VarParsing as VarParsing

ivars = VarParsing.VarParsing('python')

ivars.register ('randomNumber',
                1,
                ivars.multiplicity.singleton,
                ivars.varType.int,
                "Random Seed")

ivars.randomNumber = 1
#ivars.inputFiles = "file:/net/hisrv0001/home/icali/hadoop/Pythia/Z2/ppDijet50/reco_v0/set2_random70000_HydjetDrum_362.root"
#ivars.inputFiles = "file:/mnt/hadoop/cms/store/user/frankma/HIHighPt/promptskim-hihighpt-hltjet80-pt90-v0//cd475ecb0c871a17cabcfbdd64b9e8dc/reco_1_1_Ls9.root"
#ivars.inputFiles = "file:/mnt/hadoop/cms/store/user/frankma/HIHighPt/promptskim-hihighpt-hltjet80-pt90-v0//cd475ecb0c871a17cabcfbdd64b9e8dc/reco_2_1_xux.root"
ivars.inputFiles = "file:/uscms_data/d3/jiansun/data/2011reco_highpt.root"

#ivars.inputFiles = "file:./reco_test16.root"
ivars.outputFile = './forest_data_d0dstar.root'
ivars.maxEvents = 100

ivars.parseArguments()


import FWCore.ParameterSet.Config as cms
import PhysicsTools.PythonAnalysis.LumiList as LumiList

process = cms.Process('hiForestAna2011')

#process.options = cms.untracked.PSet(
#   wantSummary = cms.untracked.bool(True)
#)


hiTrackQuality = "highPurity"              # iterative tracks
#hiTrackQuality = "highPuritySetWithPV"    # calo-matched tracks

doElectrons = False
doRegitForBjets = False


#####################################################################################

process.load("CmsHi.JetAnalysis.HiForest_cff")
process.HiForest.inputLines = cms.vstring("HiForest V2",
                                          "PF : iterative tracks",
                                          "EP Flattening OFF",
                                          "Electrons OFF",
                                          "Preshower OFF"
                                          )

#####################################################################################
# Input source
#####################################################################################

process.source = cms.Source("PoolSource",
 duplicateCheckMode = cms.untracked.string("noDuplicateCheck"),
    fileNames = cms.untracked.vstring(ivars.inputFiles))



# DATA EMULATION
process.source.inputCommands = cms.untracked.vstring("keep *",
                                                     "drop *_hiSignal*_*_*",
                                                     "drop *_*GenJet*_*_*",
                                                     "drop *_*GenPar*_*_*",
                                                     "drop *_gen*_*_*"
                                                     )
process.source.dropDescendantsOfDroppedBranches=cms.untracked.bool(False)



# Number of events we want to process, -1 = all events
process.maxEvents = cms.untracked.PSet(
            input = cms.untracked.int32(ivars.maxEvents))


process.source.lumisToProcess = LumiList.LumiList(filename = './Cert_181530-183126_HI7TeV_PromptReco_Collisions11_JSON.txt').getVLuminosityBlockRange()

#####################################################################################
# Load some general stuff
#####################################################################################

process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')
process.load('Configuration.StandardSequences.Services_cff')
process.load('Configuration.StandardSequences.GeometryExtended_cff')
process.load('Configuration.StandardSequences.MagneticField_38T_cff')
process.load('SimGeneral.MixingModule.mixNoPU_cfi')
process.load('Configuration.StandardSequences.Digi_cff')
process.load('Configuration.StandardSequences.SimL1Emulator_cff')
process.load('Configuration.StandardSequences.DigiToRaw_cff')
process.load('Configuration.StandardSequences.RawToDigi_cff')
process.load('Configuration.StandardSequences.ReconstructionHeavyIons_cff')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('RecoLocalTracker.SiPixelRecHits.PixelCPEESProducers_cff')
#process.load('MitHig.PixelTrackletAnalyzer.pixelHitAnalyzer_cfi')

# Data Global Tag 44x 
process.GlobalTag.globaltag = 'GR_R_44_V15::All'

# process.Timing = cms.Service("Timing")

# MC Global Tag 44x 
#process.GlobalTag.globaltag = 'STARTHI44_V7::All'

# load centrality
from CmsHi.Analysis2010.CommonFunctions_cff import *
overrideCentrality(process)
process.HeavyIonGlobalParameters = cms.PSet(
	centralityVariable = cms.string("HFtowers"),
	centralitySrc = cms.InputTag("hiCentrality")
	)
process.hiCentrality.pixelBarrelOnly = False
process.load("CmsHi.JetAnalysis.RandomCones_cff")

#process.RandomNumberGeneratorService.generator.initialSeed = ivars.randomNumber 
#process.RandomNumberGeneratorService.akPu3PFConesAna = process.RandomNumberGeneratorService.generator.clone()
#process.RandomNumberGeneratorService.icPu5CaloConesAna = process.RandomNumberGeneratorService.generator.clone()
#process.RandomNumberGeneratorService.akPu5PFConesAna = process.RandomNumberGeneratorService.generator.clone()
#process.RandomNumberGeneratorService.akPu3CaloConesAna = process.RandomNumberGeneratorService.generator.clone()
#process.RandomNumberGeneratorService.akPu5CaloConesAna = process.RandomNumberGeneratorService.generator.clone()
#process.RandomNumberGeneratorService.multiPhotonAnalyzer = process.RandomNumberGeneratorService.generator.clone()

# EcalSeverityLevel ES Producer
process.load("RecoLocalCalo/EcalRecAlgos/EcalSeverityLevelESProducer_cfi")
process.load("RecoEcal.EgammaCoreTools.EcalNextToDeadChannelESProducer_cff")

#####################################################################################
# Define tree output
#####################################################################################

process.TFileService = cms.Service("TFileService",
                                  fileName=cms.string(ivars.outputFile))

#####################################################################################
# Additional Reconstruction and Analysis
#####################################################################################

# Define Analysis sequencues
process.load('CmsHi.JetAnalysis.EventSelection_cff')
#from HeavyIonsAnalysis.Configuration.collisionEventSelection_cff import *

# Event tree
process.load("CmsHi/HiHLTAlgos.hievtanalyzer_cfi")
# Not working for the moment..
#process.hiEvtAnalyzer.doMC = cms.bool(True)
process.hiEvtAnalyzer.doEvtPlane = cms.bool(True)

#Commented by Yen-Jie
#process.hiPixelAdaptiveVertex.useBeamConstraint = False
###########################################


process.ana_step          = cms.Path(process.hiEvtAnalyzer)

process.pcollisionEventSelection = cms.Path(process.collisionEventSelection)
process.pHBHENoiseFilter = cms.Path( process.HBHENoiseFilter )
process.phiEcalRecHitSpikeFilter = cms.Path(process.hiEcalRecHitSpikeFilter )

# Customization

process.load('L1Trigger.Configuration.L1Extra_cff')
process.load('CmsHi.HiHLTAlgos.hltanalysis_cff')

process.hltanalysis.hltresults = cms.InputTag("TriggerResults","","HLT")
process.hltAna = cms.Path(process.hltanalysis)
process.pAna = cms.EndPath(process.skimanalysis)


process.load('CmsHi.JetAnalysis.rechitanalyzer_cfi') 
process.rechitAna = cms.Path(process.rechitanalyzer+process.pfTowers)

process.tree = cms.EDAnalyzer(
    "HFTree",
    verbose      = cms.untracked.int32(1),
    printFrequency = cms.untracked.int32(10),
    requireCand  =  cms.untracked.bool(True)
    )

# ----------------------------------------------------------------------
process.load("Configuration.StandardSequences.Reconstruction_cff")
process.load("UserCode.OpenHF.HFRecoStuff_cff")
process.load("UserCode.OpenHF.HFCharm_cff")


# ----------------------------------------------------------------------

# ----------------------------------------------------------------------
process.p = cms.Path(
    process.recoStuffSequence*
    process.d0dstarSequence*
    process.tree
)



process.schedule = cms.Schedule(process.pcollisionEventSelection,process.pHBHENoiseFilter,process.phiEcalRecHitSpikeFilter,process.ana_step,process.hltAna,process.pAna,process.p)
#process.schedule = cms.Schedule(process.pcollisionEventSelection,process.pHBHENoiseFilter,process.ana_step,process.hltAna,process.pAna)
########### random number seed
