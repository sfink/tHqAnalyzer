#include "tHqAnalysis/tHqAnalyzer/interface/BaseVarProcessor.hpp"

using namespace std;

BaseVarProcessor::BaseVarProcessor(){}
BaseVarProcessor::~BaseVarProcessor(){}


void BaseVarProcessor::Init(const InputCollections& input,VariableContainer& vars){

  vars.InitVar( "evt", "L");
  vars.InitVar( "run", "I"); 
  vars.InitVar( "lbn", "I");
  vars.InitVar( "rho", "I");


  // Object Counters

  vars.InitVar( "njt", "I");
  vars.InitVar( "njt15", "I"); 
  vars.InitVar( "npupjt", "I");
  vars.InitVar( "nlmu", "I");
  vars.InitVar( "nlel", "I");
  vars.InitVar( "nmu", "I");
  vars.InitVar( "nlep", "I");
  vars.InitVar( "nel", "I");
  vars.InitVar( "nvetomu", "I");
  vars.InitVar( "nvetoel", "I");
  vars.InitVar( "nlepw", "I" );
  vars.InitVar( "nfwdjt", "I");


  vars.InitVar( "nbtagl", "I");  //New btag multiplicity variables
  vars.InitVar( "nbtagm", "I");  //
  vars.InitVar( "nbtagt", "I");  //
  vars.InitVar( "nbtagt_mva", "I");  //
  vars.InitVar( "nbtagm_mva", "I");  //
  vars.InitVar( "nbtagl_mva", "I");  //


  vars.InitVar( "npv", "I");

  // Tight Jet Collection

  vars.InitVars( "jte","njt" );
  vars.InitVars( "jtpt","njt" );
  vars.InitVars( "jtphi","njt" );
  vars.InitVars( "jteta","njt" );
  vars.InitVars( "jtcsvt","njt" );
  vars.InitVars( "jtcsvt_mvav2","njt" );
  vars.InitVars( "jtCvsL", "njt");
  vars.InitVars( "jtCvsB", "njt");
  //  vars.InitVars( "jtpuid","njt" );

  vars.InitVars( "jtntracks","njt" );
  vars.InitVars( "jtarea","njt" );
  vars.InitVars( "jtpull","njt" );
  vars.InitVars( "jtcharge","njt" );
  vars.InitVars( "jtid","njt" );
  vars.InitVars( "jtchhadmult","njt" ); 

  vars.InitVars( "jtndaughters","njt" );
  vars.InitVars( "jtchmult","njt" );
  vars.InitVars( "jtnhadronfrac","njt" );
  vars.InitVars( "jthfhadronfrac","njt" );
  vars.InitVars( "jtjer","njt" );

  vars.InitVars("jtcostheta_l", "njt");
  vars.InitVars("jtcostheta_j1","njt");   
  vars.InitVars("jtcostheta_j2","njt"); 
  vars.InitVars("jtcostheta_j3","njt");
  vars.InitVars("jtcostheta_j4","njt");
  vars.InitVars("jtcostheta_cm","njt");
  
  //Loose Jet Collection

  vars.InitVars( "jt15e","njt15" );
  vars.InitVars( "jt15pt","njt15" );
  vars.InitVars( "jt15phi","njt15" );
  vars.InitVars( "jt15eta","njt15" );
  vars.InitVars( "jt15csvt","njt15" );
  vars.InitVars( "jt15csvt_mvav2","njt15" );


  //  vars.InitVars( "jt15puid","njt15" );

  vars.InitVars( "jt15ntracks","njt15" );
  vars.InitVars( "jt15area","njt15" );
  vars.InitVars( "jt15pull","njt15" );
  vars.InitVars( "jt15charge","njt15" );
  vars.InitVars( "jt15id","njt15" );
  vars.InitVars( "jt15chhadmult","njt15" ); 

  vars.InitVars( "jt15ndaughters","njt15" );
  vars.InitVars( "jt15chmult","njt15" );
  vars.InitVars( "jt15nhadronfrac","njt15" );
  vars.InitVars( "jt15hfhadronfrac","njt15" );
  vars.InitVars( "jt15jer","njt15" );

  // Jet Gen Collection

  vars.InitVars( "jtgenflv","njt" );
  vars.InitVars( "jtgenhadflv", "njt" );
  vars.InitVars( "jtgenpt","njt" );
  vars.InitVars( "jtgenphi","njt" );
  vars.InitVars( "jtgeneta","njt" );
  vars.InitVars( "jtgene","njt" );

  // Puppi Jets
  
  vars.InitVars( "pupjte","npupjt" );
  vars.InitVars( "pupjtpt","npupjt" );
  vars.InitVars( "pupjtphi","npupjt" );
  vars.InitVars( "pupjteta","npupjt" );
  vars.InitVars( "pupjtcsvt","npupjt" );
  vars.InitVars( "pupjtcsvt_mvav2","npupjt" );

  

  /*
  vars.InitVar( "Evt_E_PrimaryLepton" );
  vars.InitVar( "Evt_M_PrimaryLepton" );
  vars.InitVar( "Evt_Pt_PrimaryLepton" );
  vars.InitVar( "Evt_Eta_PrimaryLepton" );
  vars.InitVar( "Evt_Phi_PrimaryLepton" );
  
  vars.InitVars( "LooseLepton_E","N_LooseLeptons" );
  vars.InitVars( "LooseLepton_M","N_LooseLeptons" );
  vars.InitVars( "LooseLepton_Pt","N_LooseLeptons" );
  vars.InitVars( "LooseLepton_Eta","N_LooseLeptons" );
  vars.InitVars( "LooseLepton_Phi","N_LooseLeptons" );
  */

  vars.InitVars( "lmue","nlmu" );
  vars.InitVars( "lmupt","nlmu" );
  vars.InitVars( "lmueta","nlmu" );
  vars.InitVars( "lmuphi","nlmu" );
  vars.InitVars( "lmuiso","nlmu" );
  vars.InitVars( "lmucharge","nlmu" );

  vars.InitVars( "mue","nmu" );
  vars.InitVars( "mupt","nmu" );
  vars.InitVars( "mueta","nmu" );
  vars.InitVars( "muphi","nmu" );
  vars.InitVars( "muiso","nmu" );
  vars.InitVars( "mucharge","nmu" );

  vars.InitVars( "ele","nel" );
  vars.InitVars( "elpt","nel" );
  vars.InitVars( "eleta","nel" );
  vars.InitVars( "elphi","nel" );
  vars.InitVars( "eliso","nel" );
  vars.InitVars( "elcharge","nel" );

  vars.InitVars( "lele","nlel" );
  vars.InitVars( "lelpt","nlel" );
  vars.InitVars( "leleta","nlel" );
  vars.InitVars( "lelphi","nlel" );
  vars.InitVars( "leliso","nlel" );
  vars.InitVars( "lelcharge","nlel" );
  
  vars.InitVars( "lepe","nlep" );
  vars.InitVars( "leppt","nlep" );
  vars.InitVars( "lepeta","nlep" );
  vars.InitVars( "lepphi","nlep" );
  vars.InitVars( "lepiso","nlep" );
  vars.InitVars( "lepcharge","nlep" );
  vars.InitVars( "leppdg", -99, "nlep" );

  vars.InitVar( "lepwpt" ,"F");
  vars.InitVar( "lepweta" ,"F");
  vars.InitVar( "lepwphi" ,"F");
  vars.InitVar( "lepwm"   ,"F");

  vars.InitVar( "met" ,"F");
  vars.InitVar( "metphi" ,"F");

  vars.InitVar( "genmet" ,"F");
  vars.InitVar( "genmetphi" ,"F");


  vars.InitVar("m3" ,"F"); //new var
  vars.InitVar("mtw" ,"F"); //new var
  vars.InitVar("sumHtTotal" ,"F");
  vars.InitVar("sumHt" ,"F");
 
  vars.InitVar( "aplanarity" ,"F");
  vars.InitVar( "sphericity" ,"F");
   
  vars.InitVar( "wolframh0" ,"F"); 
  vars.InitVar( "wolframh1" ,"F");
  vars.InitVar( "wolframh2" ,"F");
  vars.InitVar( "wolframh3" ,"F");
  vars.InitVar( "wolframh4" ,"F");


  vars.InitVar( "coststh" ,"F");
  vars.InitVar( "costst" ,"F");

  initialized=true;
}

void BaseVarProcessor::Process(const InputCollections& input,VariableContainer& vars){
  if(!initialized) cerr << "tree processor not initialized" << endl;

  tHqEvent thqev(input);

  // Fill event variables
  
  vars.FillVar( "evt", input.eventInfo.evt);
  vars.FillVar( "run", input.eventInfo.run);
  vars.FillVar( "lbn", input.eventInfo.lumiBlock);
  vars.FillVar( "rho", input.eventInfo.rho);

  // Fill btagged Jets

  const string btagger="pfCombinedInclusiveSecondaryVertexV2BJetTags";
  const string btagger2="pfCombinedMVAV2BJetTags";


  std::vector<pat::Jet> selectedTaggedJets;
  std::vector<pat::Jet> selectedTaggedJetsT;
  std::vector<pat::Jet> selectedTaggedJetsL;

  std::vector<pat::Jet> selectedMVATaggedJetsM;
  std::vector<pat::Jet> selectedMVATaggedJetsT;
  std::vector<pat::Jet> selectedMVATaggedJetsL;

  std::vector<pat::Jet> selectedUntaggedJets;
  for(std::vector<pat::Jet>::const_iterator itJet = input.selectedJets.begin(); itJet != input.selectedJets.end(); ++itJet){
    if(tHqUtils::PassesCSV(*itJet, 'M')){
      selectedTaggedJets.push_back(*itJet);
    }
    if(tHqUtils::PassesCSV(*itJet, 'L')){
      selectedTaggedJetsL.push_back(*itJet);
    }
    if(tHqUtils::PassesCSV(*itJet, 'T')){
      selectedTaggedJetsT.push_back(*itJet);
    }
    else selectedUntaggedJets.push_back(*itJet);
    if(tHqUtils::PassesCSV(*itJet, 'T', btagger2)){
      selectedMVATaggedJetsT.push_back(*itJet);
    }
    if(tHqUtils::PassesCSV(*itJet, 'M', btagger2)){
      selectedMVATaggedJetsM.push_back(*itJet);
    }
    if(tHqUtils::PassesCSV(*itJet, 'L', btagger2)){
      selectedMVATaggedJetsL.push_back(*itJet);
    }
  }

  std::vector<pat::Jet> selectedForwardJets = tHqUtils::GetForwardJets(input.selectedJets);

  
  // Fill Multiplicity Variables
  vars.FillVar( "npv",input.selectedPVs.size());  
  vars.FillVar( "njt",input.selectedJets.size());
  vars.FillVar( "njt15",input.selectedJetsLoose.size());
  vars.FillVar( "npupjt",input.selectedPuppiJets.size());
  vars.FillVar( "nel",input.selectedElectrons.size());  
  vars.FillVar( "nlel",input.selectedElectronsLoose.size());  
  vars.FillVar( "nmu",input.selectedMuons.size());  
  vars.FillVar( "nlmu",input.selectedMuonsLoose.size());  
  vars.FillVar( "nfwdjt",selectedForwardJets.size());

 

  // Fill Number of b Tags
  
  vars.FillVar( "nbtagm",selectedTaggedJets.size() );  
  vars.FillVar( "nbtagl",selectedTaggedJetsL.size() );  
  vars.FillVar( "nbtagt",selectedTaggedJetsT.size() );

  vars.FillVar( "nbtagm_mva",selectedMVATaggedJetsM.size() );  
  vars.FillVar( "nbtagl_mva",selectedMVATaggedJetsL.size() );  
  vars.FillVar( "nbtagt_mva",selectedMVATaggedJetsT.size() );
  
  
  // Fill Jet Variables
  // All Jets
  const string ctagger="pfCombinedCvsLJetTags";
  const string ctagger2="pfCombinedCvsBJetTags";

  for(std::vector<pat::Jet>::const_iterator itJet = input.selectedJets.begin() ; itJet != input.selectedJets.end(); ++itJet){
    int iJet = itJet - input.selectedJets.begin();
    vars.FillVars( "jte",iJet,itJet->energy() );
    vars.FillVars( "jtpt",iJet,itJet->pt() );
    vars.FillVars( "jteta",iJet,itJet->eta() );
    vars.FillVars( "jtphi",iJet,itJet->phi() );

    vars.FillVars( "jtcsvt",iJet,fmin(fmax(itJet->bDiscriminator(btagger),-0.1),1.0) );        
    vars.FillVars( "jtcsvt_mvav2",iJet,fmin(fmax(itJet->bDiscriminator(btagger2),-0.1),1.0) );
    
    vars.FillVars( "jtCvsL", iJet, itJet->bDiscriminator(ctagger));
    vars.FillVars( "jtCvsB", iJet, itJet->bDiscriminator(ctagger2));

    //    vars.FillVars( "jtpuid",iJet,itJet->userFloat("pileupJetId:fullDiscriminant") );

    vars.FillVars( "jtntracks",iJet,itJet->associatedTracks().size() );
    vars.FillVars( "jtarea",iJet,itJet->jetArea() );
    vars.FillVars( "jtpull",iJet,itJet->associatedTracks().size() );  // to implement 
    vars.FillVars( "jtcharge",iJet,itJet->jetCharge() );
    vars.FillVars( "jtid",iJet,itJet->associatedTracks().size() ); //to implement
    //    vars.FillVars( "jtndaughters",iJet,itJet.numberOfDaughters());
    //    vars.FillVars( "jtjer",iJet,itJet.pfSpecific().mChargedHadronEnergy ); //to implement
    vars.FillVars( "jtgenflv",iJet,itJet->partonFlavour() );        
    vars.FillVars( "jtgenhadflv",iJet,itJet->hadronFlavour() );        

    /*
    if(itJet.isPFJet()){
      vars.FillVars( "jtchhadmult",iJet,itJet.pfSpecific().mChargedHadronEnergy );
      vars.FillVars( "jtchmult",iJet,itJet.pfSpecific().mChargedMultiplicity );
      vars.FillVars( "jtnhadronfrac",iJet,itJet.pfSpecific().mChargedHadronEnergy ); //to implement /missing raw e
      vars.FillVars( "jthfhadronfrac",iJet,itJet.pfSpecific().mChargedHadronEnergy ); //to implement
      } */
  }



  // Loose Jets
  for(std::vector<pat::Jet>::const_iterator itJet = input.selectedJetsLoose.begin() ; itJet != input.selectedJetsLoose.end(); ++itJet){
    int iJet = itJet - input.selectedJetsLoose.begin();
    vars.FillVars( "jt15e",iJet,itJet->energy() );
    vars.FillVars( "jt15pt",iJet,itJet->pt() );
    vars.FillVars( "jt15eta",iJet,itJet->eta() );
    vars.FillVars( "jt15phi",iJet,itJet->phi() );
    vars.FillVars( "jt15csvt",iJet,fmin(fmax(itJet->bDiscriminator(btagger),-0.1),1.0) );        
    vars.FillVars( "jt15csvt_mvav2",iJet,fmin(fmax(itJet->bDiscriminator(btagger2),-0.1),1.0) );        
    //    vars.FillVars( "jt15puid",iJet,itJet->userFloat("pileupJetId:fullDiscriminant") );

    vars.FillVars( "jt15ntracks",iJet,itJet->associatedTracks().size() );
    vars.FillVars( "jt15area",iJet,itJet->jetArea() );
    vars.FillVars( "jt15pull",iJet,itJet->associatedTracks().size() );  // to implement 
    vars.FillVars( "jt15charge",iJet,itJet->jetCharge() );
    vars.FillVars( "jt15id",iJet,itJet->associatedTracks().size() ); //to implement
  }


  //Fill Puppi Jet variables

  for(std::vector<pat::Jet>::const_iterator itJet = input.selectedPuppiJets.begin() ; itJet != input.selectedPuppiJets.end(); ++itJet){
    int iJet = itJet - input.selectedPuppiJets.begin();
    vars.FillVars( "pupjte",iJet,itJet->energy() );
    vars.FillVars( "pupjtpt",iJet,itJet->pt() );
    vars.FillVars( "pupjteta",iJet,itJet->eta() );
    vars.FillVars( "pupjtphi",iJet,itJet->phi() );
    vars.FillVars( "pupjtcsvt",iJet,fmin(fmax(itJet->bDiscriminator(btagger),-0.1),1.0) );        
    vars.FillVars( "pupjtcsvt_mvav2",iJet,fmin(fmax(itJet->bDiscriminator(btagger2),-0.1),1.0) );        
    
  }

  for(std::vector<reco::GenJet>::const_iterator itGenJet = input.selectedGenJets.begin() ; itGenJet != input.selectedGenJets.end(); ++itGenJet){
    int iGenJet = itGenJet - input.selectedGenJets.begin();
    
    vars.FillVars( "jtgene",iGenJet,itGenJet->energy() );
    vars.FillVars( "jtgenpt",iGenJet,itGenJet->pt() );
    vars.FillVars( "jtgeneta",iGenJet,itGenJet->eta() );
    vars.FillVars( "jtgenphi",iGenJet,itGenJet->phi() );
  }


  math::XYZTLorentzVector primLepVec = math::XYZTLorentzVector();
  if(input.selectedElectrons.size()>0 || input.selectedMuons.size()>0){
    primLepVec = tHqUtils::GetPrimLepVec(input.selectedElectrons,input.selectedMuons);
  }
  // Fill Lepton Variables
  for(std::vector<pat::Electron>::const_iterator itEle = input.selectedElectrons.begin(); itEle != input.selectedElectrons.end(); ++itEle){
    int iEle = itEle - input.selectedElectrons.begin();
    vars.FillVars( "ele",iEle,itEle->energy() );
    vars.FillVars( "elpt",iEle,itEle->pt() );
    vars.FillVars( "eleta",iEle,itEle->eta() );
    vars.FillVars( "elphi",iEle,itEle->phi() ); 
    if(itEle->hasUserFloat("relIso")){
      vars.FillVars( "eliso",iEle,itEle->userFloat("relIso") );
    }
    vars.FillVars( "elcharge",iEle,itEle->charge() );
  }


  std::vector<math::XYZTLorentzVector> selectedLeptons = tHqUtils::GetLepVecs(input.selectedElectrons,input.selectedMuons);
  for(std::vector<math::XYZTLorentzVector>::const_iterator itLep = selectedLeptons.begin(); itLep != selectedLeptons.end(); ++itLep){
    int iLep = itLep - selectedLeptons.begin();
    vars.FillVars( "leppt",iLep,itLep->pt() );
    vars.FillVars( "lepeta",iLep,itLep->eta() );
    vars.FillVars( "lepphi",iLep,itLep->phi() ); 
    vars.FillVars( "leppdg",iLep,tHqUtils::GetLepPdg(*itLep, input.selectedElectrons, input.selectedMuons));
  }
  vars.FillVar( "nlep",selectedLeptons.size());
  

  // Fill Lepton Variables
  for(std::vector<pat::Electron>::const_iterator itEle = input.selectedElectronsLoose.begin(); itEle != input.selectedElectronsLoose.end(); ++itEle){
    int iEle = itEle - input.selectedElectronsLoose.begin();
    vars.FillVars( "lele",iEle,itEle->energy() );
    vars.FillVars( "lelpt",iEle,itEle->pt() );
    vars.FillVars( "leleta",iEle,itEle->eta() );
    vars.FillVars( "lelphi",iEle,itEle->phi() ); 
    if(itEle->hasUserFloat("relIso")){
      vars.FillVars( "leliso",iEle,itEle->userFloat("relIso") );
    }
    vars.FillVars( "lelcharge",iEle,itEle->charge() );
  }

  for(std::vector<pat::Muon>::const_iterator itMu = input.selectedMuonsLoose.begin(); itMu != input.selectedMuonsLoose.end(); ++itMu){
    int iMu = itMu - input.selectedMuonsLoose.begin();
    vars.FillVars( "lmue",iMu,itMu->energy() );
    vars.FillVars( "lmupt",iMu,itMu->pt() );
    vars.FillVars( "lmueta",iMu,itMu->eta() );
    vars.FillVars( "lmuphi",iMu,itMu->phi() );
    if(itMu->hasUserFloat("relIso")){
      vars.FillVars( "lmuiso",iMu,itMu->userFloat("relIso") );
    }
    vars.FillVars( "lmucharge",iMu,itMu->charge() ); 
  }

  for(std::vector<pat::Muon>::const_iterator itMu = input.selectedMuons.begin(); itMu != input.selectedMuons.end(); ++itMu){
    int iMu = itMu - input.selectedMuons.begin();
    vars.FillVars( "mue",iMu,itMu->energy() );
    vars.FillVars( "mupt",iMu,itMu->pt() );
    vars.FillVars( "mueta",iMu,itMu->eta() );
    vars.FillVars( "muphi",iMu,itMu->phi() );
    if(itMu->hasUserFloat("relIso")){
      vars.FillVars( "muiso",iMu,itMu->userFloat("relIso") );
    }
    vars.FillVars( "mucharge",iMu,itMu->charge() ); 
  }
  

  //Fill Cos Theta star
    
  float cost_lj=-1.5;
  float cost_j1j=-1.5;
  float cost_j2j=-1.5;
  float cost_j3j=-1.5;
  float cost_j4j=-1.5;

  std::vector<math::XYZTLorentzVector> jetvecs = tHqUtils::GetJetVecs(input.selectedJets);
  math::XYZTLorentzVector p4all ;
  p4all += primLepVec;
  p4all += input.pfMET.p4();


  for(std::vector<math::XYZTLorentzVector>::iterator itJetVec = jetvecs.begin();itJetVec != jetvecs.end();++itJetVec){
    p4all += *itJetVec;
  }


  for(std::vector<math::XYZTLorentzVector>::iterator itJetVec = jetvecs.begin();itJetVec != jetvecs.end();++itJetVec){
    int iJetVec = itJetVec - jetvecs.begin();
    
    if(primLepVec.Pt()>1)     cost_lj = tHqUtils::CosThetaStar(*itJetVec,primLepVec);
    if(jetvecs.size()>0)      cost_j1j = tHqUtils::CosThetaStar(*itJetVec,jetvecs[0]);
    if(jetvecs.size()>1)      cost_j2j = tHqUtils::CosThetaStar(*itJetVec,jetvecs[1]);
    if(jetvecs.size()>2)      cost_j3j = tHqUtils::CosThetaStar(*itJetVec,jetvecs[2]);
    if(jetvecs.size()>3)      cost_j4j = tHqUtils::CosThetaStar(*itJetVec,jetvecs[3]);
    float costheta_jcm= tHqUtils::CosThetaCM(*itJetVec,p4all);
    
    vars.FillVars("jtcostheta_l",iJetVec,cost_lj);
    vars.FillVars("jtcostheta_j1",iJetVec,cost_j1j);
    vars.FillVars("jtcostheta_j2",iJetVec,cost_j2j);
    vars.FillVars("jtcostheta_j3",iJetVec,cost_j3j);
    vars.FillVars("jtcostheta_j4",iJetVec,cost_j4j);  
    vars.FillVars("jtcostheta_cm",iJetVec,costheta_jcm  );
    
  }

  



  // Reconstruct W 

  math::XYZTLorentzVector nuVec = math::XYZTLorentzVector();
  math::XYZTLorentzVector lepWVec = math::XYZTLorentzVector();
  int nlepw = 0;
  if(input.selectedElectrons.size()>0 || input.selectedMuons.size()>0){
    thqev.LeptonRec();
    thqev.NeutrinoRec();
    nuVec = thqev.GetNeutrinoVec();
    lepWVec = thqev.GetWVec();
    nlepw = 1;
  }

  vars.FillVar( "nlepw", nlepw );
  vars.FillVar( "lepwpt",  lepWVec.pt()  );
  vars.FillVar( "lepweta", lepWVec.eta() );
  vars.FillVar( "lepwphi", lepWVec.phi() );
  vars.FillVar( "lepwm",   lepWVec.M()   );
  
  
  vars.FillVar( "met",input.pfMET.pt() );
  vars.FillVar( "metphi",input.pfMET.phi() );

  if(input.selectedGenJets.size()>0){
    vars.FillVar( "genmet",input.pfMET.genMET()->pt() );
    vars.FillVar( "genmetphi",input.pfMET.genMET()->phi() );
  }

  
  math::XYZTLorentzVector metvec = input.pfMET.p4();
  
  // Fill M3 Variables
  float m3_helper = -1.;
  float maxpt=-1;
  for(std::vector<math::XYZTLorentzVector>::iterator itJetVec1 = jetvecs.begin() ; itJetVec1 != jetvecs.end(); ++itJetVec1){
    for(std::vector<math::XYZTLorentzVector>::iterator itJetVec2 = itJetVec1+1 ; itJetVec2 != jetvecs.end(); ++itJetVec2){
      for(std::vector<math::XYZTLorentzVector>::iterator itJetVec3 = itJetVec2+1 ; itJetVec3 != jetvecs.end(); ++itJetVec3){
    
        math::XYZTLorentzVector m3vec = *itJetVec1 + *itJetVec2 + *itJetVec3;
        
	      if(m3vec.Pt() > maxpt){
	        maxpt = m3vec.Pt();
	        m3_helper = m3vec.M();
	      }
      } 
    }
  }
  vars.FillVar("m3",m3_helper);
  
  // Fill MTW
  float mtw_helper = -1.;
  if(input.selectedElectrons.size()>0 || input.selectedMuons.size()>0){
    mtw_helper = sqrt(2*(primLepVec.Pt()*input.pfMET.pt() - primLepVec.Px()*input.pfMET.px() - primLepVec.Py()*input.pfMET.py()));
  }
  vars.FillVar("mtw",mtw_helper);
  
  // Fill Ht Variables
  float ht = 0.;
  float htjets = 0.;
  for(std::vector<pat::Jet>::const_iterator itJet = input.selectedJets.begin() ; itJet != input.selectedJets.end(); ++itJet){
    ht += itJet->pt();
    htjets += itJet->pt();
  }
  for(std::vector<pat::Electron>::const_iterator itEle = input.selectedElectronsLoose.begin(); itEle != input.selectedElectronsLoose.end(); ++itEle){
    ht += itEle->pt();
  }
  for(std::vector<pat::Muon>::const_iterator itMu = input.selectedMuonsLoose.begin(); itMu != input.selectedMuonsLoose.end(); ++itMu){
    ht += itMu->pt();
  }
  ht += input.pfMET.pt();
  
  vars.FillVar("sumHtTotal",ht);
  vars.FillVar("sumHt",htjets);
   
  // Fill CSV Variables
  // All Jets
  std::vector<float> csvJets;
  for(std::vector<pat::Jet>::const_iterator itJet = input.selectedJets.begin() ; itJet != input.selectedJets.end(); ++itJet){
    csvJets.push_back(fmin(fmax(itJet->bDiscriminator(btagger),-0.1),1.0));
  }
  
  std::sort(csvJets.begin(),csvJets.end(),tHqUtils::FirstIsLarger);
  //vars.FillVar("Evt_CSV_Min",csvJets.size()>0 ? csvJets.back() : -.1);
    
  // Event Shape Variables
  // Fox Wolfram Moments
  float h0,h1,h2,h3,h4;
  h0=-9;
  h1=-9;
  h2=-9;
  h3=-9;
  h4=-9;
  tHqUtils::GetFoxWolframMoments(jetvecs, h0,h1,h2,h3,h4);
  vars.FillVar( "wolframh0", h0 );
  vars.FillVar( "wolframh1", h1 );
  vars.FillVar( "wolframh2", h2 );
  vars.FillVar( "wolframh3", h3 );
  vars.FillVar( "wolframh4", h4 );
  
  // Aplanarity and Sphericity;
  float aplanarity,sphericity;
  tHqUtils::GetAplanaritySphericity(primLepVec, metvec, jetvecs, aplanarity, sphericity) ;
  vars.FillVar( "aplanarity", aplanarity );
  vars.FillVar( "sphericity", sphericity );

  


  
}
