//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *background;
        TLabel *Label1;
        TImage *z1;
        TImage *z2;
        TImage *z3;
        TImage *z4;
        TImage *z5;
        TImage *z1a;
        TImage *z2a;
        TImage *z3a;
        TImage *z4a;
        TImage *z5a;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Label1Click(TObject *Sender);
        void __fastcall z1Click(TObject *Sender);
        void __fastcall z2Click(TObject *Sender);
        void __fastcall z3Click(TObject *Sender);
        void __fastcall z4Click(TObject *Sender);
        void __fastcall z5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
