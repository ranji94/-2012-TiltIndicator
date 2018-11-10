//---------------------------------------------------------------------------

#ifndef wskazH
#define wskazH
#define min(a, b)  (((a) < (b)) ? (a) : (b)) 
#define max(a, b)  (((a) > (b)) ? (a) : (b))
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <math.h>
#include <ComCtrls.hpp>
#include <Graphics.hpp>
#include <windows.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TTrackBar *TrackBar1;
	TLabel *Label8;
	TLabel *Label9;
	TTimer *Timer1;
	TImage *Image2;
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:
Graphics::TBitmap * symbol;
TRect symb;	// User declarations
public:
void tarcza();
void kolorstrzalki();
void deltazmian();
void zmien();
void obrot();// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
