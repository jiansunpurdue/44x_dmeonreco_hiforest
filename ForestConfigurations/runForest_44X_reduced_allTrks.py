import FWCore.ParameterSet.Config as cms

process = cms.Process('hiForestAna')

process.options = cms.untracked.PSet(
    wantSummary = cms.untracked.bool(True)
)

#####################################################################################
# Input source
#####################################################################################

process.source = cms.Source("PoolSource",
 duplicateCheckMode = cms.untracked.string("noDuplicateCheck"),
    fileNames = cms.untracked.vstring(
      'file:/afs/cern.ch/work/j/jisun/public/2011reco_highpt.root'
    ))

# Number of events we want to process, -1 = all events
process.maxEvents = cms.untracked.PSet(
            input = cms.untracked.int32(50))


#####################################################################################
# Load some general stuff
#####################################################################################

process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')
process.load('Configuration.StandardSequences.Services_cff')
process.load('Configuration.StandardSequences.GeometryExtended_cff')
process.load('Configuration.StandardSequences.MagneticField_38T_cff')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('RecoLocalTracker.SiPixelRecHits.PixelCPEESProducers_cff')
# Data Global Tag 44x 
process.GlobalTag.globaltag = 'GR_R_44_V6C::All'

# MC Global Tag 44x 
#process.GlobalTag.globaltag = 'STARTHI44_V4::All'

# load centrality
from CmsHi.Analysis2010.CommonFunctions_cff import *
overrideCentrality(process)
process.HeavyIonGlobalParameters = cms.PSet(
	centralityVariable = cms.string("HFhits"),
	nonDefaultGlauberModel = cms.string(""),
	centralitySrc = cms.InputTag("hiCentrality")
	)

process.load('RecoHI.HiCentralityAlgos.HiCentrality_cfi')

# EcalSeverityLevel ES Producer
process.load("RecoLocalCalo/EcalRecAlgos/EcalSeverityLevelESProducer_cfi")
process.load("RecoEcal.EgammaCoreTools.EcalNextToDeadChannelESProducer_cff")


#####################################################################################
# Define tree output
#####################################################################################

process.TFileService = cms.Service("TFileService",
                                  fileName=cms.string("JetAnaTrees.root"))

#####################################################################################
# Additional Reconstruction and Analysis
#####################################################################################

# Event tree
process.load("CmsHi/HiHLTAlgos.hievtanalyzer_cfi")
# Not working for the moment..
process.hiEvtAnalyzer.doMC = cms.bool(False)
process.hiEvtAnalyzer.doEvtPlane = cms.bool(True)

# Filtering
#process.hltJetHI.HLTPaths = ['HLT_HIJet35U','HLT_HIPhoton20']
#process.hltJetHI.TriggerResultsTag = cms.InputTag("TriggerResults::RECO")

process.load("CmsHi.JetAnalysis.EventSelection_cff")

print "Add cleaning to analysis"
#process.event_filter_seq = cms.Sequence(
#  process.siPixelRecHits * 
#  process.collisionEventSelection 
#  process.HBHENoiseFilter *
#  process.hiEcalRecHitSpikeFilter 

#  process.preTrgTest *
#  process.minBiasBscFilter *
#  process.postTrgTest *
#  process.hfCoincFilter *
#  process.purityFractionFilter

#  )

#Commented by Yen-Jie
#process.hiPixelAdaptiveVertex.useBeamConstraint = False


process.ana_step          = cms.Path(process.hiEvtAnalyzer)

process.pcollisionEventSelection = cms.Path(process.collisionEventSelection)
process.pHBHENoiseFilter = cms.Path( process.HBHENoiseFilter )
#process.phiEcalRecHitSpikeFilter = cms.Path(process.hiEcalRecHitSpikeFilter )
#process.ppreTrgTest = cms.Path(process.preTrgTest )
#process.pminBiasBscFilter = cms.Path(process.minBiasBscFilter )
#process.ppostTrgTest = cms.Path(process.postTrgTest )
#process.phfCoincFilter = cms.Path(process.hfCoincFilter )
#process.ppurityFractionFilter = cms.Path(process.purityFractionFilter )

process.load('L1Trigger.Configuration.L1Extra_cff')
process.load('HLTrigger.HLTanalyzers.HLTBitAnalyser_cfi')
process.hltbitanalysis.UseTFileService			= cms.untracked.bool(True)
process.hltanalysis = process.hltbitanalysis.clone(
   l1GtReadoutRecord		= cms.InputTag("gtDigis"),
   l1GctHFBitCounts     = cms.InputTag("gctDigis"),
   l1GctHFRingSums      = cms.InputTag("gctDigis"),
   l1extramu            = cms.string('l1extraParticles'),
   l1extramc            = cms.string('l1extraParticles'),
   hltresults           = cms.InputTag("TriggerResults","","HLT"),
   HLTProcessName       = cms.string("HLT")
  )
process.skimanalysis = process.hltanalysis.clone(
    HLTProcessName                  = cms.string("JetAna"),
    hltresults                      = cms.InputTag("TriggerResults::hiForestAna")
    )
process.hlt = cms.Path(process.hltanalysis)
process.pAna = cms.EndPath(process.skimanalysis)
#process.reco_extra*=process.L1Extra

########### random number seed
process.RandomNumberGeneratorService = cms.Service("RandomNumberGeneratorService",
  multiPhotonAnalyzer = cms.PSet(
    engineName = cms.untracked.string("TRandom3"),
    initialSeed = cms.untracked.uint32(98236)
    )
  )

process.schedule = cms.Schedule(process.pcollisionEventSelection,process.pHBHENoiseFilter,process.ana_step,process.hlt,process.pAna)

#####################################################################################
# Edm Output
#####################################################################################

#process.out = cms.OutputModule("PoolOutputModule",
#                               fileName = cms.untracked.string("output.root")
#                               )
#process.save = cms.EndPath(process.out)
