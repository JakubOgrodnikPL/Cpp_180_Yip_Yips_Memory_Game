//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int liczby[1000];
bool gra_rozpoczeta = false;
int ile=0;

void sekwencja()
{
        Form1->z1->Enabled = false;
        Form1->z2->Enabled = false;
        Form1->z3->Enabled = false;
        Form1->z4->Enabled = false;
        Form1->z5->Enabled = false;

        Form1->Label1->Caption = "Nastepna runda za: 2";
        Application->ProcessMessages(); Sleep(1000);
        Form1->Label1->Caption = "Nastepna runda za: 1";
        Application->ProcessMessages(); Sleep(1000);
        Form1->Label1->Caption = "Zapamietaj sekwencje";
        Application->ProcessMessages(); Sleep(1000);

        ile++;
        for (int i=0; i<ile; i++)
        {
                switch(liczby[i])
                {
                 case 1:
                 {
                 sndPlaySound("snd/d1.wav",SND_ASYNC);
                 Form1->z1a->Visible = true;
                 } break;
                 case 2:
                 {
                 sndPlaySound("snd/d2.wav",SND_ASYNC);
                 Form1->z2a->Visible = true;
                 } break;
                 case 3:
                 {
                 sndPlaySound("snd/d3.wav",SND_ASYNC);
                 Form1->z3a->Visible = true;
                 } break;
                 case 4:
                 {
                 sndPlaySound("snd/d4.wav",SND_ASYNC);
                 Form1->z4a->Visible = true;
                 } break;
                 case 5:
                 {
                 sndPlaySound("snd/d5.wav",SND_ASYNC);
                 Form1->z5a->Visible = true;
                 } break;
                } //switch
                Application->ProcessMessages(); Sleep(1200);
                Form1->z1a->Visible = false;
                Form1->z2a->Visible = false;
                Form1->z3a->Visible = false;
                Form1->z4a->Visible = false;
                Form1->z5a->Visible = false;
                Application->ProcessMessages(); Sleep(100);
        } //for

        Form1->z1->Enabled = true;
        Form1->z2->Enabled = true;
        Form1->z3->Enabled = true;
        Form1->z4->Enabled = true;
        Form1->z5->Enabled = true;
        Form1->Label1->Caption = "Powtorz sekwencje";

}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        randomize();
        for (int i=0; i<1000; i++)
        {
                liczby[i] = random(5)+1;
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Label1Click(TObject *Sender)
{
        if(gra_rozpoczeta == false)
        {
        gra_rozpoczeta = true;
        sndPlaySound("snd/start.wav', SND_ASYNC);
        sekwencja();
        }
}
//---------------------------------------------------------------------------
