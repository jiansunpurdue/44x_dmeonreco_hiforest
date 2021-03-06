{
//=========Macro generated from canvas: c1_5/
//=========  (Fri Dec 10 16:54:01 2010) by ROOT version5.22/00d
   TCanvas *c1_5 = new TCanvas("c1_5", "",60,288,500,500);
   gStyle->SetOptStat(0);
   c1_5->Range(-143.038,-5.975622,110.1266,-0.03083359);
   c1_5->SetFillColor(0);
   c1_5->SetBorderMode(0);
   c1_5->SetBorderSize(0);
   c1_5->SetLogy();
   c1_5->SetTickx(1);
   c1_5->SetTicky(1);
   c1_5->SetLeftMargin(0.17);
   c1_5->SetRightMargin(0.04);
   c1_5->SetTopMargin(0.05);
   c1_5->SetBottomMargin(0.15);
   c1_5->SetFrameLineColor(0);
   c1_5->SetFrameBorderMode(0);
   c1_5->SetFrameLineColor(0);
   c1_5->SetFrameBorderMode(0);
   
   TH1 *hRes5_0 = new TH1D("hRes5_0","",100,-100,100);
   hRes5_0->SetBinContent(46,1.648642e-05);
   hRes5_0->SetBinContent(47,6.594566e-05);
   hRes5_0->SetBinContent(48,0.0007913479);
   hRes5_0->SetBinContent(49,0.007336455);
   hRes5_0->SetBinContent(50,0.07417238);
   hRes5_0->SetBinContent(51,0.2459443);
   hRes5_0->SetBinContent(52,0.1323859);
   hRes5_0->SetBinContent(53,0.031555);
   hRes5_0->SetBinContent(54,0.005786732);
   hRes5_0->SetBinContent(55,0.001071617);
   hRes5_0->SetBinContent(56,0.0003627011);
   hRes5_0->SetBinContent(57,0.0002143234);
   hRes5_0->SetBinContent(58,8.243208e-05);
   hRes5_0->SetBinContent(59,9.891849e-05);
   hRes5_0->SetBinContent(60,6.594566e-05);
   hRes5_0->SetBinContent(61,1.648642e-05);
   hRes5_0->SetBinContent(62,1.648642e-05);
   hRes5_0->SetBinContent(63,1.648642e-05);
   hRes5_0->SetBinError(46,1.648642e-05);
   hRes5_0->SetBinError(47,3.297283e-05);
   hRes5_0->SetBinError(48,0.0001142212);
   hRes5_0->SetBinError(49,0.0003477813);
   hRes5_0->SetBinError(50,0.001105819);
   hRes5_0->SetBinError(51,0.002013639);
   hRes5_0->SetBinError(52,0.001477352);
   hRes5_0->SetBinError(53,0.0007212689);
   hRes5_0->SetBinError(54,0.0003088729);
   hRes5_0->SetBinError(55,0.0001329177);
   hRes5_0->SetBinError(56,7.732814e-05);
   hRes5_0->SetBinError(57,5.944262e-05);
   hRes5_0->SetBinError(58,3.686475e-05);
   hRes5_0->SetBinError(59,4.03833e-05);
   hRes5_0->SetBinError(60,3.297283e-05);
   hRes5_0->SetBinError(61,1.648642e-05);
   hRes5_0->SetBinError(62,1.648642e-05);
   hRes5_0->SetBinError(63,1.648642e-05);
   hRes5_0->SetEntries(30328);
   hRes5_0->SetStats(0);
   
   TF1 *fGaus = new TF1("fGaus","gaus",-100,100);
   fGaus->SetFillColor(19);
   fGaus->SetFillStyle(0);
   fGaus->SetMarkerStyle(20);
   fGaus->SetMarkerSize(0.8);
   fGaus->SetLineWidth(3);
   fGaus->SetChisquare(793.1827);
   fGaus->SetNDF(15);
   fGaus->GetXaxis()->SetLabelFont(42);
   fGaus->GetXaxis()->SetLabelOffset(0.01);
   fGaus->GetXaxis()->SetLabelSize(0.045);
   fGaus->GetXaxis()->SetTitleSize(0.055);
   fGaus->GetXaxis()->SetTitleFont(42);
   fGaus->GetYaxis()->SetLabelFont(42);
   fGaus->GetYaxis()->SetLabelOffset(0.01);
   fGaus->GetYaxis()->SetLabelSize(0.045);
   fGaus->GetYaxis()->SetTitleSize(0.055);
   fGaus->GetYaxis()->SetTitleOffset(1.2);
   fGaus->GetYaxis()->SetTitleFont(42);
   fGaus->SetParameter(0,0.2286242);
   fGaus->SetParError(0,0.001805638);
   fGaus->SetParLimits(0,0,0);
   fGaus->SetParameter(1,1.442581);
   fGaus->SetParError(1,0.01032156);
   fGaus->SetParLimits(1,0,0);
   fGaus->SetParameter(2,1.699332);
   fGaus->SetParError(2,0.009072645);
   fGaus->SetParLimits(2,0,18.84748);
   hRes5_0->GetListOfFunctions()->Add(fGaus);
   hRes5_0->SetFillColor(1);
   hRes5_0->SetFillStyle(0);
   hRes5_0->SetLineStyle(0);
   hRes5_0->SetMarkerStyle(20);
   hRes5_0->SetMarkerSize(1.5);
   hRes5_0->GetXaxis()->SetTitle("Estimated Fluctuation (GeV)");
   hRes5_0->GetXaxis()->CenterTitle(true);
   hRes5_0->GetXaxis()->SetLabelFont(42);
   hRes5_0->GetXaxis()->SetLabelOffset(0.01);
   hRes5_0->GetXaxis()->SetLabelSize(0.045);
   hRes5_0->GetXaxis()->SetTitleSize(0.055);
   hRes5_0->GetXaxis()->SetTitleFont(42);
   hRes5_0->GetYaxis()->SetTitle("Probability");
   hRes5_0->GetYaxis()->CenterTitle(true);
   hRes5_0->GetYaxis()->SetLabelFont(42);
   hRes5_0->GetYaxis()->SetLabelOffset(0.01);
   hRes5_0->GetYaxis()->SetLabelSize(0.045);
   hRes5_0->GetYaxis()->SetTitleSize(0.055);
   hRes5_0->GetYaxis()->SetTitleOffset(1.2);
   hRes5_0->GetYaxis()->SetTitleFont(42);
   hRes5_0->GetZaxis()->SetLabelFont(42);
   hRes5_0->GetZaxis()->SetLabelSize(0.045);
   hRes5_0->GetZaxis()->SetTitleFont(42);
   hRes5_0->Draw("");
   
   TH1 *hRes5_0 = new TH1D("hRes5_0","",100,-100,100);
   hRes5_0->SetBinContent(44,0.0009219422);
   hRes5_0->SetBinContent(45,0.002458513);
   hRes5_0->SetBinContent(46,0.007068224);
   hRes5_0->SetBinContent(47,0.01690227);
   hRes5_0->SetBinContent(48,0.03872157);
   hRes5_0->SetBinContent(49,0.07467732);
   hRes5_0->SetBinContent(50,0.09895513);
   hRes5_0->SetBinContent(51,0.100799);
   hRes5_0->SetBinContent(52,0.07437001);
   hRes5_0->SetBinContent(53,0.03779963);
   hRes5_0->SetBinContent(54,0.02950215);
   hRes5_0->SetBinContent(55,0.007990166);
   hRes5_0->SetBinContent(56,0.005224339);
   hRes5_0->SetBinContent(57,0.001843884);
   hRes5_0->SetBinContent(58,0.001229256);
   hRes5_0->SetBinContent(59,0.0003073141);
   hRes5_0->SetBinContent(60,0.0003073141);
   hRes5_0->SetBinContent(62,0.0009219422);
   hRes5_0->SetBinError(44,0.0005322836);
   hRes5_0->SetBinError(45,0.0008692155);
   hRes5_0->SetBinError(46,0.001473827);
   hRes5_0->SetBinError(47,0.002279102);
   hRes5_0->SetBinError(48,0.003449592);
   hRes5_0->SetBinError(49,0.004790552);
   hRes5_0->SetBinError(50,0.005514554);
   hRes5_0->SetBinError(51,0.005565695);
   hRes5_0->SetBinError(52,0.004780685);
   hRes5_0->SetBinError(53,0.003408278);
   hRes5_0->SetBinError(54,0.003011051);
   hRes5_0->SetBinError(55,0.001567);
   hRes5_0->SetBinError(56,0.001267088);
   hRes5_0->SetBinError(57,0.0007527627);
   hRes5_0->SetBinError(58,0.0006146281);
   hRes5_0->SetBinError(59,0.0003073141);
   hRes5_0->SetBinError(60,0.0003073141);
   hRes5_0->SetBinError(62,0.0005322836);
   hRes5_0->SetEntries(1627);
   hRes5_0->SetStats(0);
   
   TF1 *fGaus = new TF1("fGaus","gaus",-100,100);
   fGaus->SetFillColor(19);
   fGaus->SetFillStyle(0);
   fGaus->SetMarkerStyle(20);
   fGaus->SetMarkerSize(0.8);
   fGaus->SetLineColor(2);
   fGaus->SetLineWidth(3);
   fGaus->SetChisquare(34.39328);
   fGaus->SetNDF(15);
   fGaus->GetXaxis()->SetLabelFont(42);
   fGaus->GetXaxis()->SetLabelOffset(0.01);
   fGaus->GetXaxis()->SetLabelSize(0.045);
   fGaus->GetXaxis()->SetTitleSize(0.055);
   fGaus->GetXaxis()->SetTitleFont(42);
   fGaus->GetYaxis()->SetLabelFont(42);
   fGaus->GetYaxis()->SetLabelOffset(0.01);
   fGaus->GetYaxis()->SetLabelSize(0.045);
   fGaus->GetYaxis()->SetTitleSize(0.055);
   fGaus->GetYaxis()->SetTitleOffset(1.2);
   fGaus->GetYaxis()->SetTitleFont(42);
   fGaus->SetParameter(0,0.09735072);
   fGaus->SetParError(0,0.003211984);
   fGaus->SetParLimits(0,0,0);
   fGaus->SetParameter(1,0.2006113);
   fGaus->SetParError(1,0.1017098);
   fGaus->SetParLimits(1,0,0);
   fGaus->SetParameter(2,4.012064);
   fGaus->SetParError(2,0.0862967);
   fGaus->SetParLimits(2,0,42.98771);
   hRes5_0->GetListOfFunctions()->Add(fGaus);
   hRes5_0->SetFillColor(1);
   hRes5_0->SetFillStyle(0);
   hRes5_0->SetLineColor(2);
   hRes5_0->SetLineStyle(0);
   hRes5_0->SetMarkerColor(2);
   hRes5_0->SetMarkerStyle(20);
   hRes5_0->SetMarkerSize(1.5);
   hRes5_0->GetXaxis()->SetTitle("Estimated Fluctuation (GeV)");
   hRes5_0->GetXaxis()->CenterTitle(true);
   hRes5_0->GetXaxis()->SetLabelFont(42);
   hRes5_0->GetXaxis()->SetLabelOffset(0.01);
   hRes5_0->GetXaxis()->SetLabelSize(0.045);
   hRes5_0->GetXaxis()->SetTitleSize(0.055);
   hRes5_0->GetXaxis()->SetTitleFont(42);
   hRes5_0->GetYaxis()->SetTitle("Probability");
   hRes5_0->GetYaxis()->CenterTitle(true);
   hRes5_0->GetYaxis()->SetLabelFont(42);
   hRes5_0->GetYaxis()->SetLabelOffset(0.01);
   hRes5_0->GetYaxis()->SetLabelSize(0.045);
   hRes5_0->GetYaxis()->SetTitleSize(0.055);
   hRes5_0->GetYaxis()->SetTitleOffset(1.2);
   hRes5_0->GetYaxis()->SetTitleFont(42);
   hRes5_0->GetZaxis()->SetLabelFont(42);
   hRes5_0->GetZaxis()->SetLabelSize(0.045);
   hRes5_0->GetZaxis()->SetTitleFont(42);
   hRes5_0->Draw("same");
   
   TLegend *leg = new TLegend(0.18,0.71,0.52,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(63);
   leg->SetTextSize(15);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hRes5_0","Centrality 50 to 60","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hRes5_0","Data Mixing","pl");
   entry->SetLineColor(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("hRes5_0","Random Cones","pl");
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   leg->Draw();
   c1_5->Modified();
   c1_5->cd();
   c1_5->SetSelected(c1_5);
}
