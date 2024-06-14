//written by Nilay B to get the variables from the PDHD analysis ntuple 
#include "TH1.h"
#include "TGraph.h"
#include "TH2.h"
#include "TF1.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TMath.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TPad.h"
#include "TGraphErrors.h"
#include "TVectorD.h"
#include "TTimeStamp.h"
#include <fstream>
#include "TMinuit.h"
#include "TString.h"
#include <vector>
#include <string.h>
#include "TLatex.h"
#include "TPaveStats.h"
#include "TDatime.h"
#include "TColor.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TTree.h"
#include "TLegend.h"
#include "THStack.h"

void validating_plots(){
	gROOT->LoadMacro("protoDUNEStyle.C");
	gROOT->SetStyle("protoDUNEStyle");
	gROOT->ForceStyle();
	gStyle->SetTitleX(0.35);
	gStyle->SetOptFit(111);
	gStyle->SetPadRightMargin(0.15);
	gStyle->SetPadLeftMargin(0.15);
	TCanvas c1=TCanvas();
    	c1.SetLeftMargin(0.12);
	c1.SetBottomMargin(0.18);
  
  TFile *file = new TFile;
  TFile *file2 = new TFile;
  TFile *file3 = new TFile;
 
  
  TTree *Events = new TTree;
  TTree *Events2 = new TTree;
  TTree *Events3 = new TTree;
  TTree *Events4 = new TTree;
  TTree *Events5 = new TTree;
  TTree *Events6 = new TTree;
  TTree *Events7 = new TTree;
  TTree *Events8 = new TTree;
  TTree *Events9 = new TTree;
  TTree *Events10 = new TTree;
  TTree *Events11 = new TTree;
  TTree *Events12 = new TTree;
  TTree *Events13 = new TTree;
  TTree *Events14 = new TTree;
  TTree *Events15 = new TTree;
  TTree *Events16 = new TTree;
  TTree *Events17 = new TTree;
  TTree *Events18 = new TTree;
  TTree *Events19 = new TTree;
  TTree *Events20 = new TTree;
  TTree *Events21 = new TTree;
  TTree *Events22 = new TTree;
  TTree *Events23 = new TTree;
  TTree *Events24 = new TTree;
  TTree *Events25 = new TTree;
  TTree *Events26 = new TTree;
  TTree *Events27 = new TTree;
  TTree *Events28 = new TTree;
  TTree *Events29 = new TTree;
  TTree *Events30 = new TTree;
  TTree *Events31 = new TTree;
  TTree *Events32 = new TTree;
  TTree *Events33 = new TTree;
  TTree *Events34 = new TTree;
  TTree *Events35 = new TTree;
  TTree *Events36 = new TTree;
  TTree *Events37 = new TTree;
  TTree *Events38 = new TTree;
  TTree *Events39 = new TTree;
  TTree *Events40 = new TTree;
  TTree *Events41 = new TTree;
  TTree *Events42 = new TTree;
  TTree *Events43 = new TTree;
  TTree *Events44 = new TTree;
  TTree *Events45 = new TTree;
  TTree *Events46 = new TTree;
  TTree *Events47 = new TTree;
  TTree *Events48 = new TTree;
  TTree *Events49 = new TTree;
  TTree *Events50 = new TTree;
  TTree *Events51 = new TTree;
  
  
  //TTree *h1 = new TTree;
  
   
  //TCanvas *c1 = new TCanvas("name","title",800,800);
  
  file = TFile::Open("/exp/dune/data/users/calcuttj/pduneana_ntuples/2GeV_production/set0/PDSPProd4a_MC_2GeV_sce_datadriven_ntuple_v09_81_00d01_set0.root", "READ");
  //file = TFile::Open("/exp/dune/app/users/nbostan/protoduneana/protoduneana/singlephase/Analysis/ntuple_sets/prod_beam_p1GeV_cosmics_protodunehd_20240402T230743Z_188238_000255_g4_stage1_g4_stage2_sce_E500_detsim_reco_pdhd_ntuple_1.root", "READ");
  
  Events = (TTree*)file->Get("pduneana/beamana");
  Events2 = (TTree*)file->Get("pduneana/beamana");
  Events3 = (TTree*)file->Get("pduneana/beamana");
  Events3 = (TTree*)file->Get("pduneana/beamana");
  Events4 = (TTree*)file->Get("pduneana/beamana");
  Events5 = (TTree*)file->Get("pduneana/beamana");
  Events6 = (TTree*)file->Get("pduneana/beamana");
  Events7 = (TTree*)file->Get("pduneana/beamana");
  Events8 = (TTree*)file->Get("pduneana/beamana");
  Events9 = (TTree*)file->Get("pduneana/beamana");
  Events10 = (TTree*)file->Get("pduneana/beamana");
  Events11 = (TTree*)file->Get("pduneana/beamana");
  Events12 = (TTree*)file->Get("pduneana/beamana");
  Events13 = (TTree*)file->Get("pduneana/beamana");
  Events14 = (TTree*)file->Get("pduneana/beamana");
  Events15 = (TTree*)file->Get("pduneana/beamana");
  Events16 = (TTree*)file->Get("pduneana/beamana");
  Events17 = (TTree*)file->Get("pduneana/beamana");
  Events18 = (TTree*)file->Get("pduneana/beamana");
  Events19 = (TTree*)file->Get("pduneana/beamana");
  Events20 = (TTree*)file->Get("pduneana/beamana");
  Events21 = (TTree*)file->Get("pduneana/beamana");
  Events22 = (TTree*)file->Get("pduneana/beamana");
  Events23 = (TTree*)file->Get("pduneana/beamana");
  Events24 = (TTree*)file->Get("pduneana/beamana");
  Events25 = (TTree*)file->Get("pduneana/beamana");
  Events26 = (TTree*)file->Get("pduneana/beamana");
  Events27 = (TTree*)file->Get("pduneana/beamana");
  Events28 = (TTree*)file->Get("pduneana/beamana");
  Events29 = (TTree*)file->Get("pduneana/beamana");
  Events30 = (TTree*)file->Get("pduneana/beamana");
  Events31 = (TTree*)file->Get("pduneana/beamana");
  Events32 = (TTree*)file->Get("pduneana/beamana");
  Events33 = (TTree*)file->Get("pduneana/beamana");
  Events34 = (TTree*)file->Get("pduneana/beamana");
  Events35 = (TTree*)file->Get("pduneana/beamana");
  Events36 = (TTree*)file->Get("pduneana/beamana");
  Events37 = (TTree*)file->Get("pduneana/beamana");
  Events38 = (TTree*)file->Get("pduneana/beamana");
  Events39 = (TTree*)file->Get("pduneana/beamana");
  Events40 = (TTree*)file->Get("pduneana/beamana");
  Events41 = (TTree*)file->Get("pduneana/beamana");
  Events42 = (TTree*)file->Get("pduneana/beamana");
  Events43 = (TTree*)file->Get("pduneana/beamana");
  Events44 = (TTree*)file->Get("pduneana/beamana");
  Events45 = (TTree*)file->Get("pduneana/beamana");
  Events46 = (TTree*)file->Get("pduneana/beamana");
  Events47 = (TTree*)file->Get("pduneana/beamana");
  Events48 = (TTree*)file->Get("pduneana/beamana");
  Events49 = (TTree*)file->Get("pduneana/beamana");
  Events50 = (TTree*)file->Get("pduneana/beamana");
  Events51 = (TTree*)file->Get("pduneana/beamana");
  
  
  TFile *fout = new TFile("pdune_hd_analysis.root","RECREATE");
  gStyle->SetPalette(1);
 
 
   
  Events->Draw("true_beam_endZ>>hist1(100,All,All");
 
 
   TH1F * hist1 = (TH1F*)gDirectory->Get("hist1");
   hist1->Scale(1.0/hist1->Integral());
   gStyle->SetPalette(1);
   hist1->SetFillColor(6);
   hist1->SetXTitle ("True beam Z Endpoint [cm]");
   hist1->SetYTitle ("Number of Events, Area normalized");
   hist1->SetTitle("DUNE:ProtoDUNE-HD");
   //hist1->Fit("gaus");
   hist1->Write();
   
    Events2->Draw("reco_beam_endZ>>hist2(100,All,All");
   

   TH1F * hist2 = (TH1F*)gDirectory->Get("hist2");
   hist2->Scale(1.0/hist2->Integral());
   gStyle->SetPalette(2);
   hist2->SetFillColor(4);
   hist2->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist2->SetYTitle ("Number of Events, Area normalized");
   //hist2->Fit("gaus");
   hist2->SetTitle("DUNE:ProtoDUNE-HD");
   //gStyle->SetPalette(1);

   hist2->Write();
   
   Events3->Draw("reco_beam_startZ>>hist3(100,-20,80");
   
   TH1F * hist3 = (TH1F*)gDirectory->Get("hist3");
   hist3->Scale(1.0/hist3->Integral());
   gStyle->SetPalette(2);
   //hist2->SetFillColor(4);
   hist3->SetXTitle ("Reconstructed Z Startpoint [cm]");
   hist3->SetYTitle ("Number of Events, Area normalized");
   //hist3->Fit("gaus");
   hist3->SetTitle("DUNE:ProtoDUNE-HD");
   //gStyle->SetPalette(1);

   hist3->Write();
   
   
   
   Events4->Draw("reco_beam_endY:reco_beam_endX>>hist4(1000,All,All,1000,All,All","","COLZ");
   

   TH2F * hist4 = (TH2F*)gDirectory->Get("hist4");
   gPad->SetLogz();
   //gStyle->SetPalette(2);
   //hist2->SetFillColor(4);
   hist4->SetXTitle ("Reconstructed X Endpoint [cm]");
   hist4->SetYTitle ("Reconstructed Y Endpoint [cm]");
   hist4->SetStats(0);
   //hist2->Fit("gaus");
   hist4->SetTitle("DUNE:ProtoDUNE-HD");
   gStyle->SetPalette(1);

   hist4->Write();
   
   Events5->Draw("reco_beam_endY:reco_beam_endX>>hist5(1000,-400,400,1000,0,600","","COLZ");
   
   TH2F * hist5 = (TH2F*)gDirectory->Get("hist5");
   //gStyle->SetPalette(2);
   //hist2->SetFillColor(4);
   hist5->SetXTitle ("Reconstructed X Endpoint [cm]");
   hist5->SetYTitle ("Reconstructed Y Endpoint [cm]");
   gPad->SetLogz();
   hist5->SetStats(0);
   //hist2->Fit("gaus");
   hist5->SetTitle("DUNE:ProtoDUNE-HD");
   gStyle->SetPalette(1);

   hist5->Write();
   
   Events6->Draw("reco_beam_endX:reco_beam_endZ>>hist6(1000,0,600,1000,-400,400","","COLZ");
   
   TH2F * hist6 = (TH2F*)gDirectory->Get("hist6");
   //gStyle->SetPalette(2);
   //hist2->SetFillColor(4);
   hist6->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist6->SetYTitle ("Reconstructed X Endpoint [cm]");
   gPad->SetLogz();
   hist6->SetStats(0);
   //hist2->Fit("gaus");
   hist6->SetTitle("DUNE:ProtoDUNE-HD");
   gStyle->SetPalette(1);

   hist6->Write();
   
   //Events7->Draw("reco_beam_dEdX_SCE:reco_beam_resRange_SCE>>hist7(500,0,130,160,0,17","(abs(reco_beam_true_byE_PDG)==13 || abs(reco_beam_true_byE_PDG)==2212)" "","colz");
   Events7->Draw("reco_beam_dEdX_SCE:reco_beam_resRange_SCE>>hist7(650,0,130,170,0,17","","colz");
   
   TH2F * hist7 = (TH2F*)gDirectory->Get("hist7");
   //hist7->Scale(1.0/hist7->Integral());
   //gStyle->SetPalette(2);
   //hist2->SetFillColor(4);
   hist7->SetXTitle ("Residual range [cm], SCE corr.");
   hist7->SetYTitle ("Reconstructed dE/dX SCE [MeV/cm], SCE corr.");
   //gPad->SetLogz();
   hist7->SetStats(0);
   //hist7->Fit("gaus");
   hist7->SetTitle("DUNE: ProtoDUNE-HD");
   gStyle->SetPalette(1);

   hist7->Write();
   
   
   Events8->Draw("reco_beam_dEdX_SCE>>hist8(100,0,10","reco_beam_true_byE_PDG==2212");
   
   TH1F * hist8 = (TH1F*)gDirectory->Get("hist8");
   hist8->Scale(1.0/hist8->Integral());
   //gStyle->SetPalette(2);
   hist8->SetFillColor(2);
   hist8->SetXTitle ("Reconstructed dE/dX SCE [MeV/cm], SCE corr., p");
   hist8->SetYTitle ("Number of Events, Area normalized");
   //hist8->Fit("gaus");
   hist8->SetTitle("DUNE:ProtoDUNE-HD");
   //gStyle->SetPalette(1);

   hist8->Write();
   
   Events9->Draw("reco_beam_dEdX_SCE>>hist9(100,0,10","reco_beam_true_byE_PDG==13");
   
   TH1F * hist9 = (TH1F*)gDirectory->Get("hist9");
   hist9->Scale(1.0/hist9->Integral());
   gStyle->SetPalette(3);
   hist9->SetFillColor(3);
   hist9->SetXTitle ("Reconstructed dE/dX SCE [MeV/cm], SCE corr., #mu");
   hist9->SetYTitle ("Number of Events, Area normalized");
   //hist9->Fit("gaus");
   hist9->SetTitle("DUNE:ProtoDUNE-HD");
   //gStyle->SetPalette(1);

   hist9->Write();
   
   Events10->Draw("reco_beam_dEdX_SCE>>hist10(100,0,10","reco_beam_true_byE_PDG==211");
   
   TH1F * hist10 = (TH1F*)gDirectory->Get("hist10");
   hist10->Scale(1.0/hist10->Integral());
   //gStyle->SetPalette(4);
   hist10->SetFillColor(4);
   hist10->SetXTitle ("Reconstructed dE/dX SCE [MeV/cm], SCE corr., #pi^{+}");
   hist10->SetYTitle ("Number of Events, Area normalized");
   //hist9->Fit("gaus");
   hist10->SetTitle("DUNE:ProtoDUNE-HD");
   //gStyle->SetPalette(1);

   hist10->Write();
   
   Events11->Draw("true_beam_endZ>0>>hist11(200,All,All");
   
   TH1F * hist11 = (TH1F*)gDirectory->Get("hist11");
   hist11->Scale(1.0/hist11->Integral());
   //gStyle->SetPalette(4);
   //hist11->SetFillColor(4);
   hist11->SetXTitle ("True beam Z Endpoint [cm], Z_{end, true} > 0");
   hist11->SetYTitle ("Number of Events, Area normalized");
   //hist9->Fit("gaus");
   hist11->SetTitle("DUNE:ProtoDUNE-HD");
   //gStyle->SetPalette(1);

   hist11->Write();
   
   Events12->Draw("reco_beam_endY:reco_beam_endZ>>hist12(1200,0,600,1200,0,600","","COLZ");
   
   TH2F * hist12 = (TH2F*)gDirectory->Get("hist12");
   //hist12->Scale(1.0/hist12->Integral());
   //gStyle->SetPalette(2);
   //hist2->SetFillColor(4);
   hist12->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist12->SetYTitle ("Reconstructed Y Endpoint [cm]");
   //gPad->SetLogz();
   hist12->SetStats(0);
   hist12->SetTitle("DUNE:ProtoDUNE-HD");
   gStyle->SetPalette(1);

   hist12->Write();
   
   Events13->Draw("true_beam_endZ>0 && reco_beam_endZ<0>>hist13(200,All,All");
   
   TH1F * hist13 = (TH1F*)gDirectory->Get("hist13");
   hist13->Scale(1.0/hist13->Integral());
   //gStyle->SetPalette(4);
   //hist11->SetFillColor(4);
   hist13->SetXTitle ("Z Endpoint [cm], Z_{end, true} > 0, Z_{end, reco} < 0");
   hist13->SetYTitle ("Number of Events, Area normalized");
   //hist9->Fit("gaus");
   hist13->SetTitle("DUNE:ProtoDUNE-HD");
   //gStyle->SetPalette(1);

   hist13->Write();
   
   Events14->Draw("reco_beam_endZ>>hist14(100,All,All","(abs(reco_beam_true_byE_PDG)==211 || abs(reco_beam_true_byE_PDG)==2212 || abs(reco_beam_true_byE_PDG)==321) " "");
   TH1F * hist14 = (TH1F*)gDirectory->Get("hist14");
   hist14->Scale(1.0/hist14->Integral());
   //gStyle->SetPalette(1);
   hist14->SetXTitle ("Reconstructed Z Endpoint [cm], p, #pi^{+}, K^{+}");
   hist14->SetYTitle ("Number of Events");
   hist14->SetTitle("DUNE:ProtoDUNE-HD");
   hist14->Write();
    
   Events15->Draw("TMath::ATan2(sqrt(pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPy,2)),true_beam_daughter_startPz):sqrt(pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPz,2))>>hist15(300,0,3,260,0,2.5","","colz");
   TH2F * hist15 = (TH2F*)gDirectory->Get("hist15");
   //gStyle->SetPalette(1);
   hist15->SetXTitle ("True beam daughter p [GeV/c]"); 
   hist15->SetYTitle ("True beam daughter #theta [rad]");
   hist15->SetTitle("DUNE:ProtoDUNE-HD");
   hist15->Write();
   
   Events16->Draw("sqrt(pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPy,2)+pow(true_beam_daughter_startPz,2)):TMath::ATan2(true_beam_daughter_startPy, true_beam_daughter_startPx)*(360/(2*TMath::Pi()))>>hist16(50,-180,180,300,0,3","(abs(reco_beam_true_byE_PDG)==211 || abs(reco_beam_true_byE_PDG)==2212 || abs(reco_beam_true_byE_PDG)==321)" "","colz"); 

   TH2F * hist16 = (TH2F*)gDirectory->Get("hist16");
   gStyle->SetPalette(1);
   hist16->SetXTitle ("True beam daughter #phi [deg]");
   hist16->SetYTitle ("True beam daughter p [GeV/c]");
   hist16->SetTitle("DUNE:ProtoDUNE-HD");
   hist16->Write(); 
   
   Events17->Draw("TMath::ATan2(sqrt(pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPy,2)),true_beam_daughter_startPz)>>hist17(100,All,All","(abs(reco_beam_true_byE_PDG)==211) " "");
   TH1F * hist17 = (TH1F*)gDirectory->Get("hist17");
   hist17->Scale(1.0/hist17->Integral());
   //gStyle->SetPalette(1);
   hist17->SetXTitle ("True beam daughter, #pi^{+} #theta [rad]");
   hist17->SetYTitle ("Number of Events, Area normalized");
   hist17->SetTitle("DUNE:ProtoDUNE-HD");
   hist17->Write();
   
   Events18->Draw("TMath::ATan2(sqrt(pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPy,2)),true_beam_daughter_startPz)>>hist18(100,All,All","(abs(reco_beam_true_byE_PDG)==2212) " "");
   TH1F * hist18 = (TH1F*)gDirectory->Get("hist18");
   hist18->Scale(1.0/hist18->Integral());
   //gStyle->SetPalette(1);
   hist18->SetXTitle ("True beam daughter p #theta [rad]");
   hist18->SetYTitle ("Number of Events, Area normalized");
   hist18->SetTitle("DUNE:ProtoDUNE-HD");
   hist18->Write();
   
   Events19->Draw("sqrt(pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPy,2)+pow(true_beam_daughter_startPz,2))>>hist19(100,All,All""");
   TH1F * hist19 = (TH1F*)gDirectory->Get("hist19");
   hist19->Scale(1.0/hist19->Integral());
   //gStyle->SetPalette(1);
   hist19->SetXTitle ("True beam daughter p [GeV/c]");
   hist19->SetYTitle ("Number of Events, Area normalized");
   hist19->SetTitle("DUNE:ProtoDUNE-HD");
   hist19->Write();
   
   Events20->Draw("TMath::ATan2(sqrt(pow(true_beam_daughter_startPx,2)+pow(true_beam_daughter_startPy,2)),true_beam_daughter_startPz)>>hist20(100,All,All","");
   TH1F * hist20 = (TH1F*)gDirectory->Get("hist20");
   hist20->Scale(1.0/hist20->Integral());
   //gStyle->SetPalette(1);
   hist20->SetXTitle ("True beam daughter #theta [rad]");
   hist20->SetYTitle ("Number of Events, Area normalized");
   hist20->SetTitle("DUNE:ProtoDUNE-HD");
   hist20->Write();
   
   Events21->Draw("reco_beam_Chi2_proton>>hist21(100,All,All","");
   TH1F * hist21 = (TH1F*)gDirectory->Get("hist21");
   hist21->Scale(1.0/hist21->Integral());
   //gStyle->SetPalette(1);
   hist21->SetXTitle ("Reconstructed beam #chi^{2} proton");
   hist21->SetYTitle ("Number of Events, Area normalized");
   hist21->SetTitle("DUNE:ProtoDUNE-HD");
   hist21->Write();
   
   Events22->Draw("reco_beam_Chi2_muon>>hist22(100,All,All","");
   TH1F * hist22 = (TH1F*)gDirectory->Get("hist22");
   hist22->Scale(1.0/hist22->Integral());
   //gStyle->SetPalette(1);
   hist22->SetXTitle ("Reconstructed beam #chi^{2} muon");
   hist22->SetYTitle ("Number of Events, Area normalized");
   hist22->SetTitle("DUNE:ProtoDUNE-HD");
   hist22->Write();
   
   Events23->Draw("reco_beam_Chi2_proton>>hist23(100,All,All","");
   TH1F * hist23 = (TH1F*)gDirectory->Get("hist23");
   hist23->Scale(1.0/hist23->Integral());
   //gStyle->SetPalette(1);
   hist23->SetXTitle ("Reconstructed beam #chi^{2} proton");
   hist23->SetYTitle ("Number of Events, Area normalized");
   hist23->SetTitle("DUNE:ProtoDUNE-HD");
   hist23->Write();
   
   Events24->Draw("reco_beam_Chi2_muon>>hist24(100,All,All","");
   TH1F * hist24 = (TH1F*)gDirectory->Get("hist24");
   hist24->Scale(1.0/hist24->Integral());
   //gStyle->SetPalette(1);
   hist24->SetXTitle ("Reconstructed beam #chi^{2} muon");
   hist24->SetYTitle ("Number of Events, Area normalized");
   hist24->SetTitle("DUNE:ProtoDUNE-HD");
   hist24->Write();
   
   Events25->Draw("reco_beam_interactingEnergy>>hist25(100,All,All","");
   TH1F * hist25 = (TH1F*)gDirectory->Get("hist25");
   hist25->Scale(1.0/hist25->Integral());
   //gStyle->SetPalette(1);
   hist25->SetXTitle ("Reconstructed beam interacting energy(KE) [MeV]");
   hist25->SetYTitle ("Number of Events, Area normalized");
   //hist25->SetTitle("DUNE: ProtoDUNE-HD");
   hist25->Write();
   
   Events26->Draw("reco_beam_incidentEnergies>>hist26(100,All,All","");
   TH1F * hist26 = (TH1F*)gDirectory->Get("hist26");
   hist26->Scale(1.0/hist26->Integral());
   //gStyle->SetPalette(1);
   hist26->SetXTitle ("Reconstructed beam incident energy [MeV]");
   hist26->SetYTitle ("Number of Events, Area normalized");
   hist26->SetTitle("DUNE:ProtoDUNE-HD");
   hist26->Write();
   
   Events27->Draw("beam_inst_Y:beam_inst_X>>hist27(100, All, All,100, All, All","","COLZ");
   
   TH2F * hist27 = (TH2F*)gDirectory->Get("hist27");
   //hist32->Scale(1.0/hist32->Integral());
   gStyle->SetPalette(1);
   //hist2->SetFillColor(4);
   hist27->SetXTitle ("X_{beamline [cm]}");
   hist27->SetYTitle ("Y_{beamline [cm]}");
   //gPad->SetLogz();
   hist27->SetStats(0);
   hist27->SetTitle("DUNE:ProtoDUNE-HD");
   hist27->Write();
   
   Events28->Draw("reco_beam_interactingEnergy-true_beam_interactingEnergy>>hist28(100,All,All","");
   TH1F * hist28 = (TH1F*)gDirectory->Get("hist28");
   hist28->Scale(1.0/hist28->Integral());
   //gStyle->SetPalette(1);
   hist28->SetXTitle ("#DeltaKE_{reco-true} [MeV]");
   hist28->SetYTitle ("Number of Events, Area normalized");
   hist28->SetTitle("DUNE:ProtoDUNE-HD");
   hist28->Write();
   
   Events29->Draw("true_beam_len-reco_beam_alt_len>>hist29(100,All,All","");
   TH1F * hist29 = (TH1F*)gDirectory->Get("hist29");
   hist29->Scale(1.0/hist29->Integral());
   //gStyle->SetPalette(1);
   hist29->SetXTitle ("Length_{true}-Length_{reco, SCE corr.} [cm]");
   hist29->SetYTitle ("Number of Events, Area normalized");
   hist29->SetTitle("DUNE:ProtoDUNE-HD");
   hist29->Write();

   Events30->Draw("true_beam_len-reco_beam_alt_len>>hist30(100,All,All","");
   TH1F * hist30 = (TH1F*)gDirectory->Get("hist30");
   hist30->Scale(1.0/hist30->Integral());
   //gStyle->SetPalette(1);
   hist30->SetXTitle ("Length_{true}-Length_{reco, SCE corr.} [cm]");
   hist30->SetYTitle ("Number of Events, Area normalized");
   hist30->SetTitle("DUNE:ProtoDUNE-HD");
   hist30->Write();
   
   Events31->Draw("true_beam_endZ-reco_beam_calo_endZ>>hist31(100,All,All","");
   TH1F * hist31 = (TH1F*)gDirectory->Get("hist31");
   hist31->Scale(1.0/hist31->Integral());
   //gStyle->SetPalette(1);
   hist31->SetXTitle ("Z_{end,true}-Z_{end,reco, SCE corr.} [cm]");
   hist31->SetYTitle ("Number of Events, Area normalized");
   hist31->SetTitle("DUNE:ProtoDUNE-HD");
   hist31->Write();
   
   Events32->Draw("true_beam_endZ-reco_beam_calo_endZ>>hist32(100,All,All","");
   TH1F * hist32 = (TH1F*)gDirectory->Get("hist32");
   hist32->Scale(1.0/hist32->Integral());
   //gStyle->SetPalette(1);
   hist32->SetXTitle ("Z_{end,true}-Z_{end,reco, SCE corr.} [cm]");
   hist32->SetYTitle ("Number of Events, Area normalized");
   hist32->SetTitle("DUNE:ProtoDUNE-HD");
   hist32->Write();
   
   Events33->Draw("reco_beam_len>>hist33(100,All,All","");
   TH1F * hist33 = (TH1F*)gDirectory->Get("hist33");
   hist33->Scale(1.0/hist33->Integral());
   //gStyle->SetPalette(1);
   hist33->SetXTitle ("Reconstructed Track Length [cm]");
   hist33->SetYTitle ("Number of Events, Area normalized");
   hist33->SetTitle("DUNE:ProtoDUNE-HD");
   hist33->Write();
   
   Events34->Draw("reco_beam_alt_len>>hist34(100,All,All","");
   TH1F * hist34 = (TH1F*)gDirectory->Get("hist34");
   hist34->Scale(1.0/hist34->Integral());
   //gStyle->SetPalette(1);
   hist34->SetXTitle ("Reconstructed Calib. Track Length [cm]");
   hist34->SetYTitle ("Number of Events, Area normalized");
   hist34->SetTitle("DUNE:ProtoDUNE-HD");
   hist34->Write();
   
   Events35->Draw("beam_inst_X-reco_beam_startX>>hist35(100,All,All","");
   TH1F * hist35 = (TH1F*)gDirectory->Get("hist35");
   hist35->Scale(1.0/hist35->Integral());
   //gStyle->SetPalette(1);
   hist35->SetXTitle ("#Delta_{X,beamline-TPC} [cm]");
   hist35->SetYTitle ("Number of Events, Area normalized");
   hist35->SetTitle("DUNE:ProtoDUNE-HD");
   hist35->Write();
   
   Events36->Draw("beam_inst_Y-reco_beam_startY>>hist36(100,All,All","");
   TH1F * hist36 = (TH1F*)gDirectory->Get("hist36");
   hist36->Scale(1.0/hist36->Integral());
   //gStyle->SetPalette(1);
   hist36->SetXTitle ("#Delta_{Y,beamline-TPC} [cm]");
   hist36->SetYTitle ("Number of Events, Area normalized");
   hist36->SetTitle("DUNE:ProtoDUNE-HD");
   hist36->Write();
   
   Events37->Draw("beam_inst_Z-reco_beam_startZ>>hist37(100,All,All","");
   TH1F * hist37 = (TH1F*)gDirectory->Get("hist37");
   hist37->Scale(1.0/hist37->Integral());
   //gStyle->SetPalette(1);
   hist37->SetXTitle ("#Delta_{Z,beamline-TPC} [cm]");
   hist37->SetYTitle ("Number of Events, Area normalized");
   hist37->SetTitle("DUNE:ProtoDUNE-HD");
   hist37->Write();
   
   Events38->Draw("TMath::Sqrt(TMath::Power(beam_inst_X-reco_beam_startX,2)+TMath::Power(beam_inst_Y-reco_beam_startY,2))>>hist38(400,0,2""");
   TH1F * hist38 = (TH1F*)gDirectory->Get("hist38");
   hist38->Scale(1.0/hist38->Integral());
   //gStyle->SetPalette(1);
   hist38->SetXTitle ("#Delta_{XY} [cm]");
   hist38->SetYTitle ("Number of Events, Area normalized");
   hist38->SetTitle("DUNE:ProtoDUNE-HD");
   hist38->Write();
   
   Events39->Draw("(reco_beam_endZ-reco_beam_startZ)/(reco_beam_endX-reco_beam_startX)>>hist39(400,0,2""");
   TH1F * hist39 = (TH1F*)gDirectory->Get("hist39");
   hist39->Scale(1.0/hist39->Integral());
   //gStyle->SetPalette(1);
   hist39->SetXTitle ("Reconstructed beam cos_{XZ}");
   hist39->SetYTitle ("Number of Events, Area normalized");
   hist39->SetTitle("DUNE:ProtoDUNE-HD");
   hist39->Write();
   
   Events40->Draw("(reco_beam_endZ-reco_beam_startZ)/(reco_beam_endY-reco_beam_startY)>>hist40(400,0,2""");
   TH1F * hist40 = (TH1F*)gDirectory->Get("hist40");
   hist40->Scale(1.0/hist40->Integral());
   //gStyle->SetPalette(1);
   hist40->SetXTitle ("Reconstructed beam cos_{YZ}");
   hist40->SetYTitle ("Number of Events, Area normalized");
   hist40->SetTitle("DUNE:ProtoDUNE-HD");
   hist40->Write();

   Events41->Draw("beam_inst_dirX*reco_beam_trackDirX+beam_inst_dirY*reco_beam_trackDirY+beam_inst_dirZ*reco_beam_trackDirZ>>hist41(400,0,2""");
   TH1F * hist41 = (TH1F*)gDirectory->Get("hist41");
   hist41->Scale(1.0/hist41->Integral());
   //gStyle->SetPalette(1);
   hist41->SetXTitle ("Reconstructed beam dCos");
   hist41->SetYTitle ("Number of Events, Area normalized");
   hist41->SetTitle("DUNE:ProtoDUNE-HD");
   hist41->Write();
   
   Events42->Draw("reco_beam_trackEndDirX*reco_beam_trackDirX+reco_beam_trackEndDirY*reco_beam_trackDirY+reco_beam_trackEndDirZ*reco_beam_trackDirZ>>hist42(400,0,2""");
   TH1F * hist42 = (TH1F*)gDirectory->Get("hist42");
   hist42->Scale(1.0/hist42->Integral());
   //gStyle->SetPalette(1);
   hist42->SetXTitle ("Reconstructed beam dirCos");
   hist42->SetYTitle ("Number of Events, Area normalized");
   hist42->SetTitle("DUNE:ProtoDUNE-HD");
   hist42->Write();
   
   Events43->Draw("sqrt(true_beam_endP*true_beam_endP*1.e6 + 493.677*493.677) - 493.677>>hist43(100,0,0.06","(abs(true_beam_PDG)==321)" "");
   TH1F * hist43 = (TH1F*)gDirectory->Get("hist43");
   hist43->Scale(1.0/hist43->Integral());
   //gStyle->SetPalette(1);
   hist43->SetXTitle ("True beam traj interacting Energy (KE) [MeV], K^{#pm}");
   hist43->SetYTitle ("Number of Events, Area normalized");
   hist43->SetTitle("DUNE:ProtoDUNE-HD");
   hist43->Write();
   
   Events44->Draw("sqrt(true_beam_endP*true_beam_endP*1.e6 + 139.57*139.57) - 139.57>>hist44(100,0,0.06","(abs(true_beam_PDG)==211)" "");
   TH1F * hist44 = (TH1F*)gDirectory->Get("hist44");
   hist44->Scale(1.0/hist44->Integral());
   //gStyle->SetPalette(1);
   hist44->SetXTitle ("True beam traj interacting Energy (KE) [MeV], #pi^{#pm}");
   hist44->SetYTitle ("Number of Events, Area normalized");
   hist44->SetTitle("DUNE:ProtoDUNE-HD");
   hist44->Write();
   
   Events51->Draw("sqrt(true_beam_endP*true_beam_endP*1.e6 + 938.272*938.272) - 938.272>>hist51(100,0,0.06","(abs(true_beam_PDG)==2211)" "");
   TH1F * hist51 = (TH1F*)gDirectory->Get("hist51");
   hist51->Scale(1.0/hist51->Integral());
   //gStyle->SetPalette(1);
   hist51->SetXTitle ("True beam traj interacting Energy (KE) [MeV], p^{#pm}");
   hist51->SetYTitle ("Number of Events, Area normalized");
   hist51->SetTitle("DUNE:ProtoDUNE-HD");
   hist51->Write(); 
   
   Events45->Draw("reco_beam_endZ>>hist45(100,All,All","(abs(reco_beam_true_byE_PDG)==211)" "");  

   TH1F * hist45 = (TH1F*)gDirectory->Get("hist45");
   hist45->Scale(1.0/hist45->Integral());
   hist45->SetFillColor(4);
   hist45->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist45->SetYTitle ("Number of Events, Area normalized");
   //hist2->Fit("gaus");
   hist45->SetTitle("Sec. #pi^{+/-}");
   //gStyle->SetPalette(1);
   hist45->Write();
   
   Events46->Draw("reco_beam_endZ>>hist46(100,All,All","(abs(reco_beam_true_byE_PDG)==321)" "");  

   TH1F * hist46 = (TH1F*)gDirectory->Get("hist46");
   hist46->Scale(1.0/hist46->Integral());
   hist46->SetFillColor(5);
   hist46->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist46->SetYTitle ("Number of Events, Area normalized");
   //hist2->Fit("gaus");
   hist46->SetTitle("Sec. K^{+/-}");
   //gStyle->SetPalette(1);
   hist46->Write();
   
   Events47->Draw("reco_beam_endZ>>hist47(100,All,All","(abs(reco_beam_true_byE_PDG)==13)" "");  

   TH1F * hist47 = (TH1F*)gDirectory->Get("hist47");
   hist47->Scale(1.0/hist47->Integral());
   hist47->SetFillColor(6);
   hist47->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist47->SetYTitle ("Number of Events, Area normalized");
   //hist2->Fit("gaus");
   hist47->SetTitle("Sec. or cosmic #mu^{+/-}");
   //gStyle->SetPalette(1);
   hist47->Write();
   
   Events48->Draw("reco_beam_endZ>>hist48(100,All,All","(abs(reco_beam_true_byE_PDG)==2212)" "");  

   TH1F * hist48 = (TH1F*)gDirectory->Get("hist48");
   hist48->Scale(1.0/hist48->Integral());
   hist48->SetFillColor(7);
   hist48->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist48->SetYTitle ("Number of Events, Area normalized");
   //hist2->Fit("gaus");
   hist48->SetTitle("Sec. p^{+/-}");
   //gStyle->SetPalette(1);
   hist48->Write();
   
   Events49->Draw("reco_beam_endZ>>hist49(100,All,All","(abs(reco_beam_true_byE_PDG)==11 || abs(reco_beam_true_byE_PDG)==22)" "");  

   TH1F * hist49 = (TH1F*)gDirectory->Get("hist49");
   hist49->Scale(1.0/hist49->Integral());
   hist49->SetFillColor(3);
   hist49->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist49->SetYTitle ("Number of Events, Area normalized");
   //hist2->Fit("gaus");
   hist49->SetTitle("Sec. e^{+/-}/#gamma");
   //gStyle->SetPalette(1);
   hist49->Write();
   
   Events50->Draw("reco_beam_endZ>>hist50(100,All,All","(reco_beam_true_byE_PDG>3000 || reco_beam_true_byE_PDG==-321 || reco_beam_true_byE_PDG==-211 || reco_beam_true_byE_PDG==-2212 || reco_beam_true_byE_PDG==-11 || reco_beam_true_byE_PDG==-22 || (reco_beam_true_byE_PDG)==-999)" "");  

   TH1F * hist50 = (TH1F*)gDirectory->Get("hist50");
   hist50->Scale(1.0/hist50->Integral());
   hist50->SetFillColor(2);
   hist50->SetXTitle ("Reconstructed Z Endpoint [cm]");
   hist50->SetYTitle ("Number of Events, Area normalized");
   //hist2->Fit("gaus");
   hist50->SetTitle("Sec. other");
   //gStyle->SetPalette(1);
   hist50->Write();
        
        
     TLatex tL;
     tL.SetNDC();
     tL.DrawLatex(0.20,0.94,"#bf{DUNE:ProtoDUNE-SP}");
   c1.Modified();
                     
}


