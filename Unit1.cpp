//---------------------------------------------------------------------------

#include <vcl.h>
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>

//---------------------------------------------------------------------------
#include <vcl.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

void __fastcall TForm1::Button2Click(TObject *Sender)
{
RadioGroup1->ItemIndex=-1;
RadioGroup2->ItemIndex=-1;
RadioGroup3->ItemIndex=-1;
RadioGroup4->ItemIndex=-1;
RadioGroup5->ItemIndex=-1;
RadioGroup6->ItemIndex=-1;
RadioGroup7->ItemIndex=-1;
RadioGroup8->ItemIndex=-1;
RadioGroup9->ItemIndex=-1;
RadioGroup10->ItemIndex=-1;
DataModule4->IBQuery1->Active=false;
DataModule4->IBQuery1->SQL->Clear();
DataModule4->IBQuery1->SQL->Add("select * from REST");
DataModule4->IBQuery1->Active=true;
  }
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)

{
AnsiString a="";
AnsiString b="";
AnsiString c="";
AnsiString d="";
AnsiString e="";
AnsiString f="";
AnsiString g="";
AnsiString h="";
AnsiString i="";
AnsiString j="";
if (RadioGroup1->ItemIndex!=-1) {
if (RadioGroup1->ItemIndex==0)
{a="yes";}
else if (RadioGroup1->ItemIndex==1) {
a="no"; }
}
if (RadioGroup2->ItemIndex!=-1) {
if (RadioGroup2->ItemIndex==0)
{b="up 5";}
else if (RadioGroup2->ItemIndex==1) {
b="from 5"; }
}
if (RadioGroup3->ItemIndex!=-1) {
if (RadioGroup3->ItemIndex==0)
{c="very good";}
else if (RadioGroup3->ItemIndex==1) {
c="good"; }
}
if (RadioGroup4->ItemIndex!=-1) {
if (RadioGroup4->ItemIndex==0){
d="yes";}
else if (RadioGroup4->ItemIndex==1) {
d="no"; }
}
if (RadioGroup5->ItemIndex!=-1) {
if (RadioGroup5->ItemIndex==0){
e="live";}
else if (RadioGroup5->ItemIndex==1) {
e="fono"; }
}
if (RadioGroup6->ItemIndex!=-1) {
if (RadioGroup6->ItemIndex==0){
f="russian";}
else if (RadioGroup6->ItemIndex==1) {
f="urkrain"; }
else if (RadioGroup6->ItemIndex==2) {
f="chinese"; }
else if (RadioGroup6->ItemIndex==3) {
f="european"; }
}
if (RadioGroup7->ItemIndex!=-1) {
if (RadioGroup7->ItemIndex==0){
g="Luxury";}
else if (RadioGroup7->ItemIndex==1) {
g="first"; }
else if (RadioGroup7->ItemIndex==2) {
g="second"; }
}
if (RadioGroup8->ItemIndex!=-1) {
if (RadioGroup8->ItemIndex==0){
h="up 50 people";}
else if (RadioGroup8->ItemIndex==1) {
h="from 50 people"; }
}
if (RadioGroup9->ItemIndex!=-1) {
if (RadioGroup9->ItemIndex==0){
i="1000 rub";}
else if (RadioGroup9->ItemIndex==1) {
i="1500-2500 rub."; }
else if (RadioGroup9->ItemIndex==2) {
i="2500 and more rub."; }
}
if (RadioGroup10->ItemIndex!=-1) {
if (RadioGroup10->ItemIndex==0){
j="centr";}
else if (RadioGroup10->ItemIndex==1) {
j="getto"; }
}
DataModule4->IBQuery1->Active=false;
DataModule4->IBQuery1->SQL->Clear();
DataModule4->IBQuery1->SQL->Add("SELECT * from rest WHERE");
if (a!="") {
DataModule4->IBQuery1->SQL?Add("parking LIKE '"+a+"'");
}
if (b!=""){
if (a!=""){
DataModule4->IBQuery1->SQL->Add("and repeir LIKE '"+b+"'"); }
else {DataModule4->IBQuery1->SQL->Add(" repeir LIKE '"+b+"'");}
}
if (c!=""){
if ((a!="") || (b!="")){
DataModule4->IBQuery1->SQL->Add("and quality LIKE '"+c+"'"); }
else {DataModule2?IBQuery1?SQL?Add(" quality LIKE '"+c+"'");}
}
if (d!=""){
if ((a!="") || (b!="") || (c!="")){
DataModule4->IBQuery1->SQL->Add("and delivery LIKE '"+d+"'"); }
else {DataModule4->IBQuery1->SQL->Add("delivery LIKE '"+d+"'");}
}
if (e!=""){
if ((a!="") || (b!="") || (c!="") || (d!="")){
DataModule4->IBQuery1->SQL->Add("and music LIKE '"+e+"'"); }
else {DataModule4->IBQuery1->SQL->Add("music LIKE '"+e+"'");}
}
if (f!=""){
if ((a!="") || (b!="") || (c!="") || (d!="") || (e!="")){
DataModule4->IBQuery1->SQL->Add("and cuisine LIKE '"+f+"'"); }
else {DataModule4->IBQuery1->SQL->Add("cuisine LIKE '"+f+"'");}
}
if (g!=""){
if ((a!="") || (b!="") || (c!="") || (d!="") || (e!="") || (f!="")){
DataModule4->IBQuery1->SQL->Add("and type_rest LIKE '"+g+"'"); }
else {DataModule4->IBQuery1->SQL->Add("type_rest LIKE '"+g+"'");}
}
if (h!=""){
if ((a!="") || (b!="") || (c!="") || (d!="") || (e!="") || (f!="") || (g!="")){
DataModule4->IBQuery1->SQL->Add("and dance LIKE '"+h+"'"); }
else {DataModule4->IBQuery1->SQL->Add("dance LIKE '"+h+"'");}
}
if (i!=""){
if ((a!="") || (b!="") || (c!="") || (d!="") || (e!="") || (f!="") || (g!="") || (h!="")){
DataModule4->IBQuery1->SQL->Add("and price LIKE '"+i+"'"); }
else {DataModule4->IBQuery1->SQL->Add("price LIKE '"+i+"'");}
}
if (j!=""){
if ((a!="") || (b!="") || (c!="") || (d!="") || (e!="") || (f!="") || (g!="") || (h!="") || (i!="")){
DataModule4->IBQuery1->SQL->Add("and area LIKE '"+j+"'"); }
else {DataModule4->IBQuery1->SQL->Add("area LIKE '"+j+"'");}
}
DataModule4->IBQuery1->Active=true;
DBGrid1?Columns?Items[0]?Title?Caption=" ";
DBGrid1->Columns->Items[0]->Width=20;
DBGrid1->Columns->Items[1]->Title->Caption="Название";
DBGrid1->Columns->Items[1]->Width=85;
DBGrid1->Columns->Items[2]->Title->Caption="Адрес";
DBGrid1->Columns->Items[2]->Width=225;
DBGrid1->Columns->Items[3]->Title->Caption="Район";
DBGrid1->Columns->Items[3]->Width=60;
DBGrid1->Columns->Items[4]->Title->Caption="Цена";
DBGrid1->Columns->Items[4]->Width=142;
DBGrid1->Columns->Items[5]->Title->Caption="Кухня";
DBGrid1->Columns->Items[5]->Width=90;
DBGrid1->Columns->Items[6]->Title->Caption="Музыка";
DBGrid1->Columns->Items[6]->Width=60;
DBGrid1->Columns->Items[7]->Title->Caption="Типресторана";
DBGrid1->Columns->Items[7]->Width=105;
DBGrid1->Columns->Items[8]->Title->Caption="Качествоблюда";
DBGrid1->Columns->Items[8]->Width=86;
DBGrid1->Columns->Items[9]->Title->Caption="Танцпол";
DBGrid1->Columns->Items[9]->Width=96;
DBGrid1->Columns->Items[10]->Title->Caption="Доставка";
DBGrid1->Columns->Items[10]->Width=93;
DBGrid1->Columns->Items[11]->Title->Caption="Стоянка";
DBGrid1->Columns->Items[11]->Width=93;
DBGrid1->Columns->Items[12]->Title->Caption="Ремонт";
DBGrid1->Columns->Items[12]->Width=75;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ind_priceClick(TObject *Sender)
{
DataModule4->IBTable1->Active=false;
DataModule4->IBTable1->IndexName="ind_price";
DataModule4->IBTable1->Active=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
Variant v;
v=DataModule4->IBTable1->Lookup("name", Edit1->Text, "address");
if(!(VarType(v)==varNull))
{Edit2->Text=v;}
else
ShowMessage("ненайдено");
}
//--------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
DataModule4->IBTable1->Active=false;
DataModule4->IBTable1->IndexName="ind_name";
DataModule4->IBTable1->Active=true;
}


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


