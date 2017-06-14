//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Unit1.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TRadioGroup *RadioGroup1;
        TRadioGroup *RadioGroup2;
        TRadioGroup *RadioGroup3;
        TRadioGroup *RadioGroup4;
        TRadioGroup *RadioGroup5;
        TRadioGroup *RadioGroup6;
        TRadioGroup *RadioGroup7;
        TRadioGroup *RadioGroup8;
        TRadioGroup *RadioGroup9;
        TRadioGroup *RadioGroup10;
        TButton *Button1;
        TButton *Button2;
        TDBGrid *DBGrid1;
        TDBGrid *DBGrid2;
        TEdit *Edit1;
        TEdit *Edit2;
        TButton *ind_price;
        TButton *ind_name;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button5;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall RadioGroup1Click(TObject *Sender);
        void __fastcall ind_priceClick(TObject *Sender);
        void __fastcall PageControl1Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
