{
//=========Macro generated from canvas: c1_6/
//=========  (Fri Dec 10 16:54:01 2010) by ROOT version5.22/00d
   TCanvas *c1_6 = new TCanvas("c1_6", "",70,336,500,500);
   gStyle->SetOptStat(0);
   c1_6->Range(-143.038,-6.987558,110.1266,0.2773201);
   c1_6->SetFillColor(0);
   c1_6->SetBorderMode(0);
   c1_6->SetBorderSize(0);
   c1_6->SetLogy();
   c1_6->SetTickx(1);
   c1_6->SetTicky(1);
   c1_6->SetLeftMargin(0.17);
   c1_6->SetRightMargin(0.04);
   c1_6->SetTopMargin(0.05);
   c1_6->SetBottomMargin(0.15);
   c1_6->SetFrameLineColor(0);
   c1_6->SetFrameBorderMode(0);
   c1_6->SetFrameLineColor(0);
   c1_6->SetFrameBorderMode(0);
   
   TH1 *hRes6_0 = new TH1D("hRes6_0","",100,-100,100);
   hRes6_0->SetBinContent(49,0.0002721476);
   hRes6_0->SetBinContent(50,0.01663124);
   hRes6_0->SetBinContent(51,0.4316737);
   hRes6_0->SetBinContent(52,0.04542706);
   hRes6_0->SetBinContent(53,0.005045531);
   hRes6_0->SetBinContent(54,0.0007559656);
   hRes6_0->SetBinContent(55,0.0001252743);
   hRes6_0->SetBinContent(56,1.727921e-05);
   hRes6_0->SetBinContent(57,1.295941e-05);
   hRes6_0->SetBinContent(58,8.639607e-06);
   hRes6_0->SetBinContent(59,2.159902e-05);
   hRes6_0->SetBinContent(60,4.319804e-06);
   hRes6_0->SetBinContent(61,4.319804e-06);
   hRes6_0->SetBinError(49,3.428738e-05);
   hRes6_0->SetBinError(50,0.0002680368);
   hRes6_0->SetBinError(51,0.001365557);
   hRes6_0->SetBinError(52,0.0004429853);
   hRes6_0->SetBinError(53,0.0001476337);
   hRes6_0->SetBinError(54,5.714563e-05);
   hRes6_0->SetBinError(55,2.326285e-05);
   hRes6_0->SetBinError(56,8.639607e-06);
   hRes6_0->SetBinError(57,7.48212e-06);
   hRes6_0->SetBinError(58,6.109125e-06);
   hRes6_0->SetBinError(59,9.659375e-06);
   hRes6_0->SetBinError(60,4.319804e-06);
   hRes6_0->SetBinError(61,4.319804e-06);
   hRes6_0->SetEntries(115746);
   hRes6_0->SetStats(0);
   
   TF1 *fGaus = new TF1("fGaus","gaus",-100,100);
   fGaus->SetFillColor(19);
   fGaus->SetFillStyle(0);
   fGaus->SetMarkerStyle(20);
   fGaus->SetMarkerSize(0.8);
   fGaus->SetLineWidth(3);
   fGaus->SetChisquare(1440.815);
   fGaus->SetNDF(10);
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
   fGaus->SetParameter(0,0.4416117);
   fGaus->SetParError(0,0.001433083);
   fGaus->SetParLimits(0,0,0);
   fGaus->SetParameter(1,1.182487);
   fGaus->SetParError(1,0.003181837);
   fGaus->SetParLimits(1,0,0);
   fGaus->SetParameter(2,0.8524407);
   fGaus->SetParError(2,0.001539744);
   fGaus->SetParLimits(2,0,8.586666);
   hRes6_0->GetListOfFunctions()->Add(fGaus);
   hRes6_0->SetFillColor(1);
   hRes6_0->SetFillStyle(0);
   hRes6_0->SetLineStyle(0);
   hRes6_0->SetMarkerStyle(20);
   hRes6_0->SetMarkerSize(1.5);
   hRes6_0->GetXaxis()->SetTitle("Estimated Fluctuation (GeV)");
   hRes6_0->GetXaxis()->CenterTitle(true);
   hRes6_0->GetXaxis()->SetLabelFont(42);
   hRes6_0->GetXaxis()->SetLabelOffset(0.01);
   hRes6_0->GetXaxis()->SetLabelSize(0.045);
   hRes6_0->GetXaxis()->SetTitleSize(0.055);
   hRes6_0->GetXaxis()->SetTitleFont(42);
   hRes6_0->GetYaxis()->SetTitle("Probability");
   hRes6_0->GetYaxis()->CenterTitle(true);
   hRes6_0->GetYaxis()->SetLabelFont(42);
   hRes6_0->GetYaxis()->SetLabelOffset(0.01);
   hRes6_0->GetYaxis()->SetLabelSize(0.045);
   hRes6_0->GetYaxis()->SetTitleSize(0.055);
   hRes6_0->GetYaxis()->SetTitleOffset(1.2);
   hRes6_0->GetYaxis()->SetTitleFont(42);
   hRes6_0->GetZaxis()->SetLabelFont(42);
   hRes6_0->GetZaxis()->SetLabelSize(0.045);
   hRes6_0->GetZaxis()->SetTitleFont(42);
   hRes6_0->Draw("");
   
   TH1 *hRes6_0 = new TH1D("hRes6_0","",100,-100,100);
   hRes6_0->SetBinContent(42,0.0002634815);
   hRes6_0->SetBinContent(43,0.0001756543);
   hRes6_0->SetBinContent(44,0.0002634815);
   hRes6_0->SetBinContent(45,0.001405234);
   hRes6_0->SetBinContent(46,0.003952222);
   hRes6_0->SetBinContent(47,0.01361321);
   hRes6_0->SetBinContent(48,0.03284736);
   hRes6_0->SetBinContent(49,0.08466538);
   hRes6_0->SetBinContent(50,0.1262076);
   hRes6_0->SetBinContent(51,0.1142631);
   hRes6_0->SetBinContent(52,0.06947128);
   hRes6_0->SetBinContent(53,0.0307395);
   hRes6_0->SetBinContent(54,0.0122958);
   hRes6_0->SetBinContent(55,0.005181802);
   hRes6_0->SetBinContent(56,0.002020025);
   hRes6_0->SetBinContent(57,0.0009660987);
   hRes6_0->SetBinContent(58,0.0007026172);
   hRes6_0->SetBinContent(59,0.0003513086);
   hRes6_0->SetBinContent(61,0.0001756543);
   hRes6_0->SetBinContent(62,8.782716e-05);
   hRes6_0->SetBinContent(65,8.782716e-05);
   hRes6_0->SetBinContent(67,8.782716e-05);
   hRes6_0->SetBinContent(71,8.782716e-05);
   hRes6_0->SetBinContent(80,8.782716e-05);
   hRes6_0->SetBinError(42,0.0001521211);
   hRes6_0->SetBinError(43,0.0001242064);
   hRes6_0->SetBinError(44,0.0001521211);
   hRes6_0->SetBinError(45,0.0003513086);
   hRes6_0->SetBinError(46,0.0005891625);
   hRes6_0->SetBinError(47,0.001093439);
   hRes6_0->SetBinError(48,0.001698496);
   hRes6_0->SetBinError(49,0.002726888);
   hRes6_0->SetBinError(50,0.003329333);
   hRes6_0->SetBinError(51,0.003167871);
   hRes6_0->SetBinError(52,0.002470114);
   hRes6_0->SetBinError(53,0.001643096);
   hRes6_0->SetBinError(54,0.001039185);
   hRes6_0->SetBinError(55,0.0006746132);
   hRes6_0->SetBinError(56,0.0004212042);
   hRes6_0->SetBinError(57,0.0002912897);
   hRes6_0->SetBinError(58,0.0002484127);
   hRes6_0->SetBinError(59,0.0001756543);
   hRes6_0->SetBinError(61,0.0001242064);
   hRes6_0->SetBinError(62,8.782716e-05);
   hRes6_0->SetBinError(65,8.782716e-05);
   hRes6_0->SetBinError(67,8.782716e-05);
   hRes6_0->SetBinError(71,8.782716e-05);
   hRes6_0->SetBinError(80,8.782716e-05);
   hRes6_0->SetEntries(5693);
   hRes6_0->SetStats(0);
   
   TF1 *fGaus = new TF1("fGaus","gaus",-100,100);
   fGaus->SetFillColor(19);
   fGaus->SetFillStyle(0);
   fGaus->SetMarkerStyle(20);
   fGaus->SetMarkerSize(0.8);
   fGaus->SetLineColor(2);
   fGaus->SetLineWidth(3);
   fGaus->SetChisquare(118.7344);
   fGaus->SetNDF(21);
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
   fGaus->SetParameter(0,0.1197199);
   fGaus->SetParError(0,0.002158466);
   fGaus->SetParLimits(0,0,0);
   fGaus->SetParameter(1,-0.1567806);
   fGaus->SetParError(1,0.04395046);
   fGaus->SetParLimits(1,0,0);
   fGaus->SetParameter(2,3.2628);
   fGaus->SetParError(2,0.03937076);
   fGaus->SetParLimits(2,0,37.33691);
   hRes6_0->GetListOfFunctions()->Add(fGaus);
   hRes6_0->SetFillColor(1);
   hRes6_0->SetFillStyle(0);
   hRes6_0->SetLineColor(2);
   hRes6_0->SetLineStyle(0);
   hRes6_0->SetMarkerColor(2);
   hRes6_0->SetMarkerStyle(20);
   hRes6_0->SetMarkerSize(1.5);
   hRes6_0->GetXaxis()->SetTitle("Estimated Fluctuation (GeV)");
   hRes6_0->GetXaxis()->CenterTitle(true);
   hRes6_0->GetXaxis()->SetLabelFont(42);
   hRes6_0->GetXaxis()->SetLabelOffset(0.01);
   hRes6_0->GetXaxis()->SetLabelSize(0.045);
   hRes6_0->GetXaxis()->SetTitleSize(0.055);
   hRes6_0->GetXaxis()->SetTitleFont(42);
   hRes6_0->GetYaxis()->SetTitle("Probability");
   hRes6_0->GetYaxis()->CenterTitle(true);
   hRes6_0->GetYaxis()->SetLabelFont(42);
   hRes6_0->GetYaxis()->SetLabelOffset(0.01);
   hRes6_0->GetYaxis()->SetLabelSize(0.045);
   hRes6_0->GetYaxis()->SetTitleSize(0.055);
   hRes6_0->GetYaxis()->SetTitleOffset(1.2);
   hRes6_0->GetYaxis()->SetTitleFont(42);
   hRes6_0->GetZaxis()->SetLabelFont(42);
   hRes6_0->GetZaxis()->SetLabelSize(0.045);
   hRes6_0->GetZaxis()->SetTitleFont(42);
   hRes6_0->Draw("same");
   
   TLegend *leg = new TLegend(0.18,0.71,0.52,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(63);
   leg->SetTextSize(15);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hRes6_0","Centrality 60 to 100","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hRes6_0","Data Mixing","pl");
   entry->SetLineColor(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry=leg->AddEntry("hRes6_0","Random Cones","pl");
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   leg->Draw();
   c1_6->Modified();
   c1_6->cd();
   c1_6->SetSelected(c1_6);
}
