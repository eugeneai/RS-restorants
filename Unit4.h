//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBTable.hpp>
//---------------------------------------------------------------------------
class TDataModule4 : public TDataModule
{
__published:	// IDE-managed Components
        TQuery *IBQuery1;
        TDataSource *DataSource1;
        TDataSource *DataSource2;
        TIBDatabase *Database1;
        TIBTransaction *IBTransaction1;
        TIBTable *IBTable1;
        void __fastcall h(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TDataModule4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule4 *DataModule4;
//---------------------------------------------------------------------------
#endif
