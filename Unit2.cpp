//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
__fastcall TDataModule2::TDataModule2(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TDataModule2::DataModuleCreate(TObject *Sender)
{
   #include <vcl\vcl.h>
	#pragma hdrstop
	
	#include "cust1.h"
	#include "custdm1.h" // ?????? ?? ?????? ??????
	//-----------------------------------------------------
	#pragma link "Grids"
	#pragma resource "*.dfm"
	TForm1 *Form1;
	//-----------------------------------------------------
	__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
	{
	}
	//-----------------------------------------------------
	void __fastcall TForm1::Button1Click(TObject *Sender)
	{
	if (DataModule1->Table1->Active)
	{
	DataModule1->Table1->Close();
	Button1->Caption = "??????? ??????? &????????";
	}
	else
	{
	DataModule1->Table1->Open();
	Button1->Caption= "??????? ??????? &????????";
	};
	}
	//-----------------------------------------------------
	void __fastcall TForm1::Button2Click(TObject *Sender)
	{
	if (DataModule1->Query1->Active)
	{
	DataModule1->Query1->Active = false;
	Button2->Caption = "??????? ??????? &???????";}
	else
	
	{
	DataModule1->Query1->Active = true;
	Button2->Caption = "??????? ??????? &???????";
	}
	}
	//-----------------------------------------------------
	void __fastcall TForm1::RadioButton1Click(TObject *Sender)
	{
	DBGrid1->DataSource = DataModule1->DataSource1;
	}
	//-----------------------------------------------------
	void __fastcall TForm1::RadioButton2Click(TObject *Sender)
	{
	DBGrid1->DataSource = DataModule1->DataSource2;
	}
	//-----------------------------------------------------
	void __fastcall TForm1::RadioButton3Click(TObject *Sender)
	{
	DBGrid1->DataSource = DataModule1->DataSource3;
	}
	//----------------------------------------------------
	void __fastcall TForm1::Button3Click(TObject *Sender)
	{
	if (DataModule1->Table1->Active)
	{
	DataModule1->Table1->SetRangeStart();
	DataModule1->Table1->Fields[0]->AsString = Edit1->Text;
	DataModule1->Table1->SetRangeEnd();
	DataModule1->Table1->Fields[0]->AsString = Edit2->Text;
	DataModule1->Table1->ApplyRange();
	}
	}     
}
//---------------------------------------------------------------------------
 