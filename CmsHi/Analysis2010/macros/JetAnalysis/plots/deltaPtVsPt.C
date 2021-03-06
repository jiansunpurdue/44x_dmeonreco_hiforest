{
//=========Macro generated from canvas: c1/
//=========  (Mon Dec 13 15:06:55 2010) by ROOT version5.22/00d
   TCanvas *c1 = new TCanvas("c1", "",5,49,1250,530);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(0);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.04);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.15);
   c1->SetFrameLineColor(0);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0,0.3822153,0.9829488);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(65,-17.95422,240,102.4072);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(0);
   p_0_0->SetTickx(1);
   p_0_0->SetTicky(1);
   p_0_0->SetLeftMargin(0.2);
   p_0_0->SetRightMargin(0);
   p_0_0->SetTopMargin(0.02);
   p_0_0->SetBottomMargin(0.15);
   p_0_0->SetFrameLineColor(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameLineColor(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH1 *hTmp = new TH1D("hTmp","",100,100,240);
   hTmp->SetMinimum(0.1);
   hTmp->SetMaximum(100);
   hTmp->SetFillColor(1);
   hTmp->SetFillStyle(0);
   hTmp->SetLineStyle(0);
   hTmp->SetMarkerStyle(20);
   hTmp->SetMarkerSize(0.8);
   hTmp->GetXaxis()->CenterTitle(true);
   hTmp->GetXaxis()->SetLabelFont(43);
   hTmp->GetXaxis()->SetLabelOffset(0.01);
   hTmp->GetXaxis()->SetLabelSize(22);
   hTmp->GetXaxis()->SetTitleSize(0.055);
   hTmp->GetXaxis()->SetTitleFont(42);
   hTmp->GetYaxis()->SetTitle("(p_{T}^{1}-p_{T}^{2}) (GeV/c)");
   hTmp->GetYaxis()->CenterTitle(true);
   hTmp->GetYaxis()->SetLabelFont(42);
   hTmp->GetYaxis()->SetLabelOffset(0.01);
   hTmp->GetYaxis()->SetLabelSize(0.045);
   hTmp->GetYaxis()->SetTitleSize(0.055);
   hTmp->GetYaxis()->SetTitleOffset(1.5);
   hTmp->GetYaxis()->SetTitleFont(42);
   hTmp->GetZaxis()->SetLabelFont(42);
   hTmp->GetZaxis()->SetLabelSize(0.045);
   hTmp->GetZaxis()->SetTitleFont(42);
   hTmp->Draw("");
   TLine *line = new TLine(101,32.11626,101,31.51626);
   line->Draw();
   line = new TLine(109,32.11626,109,31.51626);
   line->Draw();
   line = new TLine(101,32.11626,109,32.11626);
   line->Draw();
   line = new TLine(101,27.24836,101,27.84836);
   line->Draw();
   line = new TLine(109,27.24836,109,27.84836);
   line->Draw();
   line = new TLine(101,27.24836,109,27.24836);
   line->Draw();
   line = new TLine(111,37.93218,111,37.33218);
   line->Draw();
   line = new TLine(119,37.93218,119,37.33218);
   line->Draw();
   line = new TLine(111,37.93218,119,37.93218);
   line->Draw();
   line = new TLine(111,32.18276,111,32.78276);
   line->Draw();
   line = new TLine(119,32.18276,119,32.78276);
   line->Draw();
   line = new TLine(111,32.18276,119,32.18276);
   line->Draw();
   line = new TLine(121,40.71677,121,40.11677);
   line->Draw();
   line = new TLine(129,40.71677,129,40.11677);
   line->Draw();
   line = new TLine(121,40.71677,129,40.71677);
   line->Draw();
   line = new TLine(121,34.54528,121,35.14528);
   line->Draw();
   line = new TLine(129,34.54528,129,35.14528);
   line->Draw();
   line = new TLine(121,34.54528,129,34.54528);
   line->Draw();
   line = new TLine(131,49.5464,131,48.9464);
   line->Draw();
   line = new TLine(139,49.5464,139,48.9464);
   line->Draw();
   line = new TLine(131,49.5464,139,49.5464);
   line->Draw();
   line = new TLine(131,42.03659,131,42.63659);
   line->Draw();
   line = new TLine(139,42.03659,139,42.63659);
   line->Draw();
   line = new TLine(131,42.03659,139,42.03659);
   line->Draw();
   line = new TLine(151,50.58297,151,49.98297);
   line->Draw();
   line = new TLine(159,50.58297,159,49.98297);
   line->Draw();
   line = new TLine(151,50.58297,159,50.58297);
   line->Draw();
   line = new TLine(151,42.91605,151,43.51605);
   line->Draw();
   line = new TLine(159,42.91605,159,43.51605);
   line->Draw();
   line = new TLine(151,42.91605,159,42.91605);
   line->Draw();
   line = new TLine(201,60.7935,201,60.1935);
   line->Draw();
   line = new TLine(209,60.7935,209,60.1935);
   line->Draw();
   line = new TLine(201,60.7935,209,60.7935);
   line->Draw();
   line = new TLine(201,51.57896,201,52.17896);
   line->Draw();
   line = new TLine(209,51.57896,209,52.17896);
   line->Draw();
   line = new TLine(201,51.57896,209,51.57896);
   line->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6);
   grae->SetName("g");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,105,29.68231);
   grae->SetPointError(0,0,0,1.220878,1.220878);
   grae->SetPoint(1,115,35.05747);
   grae->SetPointError(1,0,0,1.835998,1.835998);
   grae->SetPoint(2,125,37.63103);
   grae->SetPointError(2,0,0,2.387652,2.387652);
   grae->SetPoint(3,135,45.7915);
   grae->SetPointError(3,0,0,3.625618,3.625618);
   grae->SetPoint(4,155,46.74951);
   grae->SetPointError(4,0,0,3.156814,3.156814);
   grae->SetPoint(5,205,56.18623);
   grae->SetPointError(5,0,0,5.815659,5.815659);
   
   TH1 *g1 = new TH1F("g1","",100,95,215);
   g1->SetMinimum(25.10739);
   g1->SetMaximum(65.35594);
   g1->SetDirectory(0);
   g1->SetStats(0);
   g1->SetFillColor(1);
   g1->SetFillStyle(0);
   g1->SetLineStyle(0);
   g1->SetMarkerStyle(20);
   g1->SetMarkerSize(0.8);
   g1->GetXaxis()->SetLabelFont(42);
   g1->GetXaxis()->SetLabelOffset(0.01);
   g1->GetXaxis()->SetLabelSize(0.045);
   g1->GetXaxis()->SetTitleSize(0.055);
   g1->GetXaxis()->SetTitleFont(42);
   g1->GetYaxis()->SetLabelFont(42);
   g1->GetYaxis()->SetLabelOffset(0.01);
   g1->GetYaxis()->SetLabelSize(0.045);
   g1->GetYaxis()->SetTitleSize(0.055);
   g1->GetYaxis()->SetTitleFont(42);
   g1->GetZaxis()->SetLabelFont(42);
   g1->GetZaxis()->SetLabelSize(0.045);
   g1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(g1);
   
   grae->Draw("p ");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("gMix");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineColor(2);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,105,24.35653);
   grae->SetPointError(0,0,0,0.4475932,0.4475932);
   grae->SetPoint(1,115,28.48433);
   grae->SetPointError(1,0,0,0.6432248,0.6432248);
   grae->SetPoint(2,125,32.80451);
   grae->SetPointError(2,0,0,0.9092144,0.9092144);
   grae->SetPoint(3,135,35.80594);
   grae->SetPointError(3,0,0,1.267697,1.267697);
   grae->SetPoint(4,155,40.37198);
   grae->SetPointError(4,0,0,1.250535,1.250535);
   grae->SetPoint(5,205,49.62961);
   grae->SetPointError(5,0,0,2.440912,2.440912);
   
   TH1 *gMix2 = new TH1F("gMix2","",100,95,215);
   gMix2->SetMinimum(21.09278);
   gMix2->SetMaximum(54.88668);
   gMix2->SetDirectory(0);
   gMix2->SetStats(0);
   gMix2->SetFillColor(1);
   gMix2->SetFillStyle(0);
   gMix2->SetLineStyle(0);
   gMix2->SetMarkerStyle(20);
   gMix2->SetMarkerSize(0.8);
   gMix2->GetXaxis()->SetLabelFont(42);
   gMix2->GetXaxis()->SetLabelOffset(0.01);
   gMix2->GetXaxis()->SetLabelSize(0.045);
   gMix2->GetXaxis()->SetTitleSize(0.055);
   gMix2->GetXaxis()->SetTitleFont(42);
   gMix2->GetYaxis()->SetLabelFont(42);
   gMix2->GetYaxis()->SetLabelOffset(0.01);
   gMix2->GetYaxis()->SetLabelSize(0.045);
   gMix2->GetYaxis()->SetTitleSize(0.055);
   gMix2->GetYaxis()->SetTitleFont(42);
   gMix2->GetZaxis()->SetLabelFont(42);
   gMix2->GetZaxis()->SetLabelSize(0.045);
   gMix2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(gMix2);
   
   grae->Draw("p ");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("gPythia");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineColor(4);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,105,23.82808);
   grae->SetPointError(0,0,0,0.4819059,0.4819059);
   grae->SetPoint(1,115,27.88467);
   grae->SetPointError(1,0,0,0.6593168,0.6593168);
   grae->SetPoint(2,125,31.67044);
   grae->SetPointError(2,0,0,0.930092,0.930092);
   grae->SetPoint(3,135,34.46148);
   grae->SetPointError(3,0,0,1.260327,1.260327);
   grae->SetPoint(4,155,39.92178);
   grae->SetPointError(4,0,0,1.279812,1.279812);
   grae->SetPoint(5,205,46.85367);
   grae->SetPointError(5,0,0,2.317305,2.317305);
   
   TH1 *gPythia3 = new TH1F("gPythia3","",100,95,215);
   gPythia3->SetMinimum(20.76369);
   gPythia3->SetMaximum(51.75346);
   gPythia3->SetDirectory(0);
   gPythia3->SetStats(0);
   gPythia3->SetFillColor(1);
   gPythia3->SetFillStyle(0);
   gPythia3->SetLineStyle(0);
   gPythia3->SetMarkerStyle(20);
   gPythia3->SetMarkerSize(0.8);
   gPythia3->GetXaxis()->SetLabelFont(42);
   gPythia3->GetXaxis()->SetLabelOffset(0.01);
   gPythia3->GetXaxis()->SetLabelSize(0.045);
   gPythia3->GetXaxis()->SetTitleSize(0.055);
   gPythia3->GetXaxis()->SetTitleFont(42);
   gPythia3->GetYaxis()->SetLabelFont(42);
   gPythia3->GetYaxis()->SetLabelOffset(0.01);
   gPythia3->GetYaxis()->SetLabelSize(0.045);
   gPythia3->GetYaxis()->SetTitleSize(0.055);
   gPythia3->GetYaxis()->SetTitleFont(42);
   gPythia3->GetZaxis()->SetLabelFont(42);
   gPythia3->GetZaxis()->SetLabelSize(0.045);
   gPythia3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(gPythia3);
   
   grae->Draw("p ");
   
   TF1 *f = new TF1("f","[0]+[1]*x+[2]*x*x+[3]*x",100,220);
   f->SetFillColor(19);
   f->SetFillStyle(0);
   f->SetMarkerStyle(20);
   f->SetMarkerSize(0.8);
   f->SetLineWidth(1);
   f->SetLineStyle(2);
   f->SetChisquare(1.758825);
   f->SetNDF(5);
   f->GetXaxis()->SetLabelFont(42);
   f->GetXaxis()->SetLabelOffset(0.01);
   f->GetXaxis()->SetLabelSize(0.045);
   f->GetXaxis()->SetTitleSize(0.055);
   f->GetXaxis()->SetTitleFont(42);
   f->GetYaxis()->SetLabelFont(42);
   f->GetYaxis()->SetLabelOffset(0.01);
   f->GetYaxis()->SetLabelSize(0.045);
   f->GetYaxis()->SetTitleSize(0.055);
   f->GetYaxis()->SetTitleFont(42);
   f->SetParameter(0,-40.81576);
   f->SetParError(0,0);
   f->SetParLimits(0,-40.81576,-40.81576);
   f->SetParameter(1,0.814184);
   f->SetParError(1,0);
   f->SetParLimits(1,0.814184,0.814184);
   f->SetParameter(2,-0.001887869);
   f->SetParError(2,0);
   f->SetParLimits(2,-0.001887869,-0.001887869);
   f->SetParameter(3,0.05587006);
   f->SetParError(3,0.007235643);
   f->SetParLimits(3,0,0);
   f->Draw("same");
   
   TF1 *f2 = new TF1("f2","[0]+[1]*x+[2]*x*x+[3]",100,220);
   f2->SetFillColor(19);
   f2->SetFillStyle(0);
   f2->SetMarkerStyle(20);
   f2->SetMarkerSize(0.8);
   f2->SetLineWidth(1);
   f2->SetChisquare(2.325768);
   f2->SetNDF(5);
   f2->GetXaxis()->SetLabelFont(42);
   f2->GetXaxis()->SetLabelOffset(0.01);
   f2->GetXaxis()->SetLabelSize(0.045);
   f2->GetXaxis()->SetTitleSize(0.055);
   f2->GetXaxis()->SetTitleFont(42);
   f2->GetYaxis()->SetLabelFont(42);
   f2->GetYaxis()->SetLabelOffset(0.01);
   f2->GetYaxis()->SetLabelSize(0.045);
   f2->GetYaxis()->SetTitleSize(0.055);
   f2->GetYaxis()->SetTitleFont(42);
   f2->SetParameter(0,-40.81576);
   f2->SetParError(0,0);
   f2->SetParLimits(0,-40.81576,-40.81576);
   f2->SetParameter(1,0.814184);
   f2->SetParError(1,0);
   f2->SetParLimits(1,0.814184,0.814184);
   f2->SetParameter(2,-0.001887869);
   f2->SetParError(2,0);
   f2->SetParLimits(2,-0.001887869,-0.001887869);
   f2->SetParameter(3,6.616509);
   f2->SetParError(3,0.8609971);
   f2->SetParLimits(3,0,0);
   f2->Draw("same");
   line = new TLine(100,23.82808,240,23.82808);
   line->SetLineColor(4);
   line->SetLineStyle(4);
   line->Draw();
   TLatex *   tex = new TLatex(0.76,0.24,"30-100%");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(22);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.94,0.0972,1.1,0.141,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->Draw();
      tex = new TLatex(0.22,0.9,"(a)");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(22);
   tex->Draw();
   p_0_0->Modified();
   c1->cd();
  
// ------------>Primitives in pad: p_1_0
   p_1_0 = new TPad("p_1_0", "p_1_0",0.3822153,0,0.6879876,0.9829488);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(100,-17.95422,240,102.4072);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(0);
   p_1_0->SetTickx(1);
   p_1_0->SetTicky(1);
   p_1_0->SetLeftMargin(0);
   p_1_0->SetRightMargin(0);
   p_1_0->SetTopMargin(0.02);
   p_1_0->SetBottomMargin(0.15);
   p_1_0->SetFrameLineColor(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->SetFrameLineColor(0);
   p_1_0->SetFrameBorderMode(0);
   
   TH1 *hTmp = new TH1D("hTmp","",100,100,240);
   hTmp->SetMinimum(0.1);
   hTmp->SetMaximum(100);
   hTmp->SetFillColor(1);
   hTmp->SetFillStyle(0);
   hTmp->SetLineStyle(0);
   hTmp->SetMarkerStyle(20);
   hTmp->SetMarkerSize(0.8);
   hTmp->GetXaxis()->SetTitle("Leading Jet p_{T} (GeV/c)");
   hTmp->GetXaxis()->CenterTitle(true);
   hTmp->GetXaxis()->SetLabelFont(43);
   hTmp->GetXaxis()->SetLabelOffset(0.01);
   hTmp->GetXaxis()->SetLabelSize(22);
   hTmp->GetXaxis()->SetTitleSize(0.055);
   hTmp->GetXaxis()->SetTitleFont(42);
   hTmp->GetYaxis()->SetTitle("(p_{T}^{1}-p_{T}^{2}) (GeV/c)");
   hTmp->GetYaxis()->CenterTitle(true);
   hTmp->GetYaxis()->SetLabelFont(42);
   hTmp->GetYaxis()->SetLabelOffset(0.01);
   hTmp->GetYaxis()->SetLabelSize(0.045);
   hTmp->GetYaxis()->SetTitleSize(0.055);
   hTmp->GetYaxis()->SetTitleOffset(1.5);
   hTmp->GetYaxis()->SetTitleFont(42);
   hTmp->GetZaxis()->SetLabelFont(42);
   hTmp->GetZaxis()->SetLabelSize(0.045);
   hTmp->GetZaxis()->SetTitleFont(42);
   hTmp->Draw("");
   line = new TLine(101,36.3768,101,35.7768);
   line->Draw();
   line = new TLine(109,36.3768,109,35.7768);
   line->Draw();
   line = new TLine(101,36.3768,109,36.3768);
   line->Draw();
   line = new TLine(101,30.86313,101,31.46313);
   line->Draw();
   line = new TLine(109,30.86313,109,31.46313);
   line->Draw();
   line = new TLine(101,30.86313,109,30.86313);
   line->Draw();
   line = new TLine(111,42.08253,111,41.48253);
   line->Draw();
   line = new TLine(119,42.08253,119,41.48253);
   line->Draw();
   line = new TLine(111,42.08253,119,42.08253);
   line->Draw();
   line = new TLine(111,35.70403,111,36.30403);
   line->Draw();
   line = new TLine(119,35.70403,119,36.30403);
   line->Draw();
   line = new TLine(111,35.70403,119,35.70403);
   line->Draw();
   line = new TLine(121,46.92068,121,46.32068);
   line->Draw();
   line = new TLine(129,46.92068,129,46.32068);
   line->Draw();
   line = new TLine(121,46.92068,129,46.92068);
   line->Draw();
   line = new TLine(121,39.80886,121,40.40886);
   line->Draw();
   line = new TLine(129,39.80886,129,40.40886);
   line->Draw();
   line = new TLine(121,39.80886,129,39.80886);
   line->Draw();
   line = new TLine(131,49.54784,131,48.94784);
   line->Draw();
   line = new TLine(139,49.54784,139,48.94784);
   line->Draw();
   line = new TLine(131,49.54784,139,49.54784);
   line->Draw();
   line = new TLine(131,42.03782,131,42.63782);
   line->Draw();
   line = new TLine(139,42.03782,139,42.63782);
   line->Draw();
   line = new TLine(131,42.03782,139,42.03782);
   line->Draw();
   line = new TLine(151,55.97477,151,55.37477);
   line->Draw();
   line = new TLine(159,55.97477,159,55.37477);
   line->Draw();
   line = new TLine(151,55.97477,159,55.97477);
   line->Draw();
   line = new TLine(151,47.49061,151,48.09061);
   line->Draw();
   line = new TLine(159,47.49061,159,48.09061);
   line->Draw();
   line = new TLine(151,47.49061,159,47.49061);
   line->Draw();
   line = new TLine(201,74.61657,201,74.01657);
   line->Draw();
   line = new TLine(209,74.61657,209,74.01657);
   line->Draw();
   line = new TLine(201,74.61657,209,74.61657);
   line->Draw();
   line = new TLine(201,63.30685,201,63.90685);
   line->Draw();
   line = new TLine(209,63.30685,209,63.90685);
   line->Draw();
   line = new TLine(201,63.30685,209,63.30685);
   line->Draw();
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("g");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,105,33.61997);
   grae->SetPointError(0,0,0,0.9704043,0.9704043);
   grae->SetPoint(1,115,38.89328);
   grae->SetPointError(1,0,0,1.361521,1.361521);
   grae->SetPoint(2,125,43.36477);
   grae->SetPointError(2,0,0,1.938441,1.938441);
   grae->SetPoint(3,135,45.79283);
   grae->SetPointError(3,0,0,2.563773,2.563773);
   grae->SetPoint(4,155,51.73269);
   grae->SetPointError(4,0,0,2.404094,2.404094);
   grae->SetPoint(5,205,68.96171);
   grae->SetPointError(5,0,0,5.148711,5.148711);
   
   TH1 *g4 = new TH1F("g4","",100,95,215);
   g4->SetMinimum(28.50348);
   g4->SetMaximum(78.2565);
   g4->SetDirectory(0);
   g4->SetStats(0);
   g4->SetFillColor(1);
   g4->SetFillStyle(0);
   g4->SetLineStyle(0);
   g4->SetMarkerStyle(20);
   g4->SetMarkerSize(0.8);
   g4->GetXaxis()->SetLabelFont(42);
   g4->GetXaxis()->SetLabelOffset(0.01);
   g4->GetXaxis()->SetLabelSize(0.045);
   g4->GetXaxis()->SetTitleSize(0.055);
   g4->GetXaxis()->SetTitleFont(42);
   g4->GetYaxis()->SetLabelFont(42);
   g4->GetYaxis()->SetLabelOffset(0.01);
   g4->GetYaxis()->SetLabelSize(0.045);
   g4->GetYaxis()->SetTitleSize(0.055);
   g4->GetYaxis()->SetTitleFont(42);
   g4->GetZaxis()->SetLabelFont(42);
   g4->GetZaxis()->SetLabelSize(0.045);
   g4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(g4);
   
   grae->Draw("p ");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("gMix");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineColor(2);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,105,25.05048);
   grae->SetPointError(0,0,0,0.8171248,0.8171248);
   grae->SetPoint(1,115,29.53333);
   grae->SetPointError(1,0,0,1.176233,1.176233);
   grae->SetPoint(2,125,32.7446);
   grae->SetPointError(2,0,0,1.558495,1.558495);
   grae->SetPoint(3,135,37.00246);
   grae->SetPointError(3,0,0,2.240481,2.240481);
   grae->SetPoint(4,155,41.11618);
   grae->SetPointError(4,0,0,2.221433,2.221433);
   grae->SetPoint(5,205,52.57634);
   grae->SetPointError(5,0,0,4.451685,4.451685);
   
   TH1 *gMix5 = new TH1F("gMix5","",100,95,215);
   gMix5->SetMinimum(20.95389);
   gMix5->SetMaximum(60.30749);
   gMix5->SetDirectory(0);
   gMix5->SetStats(0);
   gMix5->SetFillColor(1);
   gMix5->SetFillStyle(0);
   gMix5->SetLineStyle(0);
   gMix5->SetMarkerStyle(20);
   gMix5->SetMarkerSize(0.8);
   gMix5->GetXaxis()->SetLabelFont(42);
   gMix5->GetXaxis()->SetLabelOffset(0.01);
   gMix5->GetXaxis()->SetLabelSize(0.045);
   gMix5->GetXaxis()->SetTitleSize(0.055);
   gMix5->GetXaxis()->SetTitleFont(42);
   gMix5->GetYaxis()->SetLabelFont(42);
   gMix5->GetYaxis()->SetLabelOffset(0.01);
   gMix5->GetYaxis()->SetLabelSize(0.045);
   gMix5->GetYaxis()->SetTitleSize(0.055);
   gMix5->GetYaxis()->SetTitleFont(42);
   gMix5->GetZaxis()->SetLabelFont(42);
   gMix5->GetZaxis()->SetLabelSize(0.045);
   gMix5->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(gMix5);
   
   grae->Draw("p ");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("gPythia");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineColor(4);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,105,23.82808);
   grae->SetPointError(0,0,0,0.4819059,0.4819059);
   grae->SetPoint(1,115,27.88467);
   grae->SetPointError(1,0,0,0.6593168,0.6593168);
   grae->SetPoint(2,125,31.67044);
   grae->SetPointError(2,0,0,0.930092,0.930092);
   grae->SetPoint(3,135,34.46148);
   grae->SetPointError(3,0,0,1.260327,1.260327);
   grae->SetPoint(4,155,39.92178);
   grae->SetPointError(4,0,0,1.279812,1.279812);
   grae->SetPoint(5,205,46.85367);
   grae->SetPointError(5,0,0,2.317305,2.317305);
   
   TH1 *gPythia6 = new TH1F("gPythia6","",100,95,215);
   gPythia6->SetMinimum(20.76369);
   gPythia6->SetMaximum(51.75346);
   gPythia6->SetDirectory(0);
   gPythia6->SetStats(0);
   gPythia6->SetFillColor(1);
   gPythia6->SetFillStyle(0);
   gPythia6->SetLineStyle(0);
   gPythia6->SetMarkerStyle(20);
   gPythia6->SetMarkerSize(0.8);
   gPythia6->GetXaxis()->SetLabelFont(42);
   gPythia6->GetXaxis()->SetLabelOffset(0.01);
   gPythia6->GetXaxis()->SetLabelSize(0.045);
   gPythia6->GetXaxis()->SetTitleSize(0.055);
   gPythia6->GetXaxis()->SetTitleFont(42);
   gPythia6->GetYaxis()->SetLabelFont(42);
   gPythia6->GetYaxis()->SetLabelOffset(0.01);
   gPythia6->GetYaxis()->SetLabelSize(0.045);
   gPythia6->GetYaxis()->SetTitleSize(0.055);
   gPythia6->GetYaxis()->SetTitleFont(42);
   gPythia6->GetZaxis()->SetLabelFont(42);
   gPythia6->GetZaxis()->SetLabelSize(0.045);
   gPythia6->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(gPythia6);
   
   grae->Draw("p ");
   
   TF1 *f = new TF1("f","[0]+[1]*x+[2]*x*x+[3]*x",100,220);
   f->SetFillColor(19);
   f->SetFillStyle(0);
   f->SetMarkerStyle(20);
   f->SetMarkerSize(0.8);
   f->SetLineWidth(1);
   f->SetLineStyle(2);
   f->SetChisquare(1.979015);
   f->SetNDF(5);
   f->GetXaxis()->SetLabelFont(42);
   f->GetXaxis()->SetLabelOffset(0.01);
   f->GetXaxis()->SetLabelSize(0.045);
   f->GetXaxis()->SetTitleSize(0.055);
   f->GetXaxis()->SetTitleFont(42);
   f->GetYaxis()->SetLabelFont(42);
   f->GetYaxis()->SetLabelOffset(0.01);
   f->GetYaxis()->SetLabelSize(0.045);
   f->GetYaxis()->SetTitleSize(0.055);
   f->GetYaxis()->SetTitleFont(42);
   f->SetParameter(0,-40.81576);
   f->SetParError(0,0);
   f->SetParLimits(0,-40.81576,-40.81576);
   f->SetParameter(1,0.814184);
   f->SetParError(1,0);
   f->SetParLimits(1,0.814184,0.814184);
   f->SetParameter(2,-0.001887869);
   f->SetParError(2,0);
   f->SetParLimits(2,-0.001887869,-0.001887869);
   f->SetParameter(3,0.09148553);
   f->SetParError(3,0.005633012);
   f->SetParLimits(3,0,0);
   f->Draw("same");
   
   TF1 *f2 = new TF1("f2","[0]+[1]*x+[2]*x*x+[3]",100,220);
   f2->SetFillColor(19);
   f2->SetFillStyle(0);
   f2->SetMarkerStyle(20);
   f2->SetMarkerSize(0.8);
   f2->SetLineWidth(1);
   f2->SetChisquare(6.569492);
   f2->SetNDF(5);
   f2->GetXaxis()->SetLabelFont(42);
   f2->GetXaxis()->SetLabelOffset(0.01);
   f2->GetXaxis()->SetLabelSize(0.045);
   f2->GetXaxis()->SetTitleSize(0.055);
   f2->GetXaxis()->SetTitleFont(42);
   f2->GetYaxis()->SetLabelFont(42);
   f2->GetYaxis()->SetLabelOffset(0.01);
   f2->GetYaxis()->SetLabelSize(0.045);
   f2->GetYaxis()->SetTitleSize(0.055);
   f2->GetYaxis()->SetTitleFont(42);
   f2->SetParameter(0,-40.81576);
   f2->SetParError(0,0);
   f2->SetParLimits(0,-40.81576,-40.81576);
   f2->SetParameter(1,0.814184);
   f2->SetParError(1,0);
   f2->SetParLimits(1,0.814184,0.814184);
   f2->SetParameter(2,-0.001887869);
   f2->SetParError(2,0);
   f2->SetParLimits(2,-0.001887869,-0.001887869);
   f2->SetParameter(3,10.77976);
   f2->SetParError(3,0.6695911);
   f2->SetParLimits(3,0,0);
   f2->Draw("same");
   line = new TLine(100,23.82808,240,23.82808);
   line->SetLineColor(4);
   line->SetLineStyle(4);
   line->Draw();
      tex = new TLatex(0.75,0.24,"10-30%");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(22);
   tex->Draw();
   
   leg = new TLegend(-0.0007,0.0972,0.0518,0.141,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->Draw();
   
   leg = new TLegend(0.94,0.0972,1.1,0.141,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->Draw();
      tex = new TLatex(0.02,0.9,"(b)");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(22);
   tex->Draw();
   p_1_0->Modified();
   c1->cd();
  
// ------------>Primitives in pad: p_2_0
   p_2_0 = new TPad("p_2_0", "p_2_0",0.6879875,0,1,0.9829488);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(100,-17.95422,242.8571,102.4072);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(0);
   p_2_0->SetTickx(1);
   p_2_0->SetTicky(1);
   p_2_0->SetLeftMargin(0);
   p_2_0->SetRightMargin(0.02);
   p_2_0->SetTopMargin(0.02);
   p_2_0->SetBottomMargin(0.15);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->SetFrameLineColor(0);
   p_2_0->SetFrameBorderMode(0);
   
   TH1 *hTmp = new TH1D("hTmp","",100,100,240);
   hTmp->SetMinimum(0.1);
   hTmp->SetMaximum(100);
   hTmp->SetFillColor(1);
   hTmp->SetFillStyle(0);
   hTmp->SetLineStyle(0);
   hTmp->SetMarkerStyle(20);
   hTmp->SetMarkerSize(0.8);
   hTmp->GetXaxis()->CenterTitle(true);
   hTmp->GetXaxis()->SetLabelFont(43);
   hTmp->GetXaxis()->SetLabelOffset(0.01);
   hTmp->GetXaxis()->SetLabelSize(22);
   hTmp->GetXaxis()->SetTitleSize(0.055);
   hTmp->GetXaxis()->SetTitleFont(42);
   hTmp->GetYaxis()->SetTitle("(p_{T}^{1}-p_{T}^{2}) (GeV/c)");
   hTmp->GetYaxis()->CenterTitle(true);
   hTmp->GetYaxis()->SetLabelFont(42);
   hTmp->GetYaxis()->SetLabelOffset(0.01);
   hTmp->GetYaxis()->SetLabelSize(0.045);
   hTmp->GetYaxis()->SetTitleSize(0.055);
   hTmp->GetYaxis()->SetTitleOffset(1.5);
   hTmp->GetYaxis()->SetTitleFont(42);
   hTmp->GetZaxis()->SetLabelFont(42);
   hTmp->GetZaxis()->SetLabelSize(0.045);
   hTmp->GetZaxis()->SetTitleFont(42);
   hTmp->Draw("");
   line = new TLine(101,38.85971,101,38.25971);
   line->Draw();
   line = new TLine(109,38.85971,109,38.25971);
   line->Draw();
   line = new TLine(101,38.85971,109,38.85971);
   line->Draw();
   line = new TLine(101,32.9697,101,33.5697);
   line->Draw();
   line = new TLine(109,32.9697,109,33.5697);
   line->Draw();
   line = new TLine(101,32.9697,109,32.9697);
   line->Draw();
   line = new TLine(111,45.75327,111,45.15327);
   line->Draw();
   line = new TLine(119,45.75327,119,45.15327);
   line->Draw();
   line = new TLine(111,45.75327,119,45.75327);
   line->Draw();
   line = new TLine(111,38.81839,111,39.41839);
   line->Draw();
   line = new TLine(119,38.81839,119,39.41839);
   line->Draw();
   line = new TLine(111,38.81839,119,38.81839);
   line->Draw();
   line = new TLine(121,52.31968,121,51.71968);
   line->Draw();
   line = new TLine(129,52.31968,129,51.71968);
   line->Draw();
   line = new TLine(121,52.31968,129,52.31968);
   line->Draw();
   line = new TLine(121,44.38953,121,44.98953);
   line->Draw();
   line = new TLine(129,44.38953,129,44.98953);
   line->Draw();
   line = new TLine(121,44.38953,129,44.38953);
   line->Draw();
   line = new TLine(131,52.8997,131,52.2997);
   line->Draw();
   line = new TLine(139,52.8997,139,52.2997);
   line->Draw();
   line = new TLine(131,52.8997,139,52.8997);
   line->Draw();
   line = new TLine(131,44.88163,131,45.48163);
   line->Draw();
   line = new TLine(139,44.88163,139,45.48163);
   line->Draw();
   line = new TLine(131,44.88163,139,44.88163);
   line->Draw();
   line = new TLine(151,64.96985,151,64.36985);
   line->Draw();
   line = new TLine(159,64.96985,159,64.36985);
   line->Draw();
   line = new TLine(151,64.96985,159,64.96985);
   line->Draw();
   line = new TLine(151,55.12229,151,55.72229);
   line->Draw();
   line = new TLine(159,55.12229,159,55.72229);
   line->Draw();
   line = new TLine(151,55.12229,159,55.12229);
   line->Draw();
   line = new TLine(201,71.21584,201,70.61584);
   line->Draw();
   line = new TLine(209,71.21584,209,70.61584);
   line->Draw();
   line = new TLine(201,71.21584,209,71.21584);
   line->Draw();
   line = new TLine(201,60.42157,201,61.02157);
   line->Draw();
   line = new TLine(209,60.42157,209,61.02157);
   line->Draw();
   line = new TLine(201,60.42157,209,60.42157);
   line->Draw();
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("g");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,105,35.9147);
   grae->SetPointError(0,0,0,0.9575285,0.9575285);
   grae->SetPoint(1,115,42.28583);
   grae->SetPointError(1,0,0,1.48951,1.48951);
   grae->SetPoint(2,125,48.3546);
   grae->SetPointError(2,0,0,2.152678,2.152678);
   grae->SetPoint(3,135,48.89066);
   grae->SetPointError(3,0,0,2.895184,2.895184);
   grae->SetPoint(4,155,60.04607);
   grae->SetPointError(4,0,0,2.947236,2.947236);
   grae->SetPoint(5,205,65.8187);
   grae->SetPointError(5,0,0,5.101294,5.101294);
   
   TH1 *g7 = new TH1F("g7","",100,95,215);
   g7->SetMinimum(31.36089);
   g7->SetMaximum(74.51628);
   g7->SetDirectory(0);
   g7->SetStats(0);
   g7->SetFillColor(1);
   g7->SetFillStyle(0);
   g7->SetLineStyle(0);
   g7->SetMarkerStyle(20);
   g7->SetMarkerSize(0.8);
   g7->GetXaxis()->SetLabelFont(42);
   g7->GetXaxis()->SetLabelOffset(0.01);
   g7->GetXaxis()->SetLabelSize(0.045);
   g7->GetXaxis()->SetTitleSize(0.055);
   g7->GetXaxis()->SetTitleFont(42);
   g7->GetYaxis()->SetLabelFont(42);
   g7->GetYaxis()->SetLabelOffset(0.01);
   g7->GetYaxis()->SetLabelSize(0.045);
   g7->GetYaxis()->SetTitleSize(0.055);
   g7->GetYaxis()->SetTitleFont(42);
   g7->GetZaxis()->SetLabelFont(42);
   g7->GetZaxis()->SetLabelSize(0.045);
   g7->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(g7);
   
   grae->Draw("p ");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("gMix");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineColor(2);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,105,24.93537);
   grae->SetPointError(0,0,0,1.069151,1.069151);
   grae->SetPoint(1,115,29.87755);
   grae->SetPointError(1,0,0,1.497636,1.497636);
   grae->SetPoint(2,125,34.21346);
   grae->SetPointError(2,0,0,2.186818,2.186818);
   grae->SetPoint(3,135,37.901);
   grae->SetPointError(3,0,0,3.200694,3.200694);
   grae->SetPoint(4,155,42.93316);
   grae->SetPointError(4,0,0,3.13158,3.13158);
   grae->SetPoint(5,205,52.09392);
   grae->SetPointError(5,0,0,5.894709,5.894709);
   
   TH1 *gMix8 = new TH1F("gMix8","",100,95,215);
   gMix8->SetMinimum(20.45398);
   gMix8->SetMaximum(61.40087);
   gMix8->SetDirectory(0);
   gMix8->SetStats(0);
   gMix8->SetFillColor(1);
   gMix8->SetFillStyle(0);
   gMix8->SetLineStyle(0);
   gMix8->SetMarkerStyle(20);
   gMix8->SetMarkerSize(0.8);
   gMix8->GetXaxis()->SetLabelFont(42);
   gMix8->GetXaxis()->SetLabelOffset(0.01);
   gMix8->GetXaxis()->SetLabelSize(0.045);
   gMix8->GetXaxis()->SetTitleSize(0.055);
   gMix8->GetXaxis()->SetTitleFont(42);
   gMix8->GetYaxis()->SetLabelFont(42);
   gMix8->GetYaxis()->SetLabelOffset(0.01);
   gMix8->GetYaxis()->SetLabelSize(0.045);
   gMix8->GetYaxis()->SetTitleSize(0.055);
   gMix8->GetYaxis()->SetTitleFont(42);
   gMix8->GetZaxis()->SetLabelFont(42);
   gMix8->GetZaxis()->SetLabelSize(0.045);
   gMix8->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(gMix8);
   
   grae->Draw("p ");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("gPythia");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineColor(4);
   grae->SetLineStyle(0);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(21);
   grae->SetPoint(0,105,23.82808);
   grae->SetPointError(0,0,0,0.4819059,0.4819059);
   grae->SetPoint(1,115,27.88467);
   grae->SetPointError(1,0,0,0.6593168,0.6593168);
   grae->SetPoint(2,125,31.67044);
   grae->SetPointError(2,0,0,0.930092,0.930092);
   grae->SetPoint(3,135,34.46148);
   grae->SetPointError(3,0,0,1.260327,1.260327);
   grae->SetPoint(4,155,39.92178);
   grae->SetPointError(4,0,0,1.279812,1.279812);
   grae->SetPoint(5,205,46.85367);
   grae->SetPointError(5,0,0,2.317305,2.317305);
   
   TH1 *gPythia9 = new TH1F("gPythia9","",100,95,215);
   gPythia9->SetMinimum(20.76369);
   gPythia9->SetMaximum(51.75346);
   gPythia9->SetDirectory(0);
   gPythia9->SetStats(0);
   gPythia9->SetFillColor(1);
   gPythia9->SetFillStyle(0);
   gPythia9->SetLineStyle(0);
   gPythia9->SetMarkerStyle(20);
   gPythia9->SetMarkerSize(0.8);
   gPythia9->GetXaxis()->SetLabelFont(42);
   gPythia9->GetXaxis()->SetLabelOffset(0.01);
   gPythia9->GetXaxis()->SetLabelSize(0.045);
   gPythia9->GetXaxis()->SetTitleSize(0.055);
   gPythia9->GetXaxis()->SetTitleFont(42);
   gPythia9->GetYaxis()->SetLabelFont(42);
   gPythia9->GetYaxis()->SetLabelOffset(0.01);
   gPythia9->GetYaxis()->SetLabelSize(0.045);
   gPythia9->GetYaxis()->SetTitleSize(0.055);
   gPythia9->GetYaxis()->SetTitleFont(42);
   gPythia9->GetZaxis()->SetLabelFont(42);
   gPythia9->GetZaxis()->SetLabelSize(0.045);
   gPythia9->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(gPythia9);
   
   grae->Draw("p ");
   
   TF1 *f = new TF1("f","[0]+[1]*x+[2]*x*x+[3]*x",100,220);
   f->SetFillColor(19);
   f->SetFillStyle(0);
   f->SetMarkerStyle(20);
   f->SetMarkerSize(0.8);
   f->SetLineWidth(1);
   f->SetLineStyle(2);
   f->SetChisquare(3.140365);
   f->SetNDF(5);
   f->GetXaxis()->SetLabelFont(42);
   f->GetXaxis()->SetLabelOffset(0.01);
   f->GetXaxis()->SetLabelSize(0.045);
   f->GetXaxis()->SetTitleSize(0.055);
   f->GetXaxis()->SetTitleFont(42);
   f->GetYaxis()->SetLabelFont(42);
   f->GetYaxis()->SetLabelOffset(0.01);
   f->GetYaxis()->SetLabelSize(0.045);
   f->GetYaxis()->SetTitleSize(0.055);
   f->GetYaxis()->SetTitleFont(42);
   f->SetParameter(0,-40.81576);
   f->SetParError(0,0);
   f->SetParLimits(0,-40.81576,-40.81576);
   f->SetParameter(1,0.814184);
   f->SetParError(1,0);
   f->SetParLimits(1,0.814184,0.814184);
   f->SetParameter(2,-0.001887869);
   f->SetParError(2,0);
   f->SetParLimits(2,-0.001887869,-0.001887869);
   f->SetParameter(3,0.118969);
   f->SetParError(3,0.005985508);
   f->SetParLimits(3,0,0);
   f->Draw("same");
   
   TF1 *f2 = new TF1("f2","[0]+[1]*x+[2]*x*x+[3]",100,220);
   f2->SetFillColor(19);
   f2->SetFillStyle(0);
   f2->SetMarkerStyle(20);
   f2->SetMarkerSize(0.8);
   f2->SetLineWidth(1);
   f2->SetChisquare(11.10906);
   f2->SetNDF(5);
   f2->GetXaxis()->SetLabelFont(42);
   f2->GetXaxis()->SetLabelOffset(0.01);
   f2->GetXaxis()->SetLabelSize(0.045);
   f2->GetXaxis()->SetTitleSize(0.055);
   f2->GetXaxis()->SetTitleFont(42);
   f2->GetYaxis()->SetLabelFont(42);
   f2->GetYaxis()->SetLabelOffset(0.01);
   f2->GetYaxis()->SetLabelSize(0.045);
   f2->GetYaxis()->SetTitleSize(0.055);
   f2->GetYaxis()->SetTitleFont(42);
   f2->SetParameter(0,-40.81576);
   f2->SetParError(0,0);
   f2->SetParLimits(0,-40.81576,-40.81576);
   f2->SetParameter(1,0.814184);
   f2->SetParError(1,0);
   f2->SetParLimits(1,0.814184,0.814184);
   f2->SetParameter(2,-0.001887869);
   f2->SetParError(2,0);
   f2->SetParLimits(2,-0.001887869,-0.001887869);
   f2->SetParameter(3,13.80874);
   f2->SetParError(3,0.701853);
   f2->SetParLimits(3,0,0);
   f2->Draw("same");
   line = new TLine(100,23.82808,240,23.82808);
   line->SetLineColor(4);
   line->SetLineStyle(4);
   line->Draw();
   
   leg = new TLegend(0.43,0.76,0.93,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(63);
   leg->SetTextSize(15);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("g","Pb+Pb  #sqrt{s}_{_{NN}}=2.76 TeV","pl");
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("gPythia","PYTHIA","pl");
   entry->SetLineColor(4);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("gMix","embedded PYTHIA","pl");
   entry->SetLineColor(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f","Constant Ratio","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("f2","Constant Difference","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
      tex = new TLatex(0.15,0.88,"CMS");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(18);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.81,"#intL dt = 6.7 #mub^{-1}");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(15);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.75,0.24,"0-10%");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(22);
   tex->Draw();
   
   leg = new TLegend(-0.0007,0.0972,0.0518,0.141,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->Draw();
   
   leg = new TLegend(0.93,0.0972,1.1,0.141,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->Draw();
      tex = new TLatex(0.02,0.9,"(c)");
tex->SetNDC();
   tex->SetTextFont(63);
   tex->SetTextSize(22);
   tex->Draw();
   p_2_0->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
