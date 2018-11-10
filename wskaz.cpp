//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "wskaz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int a, cyfrowy,startX=190,startY=210, WysokoscWskaznika, SzerokoscWskaznika;
double X,Y, pi=3.14;
float skala;
bool ryzyko=false;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
DoubleBuffered=True;
symbol=new Graphics::TBitmap;
symbol->Width=SzerokoscWskaznika;
symbol->Height=WysokoscWskaznika;
symb.left=0;
symb.top=0;
symb.right=WysokoscWskaznika;
symb.bottom=SzerokoscWskaznika;
Image2->Canvas->CopyRect(symb,symbol->Canvas,symb);
////////////////////////////////////////
tarcza();
Image1->Canvas->Pen->Color=RGB(0,255,0);
Image1->Canvas->MoveTo(595,208.5);
X=399.5+185*cos(pi);
Y=208.5+185*sin(pi);
Image1->Canvas->LineTo(X,Y);
}

void TForm1::tarcza()
{
   Image1->Picture=NULL;               //  czyszczenie IMAGE
   Image1->Canvas->Brush->Color=RGB(0,0,0);
   Image1->Canvas->Rectangle(0,0,Image1->Width,Image1->Height);
   Image1->Canvas->Pen->Color=RGB(255,255,255);
   Image1->Canvas->Pen->Width=6;
   Image1->Canvas->Brush->Color=RGB(90,90,90);
   Image1->Canvas->Ellipse(170,0,Image1->Width,Image1->Height);
   Image1->Canvas->Pen->Color=RGB(90,90,90);
   Image1->Canvas->Pen->Width=4;
   Image1->Canvas->Brush->Color=RGB(0,0,0);
   Image1->Canvas->Ellipse(195,25,Image1->Width-25,Image1->Height-25);
   Image1->Canvas->Brush->Color=RGB(255,255,255);
   Image1->Canvas->Rectangle(168,208,178,212);
   kolorstrzalki();
   Image1->Canvas->Ellipse(389.5,198.5,409.5,218.5);

 /// DO GÓRY
		  int x1=200;
	  int y1=306;
	  TPoint rotekontolle[6];
	  Image1->Canvas->Brush->Color=RGB(255,0,0);
	  Image1->Canvas->Pen->Color=RGB(255,0,0);
	  rotekontolle[0]. x=x1;
	  rotekontolle[0]. y=y1;
	  rotekontolle[1]. x=x1+14;
	  rotekontolle[1]. y=y1+21;
	  rotekontolle[2]. x=x1+30;
	  rotekontolle[2]. y=y1+44;
	  rotekontolle[3]. x=x1+70;
	  rotekontolle[3]. y=y1+44;
	  rotekontolle[4]. x=x1+45;
	  rotekontolle[4]. y=y1+21;
	  rotekontolle[5]. x=x1+29;
	  rotekontolle[5]. y=y1;
	  Image1->Canvas->Polygon(rotekontolle, 5);

	  x1=180;
	  y1=260;
	  TPoint gelbekontolle[6];
	  Image1->Canvas->Brush->Color=RGB(255,255,0);
	  Image1->Canvas->Pen->Color=RGB(255,255,0);
	  gelbekontolle[0]. x=x1;
	  gelbekontolle[0]. y=y1;
	  gelbekontolle[1]. x=x1+8;
	  gelbekontolle[1]. y=y1+21;
	  gelbekontolle[2]. x=x1+20;
	  gelbekontolle[2]. y=y1+44;
	  gelbekontolle[3]. x=x1+46;
	  gelbekontolle[3]. y=y1+44;
	  gelbekontolle[4]. x=x1+32;
	  gelbekontolle[4]. y=y1+21;
	  gelbekontolle[5]. x=x1+24;
	  gelbekontolle[5]. y=y1;
	  Image1->Canvas->Polygon(gelbekontolle, 5);

	  x1=180;
	  y1=121;
	  TPoint gelbekontrolle[6];
	  gelbekontrolle[0]. x=x1+15;
	  gelbekontrolle[0]. y=y1;
	  gelbekontrolle[1]. x=x1+5;
	  gelbekontrolle[1]. y=y1+21;
	  gelbekontrolle[2]. x=x1;
	  gelbekontrolle[2]. y=y1+44;
	  gelbekontrolle[3]. x=x1+20;
	  gelbekontrolle[3]. y=y1+44;
	  gelbekontrolle[4]. x=x1+30;
	  gelbekontrolle[4]. y=y1+21;
	  gelbekontrolle[5]. x=x1+40;
	  gelbekontrolle[5]. y=y1;
	  Image1->Canvas->Polygon(gelbekontrolle, 5);

	  x1=200;
	  y1=72;
	  Image1->Canvas->Brush->Color=RGB(255,0,0);
	  Image1->Canvas->Pen->Color=RGB(255,0,0);
	  TPoint rotekontrolle[6];
	  rotekontrolle[0]. x=x1+30;
	  rotekontrolle[0]. y=y1;
	  rotekontrolle[1]. x=x1+10;
	  rotekontrolle[1]. y=y1+21;
	  rotekontrolle[2]. x=x1-2;
	  rotekontrolle[2]. y=y1+46;
	  rotekontrolle[3]. x=x1+20;
	  rotekontrolle[3]. y=y1+46;
	  rotekontrolle[4]. x=x1+40;
	  rotekontrolle[4]. y=y1+21;
	  rotekontrolle[5]. x=x1+60;
	  rotekontrolle[5]. y=y1;
	  Image1->Canvas->Polygon(rotekontrolle, 5);

   Image1->Canvas->Brush->Color=RGB(255,255,255);
   Image1->Canvas->Pen->Color=RGB(255,255,255);
   y1=161;
   x1=171;
   int przech=1;
	  TPoint wska1[4];
	  wska1[0]. x=x1;
	  wska1[0]. y=y1;
	  wska1[1]. x=x1+15;
	  wska1[1]. y=y1;
	  wska1[2]. x=x1-przech;
	  wska1[2]. y=y1+4;
	  wska1[3]. x=x1+15-przech;
	  wska1[3]. y=y1+4;
	  Image1->Canvas->Polygon(wska1, 3);

   y1=114;
   x1=190;
   przech=2;
	  TPoint wska2[4];
	  wska2[0]. x=x1;
	  wska2[0]. y=y1;
	  wska2[1]. x=x1+15;
	  wska2[1]. y=y1;
	  wska2[2]. x=x1-przech;
	  wska2[2]. y=y1+4;
	  wska2[3]. x=x1+15-przech;
	  wska2[3]. y=y1+4;
	  Image1->Canvas->Polygon(wska2, 3);

   y1=67;
   x1=225;
   przech=4;
	  TPoint wska3[4];
	  wska3[0]. x=x1;
	  wska3[0]. y=y1;
	  wska3[1]. x=x1+15;
	  wska3[1]. y=y1;
	  wska3[2]. x=x1-przech;
	  wska3[2]. y=y1+4;
	  wska3[3]. x=x1+15-przech;
	  wska3[3]. y=y1+4;
	  Image1->Canvas->Polygon(wska3, 3);
   // W DÓ£

   y1=208+47;
   x1=171;
   przech=1;
	  TPoint wska4[4];
	  wska4[0]. x=x1;
	  wska4[0]. y=y1;
	  wska4[1]. x=x1+15;
	  wska4[1]. y=y1;
	  wska4[2]. x=x1+przech;
	  wska4[2]. y=y1+4;
	  wska4[3]. x=x1+15+przech;
	  wska4[3]. y=y1+4;
	  Image1->Canvas->Polygon(wska4, 3);

   y1=208+47*2;
   x1=190;
   przech=2;
	  TPoint wska5[4];
	  wska5[0]. x=x1;
	  wska5[0]. y=y1;
	  wska5[1]. x=x1+15;
	  wska5[1]. y=y1;
	  wska5[2]. x=x1+przech;
	  wska5[2]. y=y1+4;
	  wska5[3]. x=x1+15+przech;
	  wska5[3]. y=y1+4;
	  Image1->Canvas->Polygon(wska5, 3);

   y1=208+47*3;
   x1=225;
   przech=4;
	  TPoint wska6[4];
	  wska6[0]. x=x1;
	  wska6[0]. y=y1;
	  wska6[1]. x=x1+15;
	  wska6[1]. y=y1;
	  wska6[2]. x=x1+przech;
	  wska6[2]. y=y1+4;
	  wska6[3]. x=x1+15+przech;
	  wska6[3]. y=y1+4;
	  Image1->Canvas->Polygon(wska6, 3);




}


void TForm1::kolorstrzalki()
{
	if (pi <= 3.35 & pi >= 2.9)
	{
	Image1->Canvas->Pen->Color=RGB(0,255,0);
	ryzyko=false;
	Label9->Visible=false;
	}
	else if ((pi<=3.6 & pi>3.35) | (pi<=2.9 & pi>2.63))
	{
	Image1->Canvas->Pen->Color=RGB(255,255,0);
	ryzyko=false;
	Label9->Visible=false;
	}
	else
	{
	ryzyko=true;
	Image1->Canvas->Pen->Color=RGB(255,0,0);
	}
}

//--------------------------------------------------------------------------

//---------------------------------------------------------------------------
void TForm1::zmien()
{

	tarcza();
	Label1->Caption=FloatToStr(pi);
	X=399.5+185*cos(pi);
	Y=208.5+185*sin(pi);
	Image1->Canvas->MoveTo(389.5,208.5);
	Image1->Canvas->LineTo(X,Y);

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
	tarcza();
	pi=(TrackBar1->Position)*0.01;
	cyfrowy=(pi-3.14)*64.78;
	//obrot();
	Label8->Caption=FloatToStr(abs(cyfrowy))+"°";
	kolorstrzalki();
	X=399.5+175*cos(pi+M_PI);
	Y=208.5+175*sin(pi+M_PI);
	Image1->Canvas->MoveTo(X,Y);
	X=399.5+195*cos(pi);
	Y=208.5+195*sin(pi);
  //	Image1->Canvas->MoveTo(595,208.5);
	Image1->Canvas->LineTo(X,Y);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	if (ryzyko==true)
	{
		if (Label9->Visible==true)
		Label9->Visible=false;
		else
		Label9->Visible=true;
	}
}
//---------------------------------------------------------------------------

void TForm1::obrot()
{


}

