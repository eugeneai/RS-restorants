//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDataModule5 *DataModule5;
//---------------------------------------------------------------------------
__fastcall TDataModule5::TDataModule5(TComponent* Owner)
        : TDataModule(Owner)
{          void __fastcall TForm1::FormCreate(TObject *Sender)
{
DataModule2->Table1->DatabaseName = "REST";
DataModule2->Table1->TableName = "MAIN.fdb";
DataModule2->DataSource1->DataSet = DataModule2->Table1;
DBGrid1->DataSource = DataModule2->DataSource1;
DBNavigator1->DataSource = DataModule2->DataSource1;
DataModule2->Tablel->Active = true;
}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
 