//---------------------------------------------------------------------------

#ifndef RegisterFormH
#define RegisterFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyRegisterationForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *AgeEdit;
	TEdit *PasswordEdit;
	TEdit *NameEdit;
	TEdit *UsernamaeEdit;
	TButton *RegisterButton;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	void __fastcall RegisterButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyRegisterationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyRegisterationForm *MyRegisterationForm;
//---------------------------------------------------------------------------
#endif
