void NoSysDeltaM10GeV()
{
//=========Macro generated from canvas: c/CMS Phase-2 Simulation 3000fb^{-1} (14 TeV)
//=========  (Mon Feb 18 14:21:53 2019) by ROOT version 6.15/01
   TCanvas *c = new TCanvas("c", "CMS Phase-2 Simulation 3000fb^{-1} (14 TeV)",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(85.71429,-0.1275,204.7619,0.935);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.12);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hframe__1__1 = new TH1F("hframe__1__1","",1000,100,200);
   hframe__1__1->SetMinimum(0);
   hframe__1__1->SetMaximum(0.85);
   hframe__1__1->SetDirectory(0);
   hframe__1__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hframe__1__1->SetLineColor(ci);
   hframe__1__1->GetXaxis()->SetTitle("m_{F}(GeV)");
   hframe__1__1->GetXaxis()->SetNdivisions(508);
   hframe__1__1->GetXaxis()->SetLabelFont(42);
   hframe__1__1->GetXaxis()->SetLabelSize(0.035);
   hframe__1__1->GetXaxis()->SetTitleSize(0.035);
   hframe__1__1->GetXaxis()->SetTitleOffset(1);
   hframe__1__1->GetXaxis()->SetTitleFont(42);
   hframe__1__1->GetYaxis()->SetTitle("95% CL limit on #sigma [fb]");
   hframe__1__1->GetYaxis()->CenterTitle(true);
   hframe__1__1->GetYaxis()->SetLabelFont(42);
   hframe__1__1->GetYaxis()->SetLabelSize(0.035);
   hframe__1__1->GetYaxis()->SetTitleSize(0.035);
   hframe__1__1->GetYaxis()->SetTitleOffset(0.9);
   hframe__1__1->GetYaxis()->SetTitleFont(42);
   hframe__1__1->GetZaxis()->SetLabelFont(42);
   hframe__1__1->GetZaxis()->SetLabelSize(0.035);
   hframe__1__1->GetZaxis()->SetTitleSize(0.035);
   hframe__1__1->GetZaxis()->SetTitleOffset(1);
   hframe__1__1->GetZaxis()->SetTitleFont(42);
   hframe__1__1->Draw(" ");
   
   Double_t Graph0_fx1[6] = {
   100,
   150,
   200,
   200,
   150,
   100};
   Double_t Graph0_fy1[6] = {
   0.21,
   0.184,
   0.141,
   0.042,
   0.054,
   0.062};
   TGraph *graph = new TGraph(6,Graph0_fx1,Graph0_fy1);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#ffcc00");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","Graph",100,90,210);
   Graph_Graph_Graph11->SetMinimum(0.0852427);
   Graph_Graph_Graph11->SetMaximum(0.6128863);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph11);
   
   graph->Draw("f");
   
   Double_t Graph1_fx2[6] = {
   100,
   150,
   200,
   200,
   150,
   100};
   Double_t Graph1_fy2[6] = {
   0.157,
   0.139,
   0.106,
   0.055,
   0.072,
   0.082};
   graph = new TGraph(6,Graph1_fx2,Graph1_fy2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   graph->SetLineColor(ci);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","Graph",100,90,210);
   Graph_Graph_Graph22->SetMinimum(0.1428599);
   Graph_Graph_Graph22->SetMaximum(0.4674731);
   Graph_Graph_Graph22->SetDirectory(0);
   Graph_Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph22->SetLineColor(ci);
   Graph_Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph22);
   
   graph->Draw("f");
   
   Double_t Graph2_fx3[3] = {
   100,
   150,
   200};
   Double_t Graph2_fy3[3] = {
   0.114,
   0.1,
   0.077};
   graph = new TGraph(3,Graph2_fx3,Graph2_fy3);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph_Graph33 = new TH1F("Graph_Graph_Graph33","Graph",100,90,210);
   Graph_Graph_Graph33->SetMinimum(0.2219566);
   Graph_Graph_Graph33->SetMaximum(0.3345094);
   Graph_Graph_Graph33->SetDirectory(0);
   Graph_Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph33->SetLineColor(ci);
   Graph_Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph33->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph33->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph33->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph33->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph33->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph33);
   
   graph->Draw("l");
   
   Double_t Graph3_fx4[11] = {
   100,
   110,
   120,
   130,
   140,
   150,
   160,
   170,
   180,
   190,
   200};
   Double_t Graph3_fy4[11] = {
   0.815,
   0.614,
   0.465,
   0.351,
   0.272,
   0.21,
   0.165,
   0.13,
   0.105,
   0.084,
   0.069};
   graph = new TGraph(11,Graph3_fx4,Graph3_fy4);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(6);
   graph->SetLineWidth(2);
   
   TH1F *Graph_Graph_Graph44 = new TH1F("Graph_Graph_Graph44","Graph",100,90,210);
   Graph_Graph_Graph44->SetMinimum(0.0648);
   Graph_Graph_Graph44->SetMaximum(0.8948);
   Graph_Graph_Graph44->SetDirectory(0);
   Graph_Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph44->SetLineColor(ci);
   Graph_Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph44->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph44->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph44->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph44->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph44->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph44);
   
   graph->Draw("l");
   TLatex *   tex = new TLatex(0.95,0.928,"3000 fb^{-1} (14 TeV, 200 PU)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.97,"CMS");
tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.33,0.96,"Phase-2 Simulation");
tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe__2__2 = new TH1F("hframe__2__2","",1000,100,200);
   hframe__2__2->SetMinimum(0);
   hframe__2__2->SetMaximum(0.85);
   hframe__2__2->SetDirectory(0);
   hframe__2__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   hframe__2__2->SetLineColor(ci);
   hframe__2__2->GetXaxis()->SetTitle("m_{F}(GeV)");
   hframe__2__2->GetXaxis()->SetNdivisions(508);
   hframe__2__2->GetXaxis()->SetLabelFont(42);
   hframe__2__2->GetXaxis()->SetLabelSize(0.035);
   hframe__2__2->GetXaxis()->SetTitleSize(0.035);
   hframe__2__2->GetXaxis()->SetTitleOffset(1);
   hframe__2__2->GetXaxis()->SetTitleFont(42);
   hframe__2__2->GetYaxis()->SetTitle("95% CL limit on #sigma [fb]");
   hframe__2__2->GetYaxis()->CenterTitle(true);
   hframe__2__2->GetYaxis()->SetLabelFont(42);
   hframe__2__2->GetYaxis()->SetLabelSize(0.035);
   hframe__2__2->GetYaxis()->SetTitleSize(0.035);
   hframe__2__2->GetYaxis()->SetTitleOffset(0.9);
   hframe__2__2->GetYaxis()->SetTitleFont(42);
   hframe__2__2->GetZaxis()->SetLabelFont(42);
   hframe__2__2->GetZaxis()->SetLabelSize(0.035);
   hframe__2__2->GetZaxis()->SetTitleSize(0.035);
   hframe__2__2->GetZaxis()->SetTitleOffset(1);
   hframe__2__2->GetZaxis()->SetTitleFont(42);
   hframe__2__2->Draw("sameaxis");
   
   TLegend *leg = new TLegend(0.6,0.65,0.84,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.041);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph3","Theory","l");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Expected","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","68% expected","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","95% expected","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#bf{No sys. uncer.}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.6,0.65,0.84,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.041);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("Graph3","Theory","l");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","Expected","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","68% expected","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","95% expected","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","#bf{No sys. uncer.}","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
