//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <fstream>
#include "RegisterForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegisterationForm *MyRegisterationForm;
//---------------------------------------------------------------------------
__fastcall TMyRegisterationForm::TMyRegisterationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyRegisterationForm::RegisterButtonClick(TObject *Sender)
{
	 fstream myfile ;
	 myfile.open("RegisteredUsers.txt",ios::app);
	 if (myfile.is_open())
	 {
		AnsiString name = NameEdit->Text ;
		AnsiString age = AgeEdit->Text ;
		AnsiString username = UsernamaeEdit->Text ;
		AnsiString password = PasswordEdit->Text ;


		myfile << name << "," << age << "," << username << "," << password << "\n" ;
		myfile.close() ;
		this->Close();
	 }
}
//---------------------------------------------------------------------------
