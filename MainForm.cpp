//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
#include "LoginForm.h"
#include "RegisterForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyMainForm *MyMainForm;
//---------------------------------------------------------------------------
__fastcall TMyMainForm::TMyMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyMainForm::LoginButtonClick(TObject *Sender)
{
	MyLoginForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMyMainForm::RegisterButtonClick(TObject *Sender)
{
	MyRegisterationForm->Show();
}
//---------------------------------------------------------------------------
