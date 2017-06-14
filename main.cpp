//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit2.cpp", DataModule2); /* TDataModule: File Type */
USEFORM("Unit3.cpp", DataModule3); /* TDataModule: File Type */
USEFORM("Unit4.cpp", DataModule4); /* TDataModule: File Type */
USEFORM("Unit5.cpp", DataModule5); /* TDataModule: File Type */
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TDataModule2), &DataModule2);
                 Application->CreateForm(__classid(TDataModule3), &DataModule3);
                 Application->CreateForm(__classid(TDataModule4), &DataModule4);
                 Application->CreateForm(__classid(TDataModule5), &DataModule5);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
