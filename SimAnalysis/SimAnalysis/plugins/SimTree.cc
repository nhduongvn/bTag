#include "SimAnalysis/SimAnalysis/interface/SimTree.hh"

void SimTree::Init()
{
   primVtxX.clear();
   primVtxY.clear();
   primVtxZ.clear();
   
   momId.clear();
   momPt.clear();
   momEta.clear();
   momPhi.clear();
   
   muR.clear();
   muRpv.clear();
   muPosX.clear();
   muPosY.clear();
   muPosZ.clear();
   muPt.clear();
   muEta.clear();
   muPhi.clear();
   muStatus.clear();

   muSimMomId.clear();
   muSimPt.clear();
   muSimEta.clear();
   muSimPhi.clear();
   muSimR.clear();
   muSimRpv.clear();
   muSimPosX.clear();
   muSimPosY.clear();
   muSimPosZ.clear();   
   
   partonId.clear();
   partonPt.clear();
   partonEta.clear();
   partonPhi.clear();
   
   pfjetPt.clear();
   pfjetEta.clear();
   pfjetPhi.clear();

   patjetPt.clear();
   patjetEta.clear();
   patjetPhi.clear();
   patjetPartonFlavour.clear();
   patjetHadronFlavour.clear();

   recomuonPt.clear();
   recomuonEta.clear();
   recomuonPhi.clear();

   recomuonIsPFMuon.clear();
   recomuonIsGlobalMuon.clear();
   recomuonNumberOfValidMuonHits.clear();
   recomuonNumberOfMatches.clear();
   recomuonNumberOfValidHits.clear();
   recomuonNumberOfValidPixelHits.clear();
   recomuonNumberOfHits.clear();
   recomuonNormalizedChi2GlobalTrack.clear();
   recomuonNormalizedChi2InnerTrack.clear();   
   recomuonNumberOfValidMuonHitsGlobalTrack.clear();
   recomuonTrackerLayersWithMeasurement.clear();
   recomuonNumberOfMatchedStations.clear();
   
   patmuonPt.clear();
   patmuonEta.clear();
   patmuonPhi.clear();
   
   patmuonIsPFMuon.clear();
   patmuonIsGlobalMuon.clear();
   patmuonNumberOfValidMuonHits.clear();
   patmuonNumberOfMatches.clear();
   patmuonNumberOfValidHits.clear();
   patmuonNumberOfValidPixelHits.clear();
   patmuonNumberOfHits.clear();
   patmuonNormalizedChi2GlobalTrack.clear();
   patmuonNormalizedChi2InnerTrack.clear();   
   patmuonNumberOfValidMuonHitsGlobalTrack.clear();
   patmuonTrackerLayersWithMeasurement.clear();
   patmuonNumberOfMatchedStations.clear();
}

void SimTree::CreateBranches(int buffersize = 32000)
{
   tree->Branch("primVtxX", "std::vector<float>", &primVtxX, buffersize);
   tree->Branch("primVtxY", "std::vector<float>", &primVtxY, buffersize);
   tree->Branch("primVtxZ", "std::vector<float>", &primVtxZ, buffersize);
   
   tree->Branch("momId", "std::vector<int>", &momId, buffersize);
   tree->Branch("momPt", "std::vector<float>", &momPt, buffersize);
   tree->Branch("momEta", "std::vector<float>", &momEta, buffersize);
   tree->Branch("momPhi", "std::vector<float>", &momPhi, buffersize);
   
   tree->Branch("muR", "std::vector<float>", &muR, buffersize);
   tree->Branch("muRpv", "std::vector<float>", &muRpv, buffersize);
   tree->Branch("muPosX", "std::vector<float>", &muPosX, buffersize);
   tree->Branch("muPosY", "std::vector<float>", &muPosY, buffersize);
   tree->Branch("muPosZ", "std::vector<float>", &muPosZ, buffersize);
   tree->Branch("muPt", "std::vector<float>", &muPt, buffersize);
   tree->Branch("muEta", "std::vector<float>", &muEta, buffersize);
   tree->Branch("muPhi", "std::vector<float>", &muPhi, buffersize);
   tree->Branch("muStatus", "std::vector<int>", &muStatus, buffersize);

   tree->Branch("muSimMomId", "std::vector<int>", &muSimMomId, buffersize);
   tree->Branch("muSimR", "std::vector<float>", &muSimR, buffersize);
   tree->Branch("muSimRpv", "std::vector<float>", &muSimRpv, buffersize);
   tree->Branch("muSimPosX", "std::vector<float>", &muSimPosX, buffersize);
   tree->Branch("muSimPosY", "std::vector<float>", &muSimPosY, buffersize);
   tree->Branch("muSimPosZ", "std::vector<float>", &muSimPosZ, buffersize);
   tree->Branch("muSimPt", "std::vector<float>", &muSimPt, buffersize);
   tree->Branch("muSimEta", "std::vector<float>", &muSimEta, buffersize);
   tree->Branch("muSimPhi", "std::vector<float>", &muSimPhi, buffersize);
   
   tree->Branch("partonId", "std::vector<int>", &partonId, buffersize);
   tree->Branch("partonPt", "std::vector<float>", &partonPt, buffersize);
   tree->Branch("partonEta", "std::vector<float>", &partonEta, buffersize);
   tree->Branch("partonPhi", "std::vector<float>", &partonPhi, buffersize);
   
   tree->Branch("pfjetPt", "std::vector<float>", &pfjetPt, buffersize);
   tree->Branch("pfjetEta", "std::vector<float>", &pfjetEta, buffersize);
   tree->Branch("pfjetPhi", "std::vector<float>", &pfjetPhi, buffersize);

   tree->Branch("patjetPt", "std::vector<float>", &patjetPt, buffersize);
   tree->Branch("patjetEta", "std::vector<float>", &patjetEta, buffersize);
   tree->Branch("patjetPhi", "std::vector<float>", &patjetPhi, buffersize);
   tree->Branch("patjetPartonFlavour", "std::vector<int>", &patjetPartonFlavour, buffersize);
   tree->Branch("patjetHadronFlavour", "std::vector<int>", &patjetHadronFlavour, buffersize);

   tree->Branch("recomuonPt", "std::vector<float>", &recomuonPt, buffersize);
   tree->Branch("recomuonEta", "std::vector<float>", &recomuonEta, buffersize);
   tree->Branch("recomuonPhi", "std::vector<float>", &recomuonPhi, buffersize);

   tree->Branch("recomuonIsPFMuon", "std::vector<bool>", &recomuonIsPFMuon, buffersize);
   tree->Branch("recomuonIsGlobalMuon", "std::vector<bool>", &recomuonIsGlobalMuon, buffersize);
   tree->Branch("recomuonNumberOfValidMuonHits", "std::vector<int>", &recomuonNumberOfValidMuonHits, buffersize);
   tree->Branch("recomuonNumberOfMatches", "std::vector<int>", &recomuonNumberOfMatches, buffersize);
   tree->Branch("recomuonNumberOfValidHits", "std::vector<int>", &recomuonNumberOfValidHits, buffersize);
   tree->Branch("recomuonNumberOfValidPixelHits", "std::vector<int>", &recomuonNumberOfValidPixelHits, buffersize);
   tree->Branch("recomuonNumberOfHits", "std::vector<int>", &recomuonNumberOfHits, buffersize);
   tree->Branch("recomuonNormalizedChi2GlobalTrack", "std::vector<float>", &recomuonNormalizedChi2GlobalTrack, buffersize);
   tree->Branch("recomuonNormalizedChi2InnerTrack", "std::vector<float>", &recomuonNormalizedChi2InnerTrack, buffersize);
   tree->Branch("recomuonNumberOfValidMuonHitsGlobalTrack", "std::vector<int>", &recomuonNumberOfValidMuonHitsGlobalTrack, buffersize);
   tree->Branch("recomuonTrackerLayersWithMeasurement", "std::vector<int>", &recomuonTrackerLayersWithMeasurement, buffersize);
   tree->Branch("recomuonNumberOfMatchedStations", "std::vector<int>", &recomuonNumberOfMatchedStations, buffersize);
   
   tree->Branch("patmuonPt", "std::vector<float>", &patmuonPt, buffersize);
   tree->Branch("patmuonEta", "std::vector<float>", &patmuonEta, buffersize);
   tree->Branch("patmuonPhi", "std::vector<float>", &patmuonPhi, buffersize);
   
   tree->Branch("patmuonIsPFMuon", "std::vector<bool>", &patmuonIsPFMuon, buffersize);
   tree->Branch("patmuonIsGlobalMuon", "std::vector<bool>", &patmuonIsGlobalMuon, buffersize);
   tree->Branch("patmuonNumberOfValidMuonHits", "std::vector<int>", &patmuonNumberOfValidMuonHits, buffersize);
   tree->Branch("patmuonNumberOfMatches", "std::vector<int>", &patmuonNumberOfMatches, buffersize);
   tree->Branch("patmuonNumberOfValidHits", "std::vector<int>", &patmuonNumberOfValidHits, buffersize);
   tree->Branch("patmuonNumberOfValidPixelHits", "std::vector<int>", &patmuonNumberOfValidPixelHits, buffersize);
   tree->Branch("patmuonNumberOfHits", "std::vector<int>", &patmuonNumberOfHits, buffersize);
   tree->Branch("patmuonNormalizedChi2GlobalTrack", "std::vector<float>", &patmuonNormalizedChi2GlobalTrack, buffersize);
   tree->Branch("patmuonNormalizedChi2InnerTrack", "std::vector<float>", &patmuonNormalizedChi2InnerTrack, buffersize);
   tree->Branch("patmuonNumberOfValidMuonHitsGlobalTrack", "std::vector<int>", &patmuonNumberOfValidMuonHitsGlobalTrack, buffersize);
   tree->Branch("patmuonTrackerLayersWithMeasurement", "std::vector<int>", &patmuonTrackerLayersWithMeasurement, buffersize);
   tree->Branch("patmuonNumberOfMatchedStations", "std::vector<int>", &patmuonNumberOfMatchedStations, buffersize);
}
