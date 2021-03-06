{
//=========Macro generated from canvas: c2/
//=========  (Sun Dec 12 15:46:26 2010) by ROOT version5.22/00d
   TCanvas *c2 = new TCanvas("c2", "",10,48,500,500);
   gStyle->SetOptStat(0);
   c2->Range(-0.4291139,-2.85516,0.3303797,1.890495);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(0);
   c2->SetLogy();
   c2->SetTickx(1);
   c2->SetTicky(1);
   c2->SetLeftMargin(0.17);
   c2->SetRightMargin(0.04);
   c2->SetTopMargin(0.05);
   c2->SetBottomMargin(0.15);
   c2->SetFrameLineColor(0);
   c2->SetFrameBorderMode(0);
   c2->SetFrameLineColor(0);
   c2->SetFrameBorderMode(0);
   
   TH1 *hPhi0_0 = new TH1D("hPhi0_0","",100,-1,1);
   hPhi0_0->SetBinContent(39,0.0245459);
   hPhi0_0->SetBinContent(40,0.0490918);
   hPhi0_0->SetBinContent(42,0.1472754);
   hPhi0_0->SetBinContent(43,0.1472754);
   hPhi0_0->SetBinContent(44,0.3190967);
   hPhi0_0->SetBinContent(45,0.5400098);
   hPhi0_0->SetBinContent(46,0.9081983);
   hPhi0_0->SetBinContent(47,1.939126);
   hPhi0_0->SetBinContent(48,3.730977);
   hPhi0_0->SetBinContent(49,6.82376);
   hPhi0_0->SetBinContent(50,11.02111);
   hPhi0_0->SetBinContent(51,10.45655);
   hPhi0_0->SetBinContent(52,6.111929);
   hPhi0_0->SetBinContent(53,3.780069);
   hPhi0_0->SetBinContent(54,1.816397);
   hPhi0_0->SetBinContent(55,0.9327442);
   hPhi0_0->SetBinContent(56,0.6381934);
   hPhi0_0->SetBinContent(57,0.2209131);
   hPhi0_0->SetBinContent(58,0.2209131);
   hPhi0_0->SetBinContent(59,0.0736377);
   hPhi0_0->SetBinContent(60,0.0981836);
   hPhi0_0->SetBinError(39,0.0245459);
   hPhi0_0->SetBinError(40,0.03471315);
   hPhi0_0->SetBinError(42,0.06012493);
   hPhi0_0->SetBinError(43,0.06012493);
   hPhi0_0->SetBinError(44,0.0885015);
   hPhi0_0->SetBinError(45,0.1151305);
   hPhi0_0->SetBinError(46,0.1493069);
   hPhi0_0->SetBinError(47,0.2181687);
   hPhi0_0->SetBinError(48,0.3026222);
   hPhi0_0->SetBinError(49,0.409262);
   hPhi0_0->SetBinError(50,0.5201183);
   hPhi0_0->SetBinError(51,0.5066217);
   hPhi0_0->SetBinError(52,0.3873278);
   hPhi0_0->SetBinError(53,0.3046066);
   hPhi0_0->SetBinError(54,0.2111518);
   hPhi0_0->SetBinError(55,0.1513111);
   hPhi0_0->SetBinError(56,0.12516);
   hPhi0_0->SetBinError(57,0.0736377);
   hPhi0_0->SetBinError(58,0.0736377);
   hPhi0_0->SetBinError(59,0.04251475);
   hPhi0_0->SetBinError(60,0.0490918);
   hPhi0_0->SetMaximum(45);
   hPhi0_0->SetEntries(2037);
   hPhi0_0->SetStats(0);
   
   TF1 *fPhi = new TF1("fPhi","gaus",-1,1);
   fPhi->SetFillColor(19);
   fPhi->SetFillStyle(0);
   fPhi->SetMarkerStyle(20);
   fPhi->SetMarkerSize(0.8);
   fPhi->SetLineWidth(3);
   fPhi->SetChisquare(100.7025);
   fPhi->SetNDF(19);
   fPhi->GetXaxis()->SetLabelFont(42);
   fPhi->GetXaxis()->SetLabelOffset(0.01);
   fPhi->GetXaxis()->SetLabelSize(0.045);
   fPhi->GetXaxis()->SetTitleSize(0.055);
   fPhi->GetXaxis()->SetTitleFont(42);
   fPhi->GetYaxis()->SetLabelFont(42);
   fPhi->GetYaxis()->SetLabelOffset(0.01);
   fPhi->GetYaxis()->SetLabelSize(0.045);
   fPhi->GetYaxis()->SetTitleSize(0.055);
   fPhi->GetYaxis()->SetTitleOffset(1.2);
   fPhi->GetYaxis()->SetTitleFont(42);
   fPhi->SetParameter(0,9.36473);
   fPhi->SetParError(0,0.3084508);
   fPhi->SetParLimits(0,0,0);
   fPhi->SetParameter(1,-0.0006332842);
   fPhi->SetParError(1,0);
   fPhi->SetParLimits(1,1,1);
   fPhi->SetParameter(2,0.04049464);
   fPhi->SetParError(2,0.0009652583);
   fPhi->SetParLimits(2,0,0.4709991);
   hPhi0_0->GetListOfFunctions()->Add(fPhi);
   hPhi0_0->SetFillColor(1);
   hPhi0_0->SetFillStyle(0);
   hPhi0_0->SetLineStyle(0);
   hPhi0_0->SetMarkerStyle(20);
   hPhi0_0->GetXaxis()->SetTitle("#phi_{CaloJet}-#phi_{GenJet}");
   hPhi0_0->GetXaxis()->SetRange(36,65);
   hPhi0_0->GetXaxis()->CenterTitle(true);
   hPhi0_0->GetXaxis()->SetLabelFont(42);
   hPhi0_0->GetXaxis()->SetLabelOffset(0.01);
   hPhi0_0->GetXaxis()->SetLabelSize(0.045);
   hPhi0_0->GetXaxis()->SetTitleSize(0.055);
   hPhi0_0->GetXaxis()->SetTitleFont(42);
   hPhi0_0->GetYaxis()->SetTitle("Probability");
   hPhi0_0->GetYaxis()->CenterTitle(true);
   hPhi0_0->GetYaxis()->SetLabelFont(42);
   hPhi0_0->GetYaxis()->SetLabelOffset(0.01);
   hPhi0_0->GetYaxis()->SetLabelSize(0.045);
   hPhi0_0->GetYaxis()->SetTitleSize(0.055);
   hPhi0_0->GetYaxis()->SetTitleOffset(1.2);
   hPhi0_0->GetYaxis()->SetTitleFont(42);
   hPhi0_0->GetZaxis()->SetLabelFont(42);
   hPhi0_0->GetZaxis()->SetLabelSize(0.045);
   hPhi0_0->GetZaxis()->SetTitleFont(42);
   hPhi0_0->Draw("");
   
   TH1 *hPhi4_0 = new TH1D("hPhi4_0","",100,-1,1);
   hPhi4_0->SetBinContent(39,0.005600358);
   hPhi4_0->SetBinContent(40,0.02240143);
   hPhi4_0->SetBinContent(41,0.01680108);
   hPhi4_0->SetBinContent(42,0.04480287);
   hPhi4_0->SetBinContent(43,0.07840502);
   hPhi4_0->SetBinContent(44,0.1456093);
   hPhi4_0->SetBinContent(45,0.2800179);
   hPhi4_0->SetBinContent(46,0.4648297);
   hPhi4_0->SetBinContent(47,1.09767);
   hPhi4_0->SetBinContent(48,3.153002);
   hPhi4_0->SetBinContent(49,7.403674);
   hPhi4_0->SetBinContent(50,13.60887);
   hPhi4_0->SetBinContent(51,12.73522);
   hPhi4_0->SetBinContent(52,6.485215);
   hPhi4_0->SetBinContent(53,2.508961);
   hPhi4_0->SetBinContent(54,1.002464);
   hPhi4_0->SetBinContent(55,0.4872312);
   hPhi4_0->SetBinContent(56,0.2128136);
   hPhi4_0->SetBinContent(57,0.09520609);
   hPhi4_0->SetBinContent(58,0.05600358);
   hPhi4_0->SetBinContent(59,0.03920251);
   hPhi4_0->SetBinContent(60,0.03360215);
   hPhi4_0->SetBinContent(61,0.01120072);
   hPhi4_0->SetBinContent(62,0.005600358);
   hPhi4_0->SetBinContent(63,0.005600358);
   hPhi4_0->SetBinError(39,0.005600358);
   hPhi4_0->SetBinError(40,0.01120072);
   hPhi4_0->SetBinError(41,0.009700105);
   hPhi4_0->SetBinError(42,0.01584021);
   hPhi4_0->SetBinError(43,0.02095462);
   hPhi4_0->SetBinError(44,0.02855634);
   hPhi4_0->SetBinError(45,0.03960051);
   hPhi4_0->SetBinError(46,0.05102169);
   hPhi4_0->SetBinError(47,0.07840502);
   hPhi4_0->SetBinError(48,0.1328832);
   hPhi4_0->SetBinError(49,0.2036252);
   hPhi4_0->SetBinError(50,0.2760698);
   hPhi4_0->SetBinError(51,0.2670614);
   hPhi4_0->SetBinError(52,0.1905768);
   hPhi4_0->SetBinError(53,0.1185372);
   hPhi4_0->SetBinError(54,0.07492769);
   hPhi4_0->SetBinError(55,0.05223667);
   hPhi4_0->SetBinError(56,0.03452293);
   hPhi4_0->SetBinError(57,0.02309087);
   hPhi4_0->SetBinError(58,0.01770989);
   hPhi4_0->SetBinError(59,0.01481716);
   hPhi4_0->SetBinError(60,0.01371802);
   hPhi4_0->SetBinError(61,0.007920103);
   hPhi4_0->SetBinError(62,0.005600358);
   hPhi4_0->SetBinError(63,0.005600358);
   hPhi4_0->SetEntries(8928);
   hPhi4_0->SetStats(0);
   
   TF1 *fPhi = new TF1("fPhi","gaus",-1,1);
   fPhi->SetFillColor(19);
   fPhi->SetFillStyle(0);
   fPhi->SetMarkerStyle(20);
   fPhi->SetMarkerSize(0.8);
   fPhi->SetLineColor(2);
   fPhi->SetLineWidth(3);
   fPhi->SetChisquare(360.1522);
   fPhi->SetNDF(23);
   fPhi->GetXaxis()->SetLabelFont(42);
   fPhi->GetXaxis()->SetLabelOffset(0.01);
   fPhi->GetXaxis()->SetLabelSize(0.045);
   fPhi->GetXaxis()->SetTitleSize(0.055);
   fPhi->GetXaxis()->SetTitleFont(42);
   fPhi->GetYaxis()->SetLabelFont(42);
   fPhi->GetYaxis()->SetLabelOffset(0.01);
   fPhi->GetYaxis()->SetLabelSize(0.045);
   fPhi->GetYaxis()->SetTitleSize(0.055);
   fPhi->GetYaxis()->SetTitleOffset(1.2);
   fPhi->GetYaxis()->SetTitleFont(42);
   fPhi->SetParameter(0,12.73022);
   fPhi->SetParError(0,0.1926743);
   fPhi->SetParLimits(0,0,0);
   fPhi->SetParameter(1,-0.001783154);
   fPhi->SetParError(1,0);
   fPhi->SetParLimits(1,1,1);
   fPhi->SetParameter(2,0.03007404);
   fPhi->SetParError(2,0.0003186996);
   fPhi->SetParLimits(2,0,0.3656819);
   hPhi4_0->GetListOfFunctions()->Add(fPhi);
   hPhi4_0->SetFillColor(1);
   hPhi4_0->SetFillStyle(0);
   hPhi4_0->SetLineColor(2);
   hPhi4_0->SetLineStyle(0);
   hPhi4_0->SetMarkerColor(2);
   hPhi4_0->SetMarkerStyle(20);
   hPhi4_0->GetXaxis()->SetTitle("#phi_{CaloJet}-#phi_{GenJet}");
   hPhi4_0->GetXaxis()->SetRange(36,65);
   hPhi4_0->GetXaxis()->CenterTitle(true);
   hPhi4_0->GetXaxis()->SetLabelFont(42);
   hPhi4_0->GetXaxis()->SetLabelOffset(0.01);
   hPhi4_0->GetXaxis()->SetLabelSize(0.045);
   hPhi4_0->GetXaxis()->SetTitleSize(0.055);
   hPhi4_0->GetXaxis()->SetTitleFont(42);
   hPhi4_0->GetYaxis()->SetTitle("Probability");
   hPhi4_0->GetYaxis()->CenterTitle(true);
   hPhi4_0->GetYaxis()->SetLabelFont(42);
   hPhi4_0->GetYaxis()->SetLabelOffset(0.01);
   hPhi4_0->GetYaxis()->SetLabelSize(0.045);
   hPhi4_0->GetYaxis()->SetTitleSize(0.055);
   hPhi4_0->GetYaxis()->SetTitleOffset(1.2);
   hPhi4_0->GetYaxis()->SetTitleFont(42);
   hPhi4_0->GetZaxis()->SetLabelFont(42);
   hPhi4_0->GetZaxis()->SetLabelSize(0.045);
   hPhi4_0->GetZaxis()->SetTitleFont(42);
   hPhi4_0->Draw("same");
   
   TH1 *hPhi3_0 = new TH1D("hPhi3_0","",100,-1,1);
   hPhi3_0->SetBinContent(39,0.01252191);
   hPhi3_0->SetBinContent(40,0.02504383);
   hPhi3_0->SetBinContent(41,0.03756574);
   hPhi3_0->SetBinContent(42,0.05008765);
   hPhi3_0->SetBinContent(43,0.1001753);
   hPhi3_0->SetBinContent(44,0.1878287);
   hPhi3_0->SetBinContent(45,0.2754821);
   hPhi3_0->SetBinContent(46,0.7638367);
   hPhi3_0->SetBinContent(47,1.452542);
   hPhi3_0->SetBinContent(48,3.155522);
   hPhi3_0->SetBinContent(49,7.500626);
   hPhi3_0->SetBinContent(50,12.62209);
   hPhi3_0->SetBinContent(51,11.98347);
   hPhi3_0->SetBinContent(52,6.836965);
   hPhi3_0->SetBinContent(53,2.416729);
   hPhi3_0->SetBinContent(54,1.364889);
   hPhi3_0->SetBinContent(55,0.6135738);
   hPhi3_0->SetBinContent(56,0.2253944);
   hPhi3_0->SetBinContent(57,0.2504383);
   hPhi3_0->SetBinContent(58,0.1001753);
   hPhi3_0->SetBinContent(60,0.01252191);
   hPhi3_0->SetBinContent(62,0.01252191);
   hPhi3_0->SetBinError(39,0.01252191);
   hPhi3_0->SetBinError(40,0.01770866);
   hPhi3_0->SetBinError(41,0.02168859);
   hPhi3_0->SetBinError(42,0.02504383);
   hPhi3_0->SetBinError(43,0.03541732);
   hPhi3_0->SetBinError(44,0.04849716);
   hPhi3_0->SetBinError(45,0.05873298);
   hPhi3_0->SetBinError(46,0.09779927);
   hPhi3_0->SetBinError(47,0.1348651);
   hPhi3_0->SetBinError(48,0.1987792);
   hPhi3_0->SetBinError(49,0.3064673);
   hPhi3_0->SetBinError(50,0.3975584);
   hPhi3_0->SetBinError(51,0.3873706);
   hPhi3_0->SetBinError(52,0.2925951);
   hPhi3_0->SetBinError(53,0.17396);
   hPhi3_0->SetBinError(54,0.1307326);
   hPhi3_0->SetBinError(55,0.08765339);
   hPhi3_0->SetBinError(56,0.05312598);
   hPhi3_0->SetBinError(57,0.0559997);
   hPhi3_0->SetBinError(58,0.03541732);
   hPhi3_0->SetBinError(60,0.01252191);
   hPhi3_0->SetBinError(62,0.01252191);
   hPhi3_0->SetEntries(3993);
   hPhi3_0->SetStats(0);
   
   TF1 *fPhi = new TF1("fPhi","gaus",-1,1);
   fPhi->SetFillColor(19);
   fPhi->SetFillStyle(0);
   fPhi->SetMarkerStyle(20);
   fPhi->SetMarkerSize(0.8);
   fPhi->SetLineColor(4);
   fPhi->SetLineWidth(3);
   fPhi->SetChisquare(203.1804);
   fPhi->SetNDF(20);
   fPhi->GetXaxis()->SetLabelFont(42);
   fPhi->GetXaxis()->SetLabelOffset(0.01);
   fPhi->GetXaxis()->SetLabelSize(0.045);
   fPhi->GetXaxis()->SetTitleSize(0.055);
   fPhi->GetXaxis()->SetTitleFont(42);
   fPhi->GetYaxis()->SetLabelFont(42);
   fPhi->GetYaxis()->SetLabelOffset(0.01);
   fPhi->GetYaxis()->SetLabelSize(0.045);
   fPhi->GetYaxis()->SetTitleSize(0.055);
   fPhi->GetYaxis()->SetTitleOffset(1.2);
   fPhi->GetYaxis()->SetTitleFont(42);
   fPhi->SetParameter(0,11.71474);
   fPhi->SetParError(0,0.2790768);
   fPhi->SetParLimits(0,0,0);
   fPhi->SetParameter(1,-0.001975958);
   fPhi->SetParError(1,0);
   fPhi->SetParLimits(1,1,1);
   fPhi->SetParameter(2,0.03232188);
   fPhi->SetParError(2,0.0005630712);
   fPhi->SetParLimits(2,0,0.3942648);
   hPhi3_0->GetListOfFunctions()->Add(fPhi);
   hPhi3_0->SetFillColor(1);
   hPhi3_0->SetFillStyle(0);
   hPhi3_0->SetLineColor(4);
   hPhi3_0->SetLineStyle(0);
   hPhi3_0->SetMarkerColor(4);
   hPhi3_0->SetMarkerStyle(20);
   hPhi3_0->GetXaxis()->SetTitle("#phi_{CaloJet}-#phi_{GenJet}");
   hPhi3_0->GetXaxis()->SetRange(36,65);
   hPhi3_0->GetXaxis()->CenterTitle(true);
   hPhi3_0->GetXaxis()->SetLabelFont(42);
   hPhi3_0->GetXaxis()->SetLabelOffset(0.01);
   hPhi3_0->GetXaxis()->SetLabelSize(0.045);
   hPhi3_0->GetXaxis()->SetTitleSize(0.055);
   hPhi3_0->GetXaxis()->SetTitleFont(42);
   hPhi3_0->GetYaxis()->SetTitle("Probability");
   hPhi3_0->GetYaxis()->CenterTitle(true);
   hPhi3_0->GetYaxis()->SetLabelFont(42);
   hPhi3_0->GetYaxis()->SetLabelOffset(0.01);
   hPhi3_0->GetYaxis()->SetLabelSize(0.045);
   hPhi3_0->GetYaxis()->SetTitleSize(0.055);
   hPhi3_0->GetYaxis()->SetTitleOffset(1.2);
   hPhi3_0->GetYaxis()->SetTitleFont(42);
   hPhi3_0->GetZaxis()->SetLabelFont(42);
   hPhi3_0->GetZaxis()->SetLabelSize(0.045);
   hPhi3_0->GetZaxis()->SetTitleFont(42);
   hPhi3_0->Draw("same");
   
   TH1 *hPhi2_0 = new TH1D("hPhi2_0","",100,-1,1);
   hPhi2_0->SetBinContent(41,0.02653928);
   hPhi2_0->SetBinContent(42,0.07961783);
   hPhi2_0->SetBinContent(43,0.07961783);
   hPhi2_0->SetBinContent(44,0.2388535);
   hPhi2_0->SetBinContent(45,0.4511677);
   hPhi2_0->SetBinContent(46,0.8757962);
   hPhi2_0->SetBinContent(47,1.725053);
   hPhi2_0->SetBinContent(48,3.423567);
   hPhi2_0->SetBinContent(49,7.032909);
   hPhi2_0->SetBinContent(50,11.59766);
   hPhi2_0->SetBinContent(51,10.85456);
   hPhi2_0->SetBinContent(52,7.165605);
   hPhi2_0->SetBinContent(53,3.211253);
   hPhi2_0->SetBinContent(54,1.725053);
   hPhi2_0->SetBinContent(55,0.7961783);
   hPhi2_0->SetBinContent(56,0.3980892);
   hPhi2_0->SetBinContent(57,0.1592357);
   hPhi2_0->SetBinContent(58,0.1061571);
   hPhi2_0->SetBinContent(59,0.05307856);
   hPhi2_0->SetBinError(41,0.02653928);
   hPhi2_0->SetBinError(42,0.04596738);
   hPhi2_0->SetBinError(43,0.04596738);
   hPhi2_0->SetBinError(44,0.07961783);
   hPhi2_0->SetBinError(45,0.1094242);
   hPhi2_0->SetBinError(46,0.1524565);
   hPhi2_0->SetBinError(47,0.2139665);
   hPhi2_0->SetBinError(48,0.3014283);
   hPhi2_0->SetBinError(49,0.4320281);
   hPhi2_0->SetBinError(50,0.5547915);
   hPhi2_0->SetBinError(51,0.5367237);
   hPhi2_0->SetBinError(52,0.4360848);
   hPhi2_0->SetBinError(53,0.2919321);
   hPhi2_0->SetBinError(54,0.2139665);
   hPhi2_0->SetBinError(55,0.1453616);
   hPhi2_0->SetBinError(56,0.1027862);
   hPhi2_0->SetBinError(57,0.06500769);
   hPhi2_0->SetBinError(58,0.05307856);
   hPhi2_0->SetBinError(59,0.03753221);
   hPhi2_0->SetEntries(1884);
   hPhi2_0->SetStats(0);
   
   TF1 *fPhi = new TF1("fPhi","gaus",-1,1);
   fPhi->SetFillColor(19);
   fPhi->SetFillStyle(0);
   fPhi->SetMarkerStyle(20);
   fPhi->SetMarkerSize(0.8);
   fPhi->SetLineColor(6);
   fPhi->SetLineWidth(3);
   fPhi->SetChisquare(77.2519);
   fPhi->SetNDF(17);
   fPhi->GetXaxis()->SetLabelFont(42);
   fPhi->GetXaxis()->SetLabelOffset(0.01);
   fPhi->GetXaxis()->SetLabelSize(0.045);
   fPhi->GetXaxis()->SetTitleSize(0.055);
   fPhi->GetXaxis()->SetTitleFont(42);
   fPhi->GetYaxis()->SetLabelFont(42);
   fPhi->GetYaxis()->SetLabelOffset(0.01);
   fPhi->GetYaxis()->SetLabelSize(0.045);
   fPhi->GetYaxis()->SetTitleSize(0.055);
   fPhi->GetYaxis()->SetTitleOffset(1.2);
   fPhi->GetYaxis()->SetTitleFont(42);
   fPhi->SetParameter(0,10.27767);
   fPhi->SetParError(0,0.3517911);
   fPhi->SetParLimits(0,0,0);
   fPhi->SetParameter(1,-0.0008598726);
   fPhi->SetParError(1,0);
   fPhi->SetParLimits(1,1,1);
   fPhi->SetParameter(2,0.03722481);
   fPhi->SetParError(2,0.0009252489);
   fPhi->SetParLimits(2,0,0.4195215);
   hPhi2_0->GetListOfFunctions()->Add(fPhi);
   hPhi2_0->SetFillColor(1);
   hPhi2_0->SetFillStyle(0);
   hPhi2_0->SetLineColor(6);
   hPhi2_0->SetLineStyle(0);
   hPhi2_0->SetMarkerColor(6);
   hPhi2_0->SetMarkerStyle(20);
   hPhi2_0->GetXaxis()->SetTitle("#phi_{CaloJet}-#phi_{GenJet}");
   hPhi2_0->GetXaxis()->SetRange(36,65);
   hPhi2_0->GetXaxis()->CenterTitle(true);
   hPhi2_0->GetXaxis()->SetLabelFont(42);
   hPhi2_0->GetXaxis()->SetLabelOffset(0.01);
   hPhi2_0->GetXaxis()->SetLabelSize(0.045);
   hPhi2_0->GetXaxis()->SetTitleSize(0.055);
   hPhi2_0->GetXaxis()->SetTitleFont(42);
   hPhi2_0->GetYaxis()->SetTitle("Probability");
   hPhi2_0->GetYaxis()->CenterTitle(true);
   hPhi2_0->GetYaxis()->SetLabelFont(42);
   hPhi2_0->GetYaxis()->SetLabelOffset(0.01);
   hPhi2_0->GetYaxis()->SetLabelSize(0.045);
   hPhi2_0->GetYaxis()->SetTitleSize(0.055);
   hPhi2_0->GetYaxis()->SetTitleOffset(1.2);
   hPhi2_0->GetYaxis()->SetTitleFont(42);
   hPhi2_0->GetZaxis()->SetLabelFont(42);
   hPhi2_0->GetZaxis()->SetLabelSize(0.045);
   hPhi2_0->GetZaxis()->SetTitleFont(42);
   hPhi2_0->Draw("same");
   
   TH1 *hPhi1_0 = new TH1D("hPhi1_0","",100,-1,1);
   hPhi1_0->SetBinContent(38,0.02579979);
   hPhi1_0->SetBinContent(41,0.128999);
   hPhi1_0->SetBinContent(42,0.07739938);
   hPhi1_0->SetBinContent(43,0.128999);
   hPhi1_0->SetBinContent(44,0.2579979);
   hPhi1_0->SetBinContent(45,0.6449948);
   hPhi1_0->SetBinContent(46,1.057792);
   hPhi1_0->SetBinContent(47,1.960784);
   hPhi1_0->SetBinContent(48,3.534572);
   hPhi1_0->SetBinContent(49,7.327141);
   hPhi1_0->SetBinContent(50,11.01651);
   hPhi1_0->SetBinContent(51,10.62951);
   hPhi1_0->SetBinContent(52,7.223942);
   hPhi1_0->SetBinContent(53,3.199174);
   hPhi1_0->SetBinContent(54,1.315789);
   hPhi1_0->SetBinContent(55,0.7739938);
   hPhi1_0->SetBinContent(56,0.2579979);
   hPhi1_0->SetBinContent(57,0.1805986);
   hPhi1_0->SetBinContent(58,0.07739938);
   hPhi1_0->SetBinContent(59,0.1031992);
   hPhi1_0->SetBinContent(60,0.07739938);
   hPhi1_0->SetBinError(38,0.02579979);
   hPhi1_0->SetBinError(41,0.05769009);
   hPhi1_0->SetBinError(42,0.04468655);
   hPhi1_0->SetBinError(43,0.05769009);
   hPhi1_0->SetBinError(44,0.08158611);
   hPhi1_0->SetBinError(45,0.128999);
   hPhi1_0->SetBinError(46,0.1651993);
   hPhi1_0->SetBinError(47,0.2249174);
   hPhi1_0->SetBinError(48,0.3019788);
   hPhi1_0->SetBinError(49,0.4347859);
   hPhi1_0->SetBinError(50,0.5331264);
   hPhi1_0->SetBinError(51,0.5236786);
   hPhi1_0->SetBinError(52,0.4317131);
   hPhi1_0->SetBinError(53,0.2872943);
   hPhi1_0->SetBinError(54,0.1842474);
   hPhi1_0->SetBinError(55,0.1413113);
   hPhi1_0->SetBinError(56,0.08158611);
   hPhi1_0->SetBinError(57,0.06825984);
   hPhi1_0->SetBinError(58,0.04468655);
   hPhi1_0->SetBinError(59,0.05159959);
   hPhi1_0->SetBinError(60,0.04468655);
   hPhi1_0->SetEntries(1938);
   hPhi1_0->SetStats(0);
   
   TF1 *fPhi = new TF1("fPhi","gaus",-1,1);
   fPhi->SetFillColor(19);
   fPhi->SetFillStyle(0);
   fPhi->SetMarkerStyle(20);
   fPhi->SetMarkerSize(0.8);
   fPhi->SetLineColor(3);
   fPhi->SetLineWidth(3);
   fPhi->SetChisquare(91.98888);
   fPhi->SetNDF(19);
   fPhi->GetXaxis()->SetLabelFont(42);
   fPhi->GetXaxis()->SetLabelOffset(0.01);
   fPhi->GetXaxis()->SetLabelSize(0.045);
   fPhi->GetXaxis()->SetTitleSize(0.055);
   fPhi->GetXaxis()->SetTitleFont(42);
   fPhi->GetYaxis()->SetLabelFont(42);
   fPhi->GetYaxis()->SetLabelOffset(0.01);
   fPhi->GetYaxis()->SetLabelSize(0.045);
   fPhi->GetYaxis()->SetTitleSize(0.055);
   fPhi->GetYaxis()->SetTitleOffset(1.2);
   fPhi->GetYaxis()->SetTitleFont(42);
   fPhi->SetParameter(0,10.0923);
   fPhi->SetParError(0,0.3374703);
   fPhi->SetParLimits(0,0,0);
   fPhi->SetParameter(1,-0.003333333);
   fPhi->SetParError(1,0);
   fPhi->SetParLimits(1,1,1);
   fPhi->SetParameter(2,0.03765306);
   fPhi->SetParError(2,0.0009037414);
   fPhi->SetParLimits(2,0,0.4465362);
   hPhi1_0->GetListOfFunctions()->Add(fPhi);
   hPhi1_0->SetFillColor(1);
   hPhi1_0->SetFillStyle(0);
   hPhi1_0->SetLineColor(3);
   hPhi1_0->SetLineStyle(0);
   hPhi1_0->SetMarkerColor(3);
   hPhi1_0->SetMarkerStyle(20);
   hPhi1_0->GetXaxis()->SetTitle("#phi_{CaloJet}-#phi_{GenJet}");
   hPhi1_0->GetXaxis()->SetRange(36,65);
   hPhi1_0->GetXaxis()->CenterTitle(true);
   hPhi1_0->GetXaxis()->SetLabelFont(42);
   hPhi1_0->GetXaxis()->SetLabelOffset(0.01);
   hPhi1_0->GetXaxis()->SetLabelSize(0.045);
   hPhi1_0->GetXaxis()->SetTitleSize(0.055);
   hPhi1_0->GetXaxis()->SetTitleFont(42);
   hPhi1_0->GetYaxis()->SetTitle("Probability");
   hPhi1_0->GetYaxis()->CenterTitle(true);
   hPhi1_0->GetYaxis()->SetLabelFont(42);
   hPhi1_0->GetYaxis()->SetLabelOffset(0.01);
   hPhi1_0->GetYaxis()->SetLabelSize(0.045);
   hPhi1_0->GetYaxis()->SetTitleSize(0.055);
   hPhi1_0->GetYaxis()->SetTitleOffset(1.2);
   hPhi1_0->GetYaxis()->SetTitleFont(42);
   hPhi1_0->GetZaxis()->SetLabelFont(42);
   hPhi1_0->GetZaxis()->SetLabelSize(0.045);
   hPhi1_0->GetZaxis()->SetTitleFont(42);
   hPhi1_0->Draw("same");
   
   TH1 *hPhi0_0 = new TH1D("hPhi0_0","",100,-1,1);
   hPhi0_0->SetBinContent(39,0.0245459);
   hPhi0_0->SetBinContent(40,0.0490918);
   hPhi0_0->SetBinContent(42,0.1472754);
   hPhi0_0->SetBinContent(43,0.1472754);
   hPhi0_0->SetBinContent(44,0.3190967);
   hPhi0_0->SetBinContent(45,0.5400098);
   hPhi0_0->SetBinContent(46,0.9081983);
   hPhi0_0->SetBinContent(47,1.939126);
   hPhi0_0->SetBinContent(48,3.730977);
   hPhi0_0->SetBinContent(49,6.82376);
   hPhi0_0->SetBinContent(50,11.02111);
   hPhi0_0->SetBinContent(51,10.45655);
   hPhi0_0->SetBinContent(52,6.111929);
   hPhi0_0->SetBinContent(53,3.780069);
   hPhi0_0->SetBinContent(54,1.816397);
   hPhi0_0->SetBinContent(55,0.9327442);
   hPhi0_0->SetBinContent(56,0.6381934);
   hPhi0_0->SetBinContent(57,0.2209131);
   hPhi0_0->SetBinContent(58,0.2209131);
   hPhi0_0->SetBinContent(59,0.0736377);
   hPhi0_0->SetBinContent(60,0.0981836);
   hPhi0_0->SetBinError(39,0.0245459);
   hPhi0_0->SetBinError(40,0.03471315);
   hPhi0_0->SetBinError(42,0.06012493);
   hPhi0_0->SetBinError(43,0.06012493);
   hPhi0_0->SetBinError(44,0.0885015);
   hPhi0_0->SetBinError(45,0.1151305);
   hPhi0_0->SetBinError(46,0.1493069);
   hPhi0_0->SetBinError(47,0.2181687);
   hPhi0_0->SetBinError(48,0.3026222);
   hPhi0_0->SetBinError(49,0.409262);
   hPhi0_0->SetBinError(50,0.5201183);
   hPhi0_0->SetBinError(51,0.5066217);
   hPhi0_0->SetBinError(52,0.3873278);
   hPhi0_0->SetBinError(53,0.3046066);
   hPhi0_0->SetBinError(54,0.2111518);
   hPhi0_0->SetBinError(55,0.1513111);
   hPhi0_0->SetBinError(56,0.12516);
   hPhi0_0->SetBinError(57,0.0736377);
   hPhi0_0->SetBinError(58,0.0736377);
   hPhi0_0->SetBinError(59,0.04251475);
   hPhi0_0->SetBinError(60,0.0490918);
   hPhi0_0->SetMaximum(45);
   hPhi0_0->SetEntries(2037);
   hPhi0_0->SetStats(0);
   
   TF1 *fPhi = new TF1("fPhi","gaus",-1,1);
   fPhi->SetFillColor(19);
   fPhi->SetFillStyle(0);
   fPhi->SetMarkerStyle(20);
   fPhi->SetMarkerSize(0.8);
   fPhi->SetLineWidth(3);
   fPhi->SetChisquare(100.7025);
   fPhi->SetNDF(19);
   fPhi->GetXaxis()->SetLabelFont(42);
   fPhi->GetXaxis()->SetLabelOffset(0.01);
   fPhi->GetXaxis()->SetLabelSize(0.045);
   fPhi->GetXaxis()->SetTitleSize(0.055);
   fPhi->GetXaxis()->SetTitleFont(42);
   fPhi->GetYaxis()->SetLabelFont(42);
   fPhi->GetYaxis()->SetLabelOffset(0.01);
   fPhi->GetYaxis()->SetLabelSize(0.045);
   fPhi->GetYaxis()->SetTitleSize(0.055);
   fPhi->GetYaxis()->SetTitleOffset(1.2);
   fPhi->GetYaxis()->SetTitleFont(42);
   fPhi->SetParameter(0,9.36473);
   fPhi->SetParError(0,0.3084508);
   fPhi->SetParLimits(0,0,0);
   fPhi->SetParameter(1,-0.0006332842);
   fPhi->SetParError(1,0);
   fPhi->SetParLimits(1,1,1);
   fPhi->SetParameter(2,0.04049464);
   fPhi->SetParError(2,0.0009652583);
   fPhi->SetParLimits(2,0,0.4709991);
   hPhi0_0->GetListOfFunctions()->Add(fPhi);
   hPhi0_0->SetFillColor(1);
   hPhi0_0->SetFillStyle(0);
   hPhi0_0->SetLineStyle(0);
   hPhi0_0->SetMarkerStyle(20);
   hPhi0_0->GetXaxis()->SetTitle("#phi_{CaloJet}-#phi_{GenJet}");
   hPhi0_0->GetXaxis()->SetRange(36,65);
   hPhi0_0->GetXaxis()->CenterTitle(true);
   hPhi0_0->GetXaxis()->SetLabelFont(42);
   hPhi0_0->GetXaxis()->SetLabelOffset(0.01);
   hPhi0_0->GetXaxis()->SetLabelSize(0.045);
   hPhi0_0->GetXaxis()->SetTitleSize(0.055);
   hPhi0_0->GetXaxis()->SetTitleFont(42);
   hPhi0_0->GetYaxis()->SetTitle("Probability");
   hPhi0_0->GetYaxis()->CenterTitle(true);
   hPhi0_0->GetYaxis()->SetLabelFont(42);
   hPhi0_0->GetYaxis()->SetLabelOffset(0.01);
   hPhi0_0->GetYaxis()->SetLabelSize(0.045);
   hPhi0_0->GetYaxis()->SetTitleSize(0.055);
   hPhi0_0->GetYaxis()->SetTitleOffset(1.2);
   hPhi0_0->GetYaxis()->SetTitleFont(42);
   hPhi0_0->GetZaxis()->SetLabelFont(42);
   hPhi0_0->GetZaxis()->SetLabelSize(0.045);
   hPhi0_0->GetZaxis()->SetTitleFont(42);
   hPhi0_0->Draw("same");
   
   TLegend *leg = new TLegend(0.68,0.68,0.94,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hEta0_0","0 - 10%","pl");
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hEta1_0","10 - 20%","pl");
   entry->SetLineColor(3);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hEta2_0","20 - 30%","pl");
   entry->SetLineColor(6);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hEta3_0","30 - 50%","pl");
   entry->SetLineColor(4);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hEta4_0","50 - 100%","pl");
   entry->SetLineColor(2);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
