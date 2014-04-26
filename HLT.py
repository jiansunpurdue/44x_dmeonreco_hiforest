import os
import FWCore.ParameterSet.Config as cms
import PhysicsTools.PythonAnalysis.LumiList as LumiList
process = cms.Process("HFA")

# ----------------------------------------------------------------------
process.load("FWCore.MessageLogger.MessageLogger_cfi")
process.MessageLogger.cerr.threshold = 'INFO'
#process.MessageLogger.cerr.FwkReport.reportEvery = 1000
process.MessageLogger.cerr.FwkReport.reportEvery = 1
process.options   = cms.untracked.PSet( wantSummary = cms.untracked.bool(True) )
#process.Timing = cms.Service("Timing")

# ----------------------------------------------------------------------
# -- Database configuration
process.load("CondCore.DBCommon.CondDBCommon_cfi")
process.load("CondCore.DBCommon.CondDBSetup_cfi")

# -- Conditions
process.load("Configuration.StandardSequences.MagneticField_38T_cff")
process.load("Configuration.StandardSequences.Geometry_cff") 
process.load("RecoVertex.BeamSpotProducer.BeamSpot_cfi")
process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_cff")
process.GlobalTag.globaltag = "GR_R_44_V15::All"

# ----------------------------------------------------------------------
# -- Input files

process.source = cms.Source("PoolSource",
        skipEvents = cms.untracked.uint32(0),
        fileNames  = cms.untracked.vstring(
                'file:~jiansun/nobackup/data/2011reco_highpt.root'
#                'file:/afs/cern.ch/work/j/jisun/public/2011recoHIminbias.root'
            )
        )

process.maxEvents = cms.untracked.PSet(
        input = cms.untracked.int32(5)
        )

process.source.lumisToProcess = LumiList.LumiList(filename = './Cert_181530-183126_HI7TeV_PromptReco_Collisions11_JSON.txt').getVLuminosityBlockRange()

process.load("HLTrigger.HLTcore.hltEventAnalyzerAOD_cfi")

# ----------------------------------------------------------------------
process.TFileService = cms.Service("TFileService",
           fileName = cms.string('HLT.root')
        )

# ----------------------------------------------------------------------
process.p = cms.Path(process.hltEventAnalyzerAOD)

