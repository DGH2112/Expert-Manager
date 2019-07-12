#ifndef ExpertManagerOptionsFormH
#define ExpertManagerOptionsFormH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "ExpertManagerTypes.h"
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>

/** A class to represent an options form for the application. **/
class TfrmExpertOptions : public TForm
{
__published:	// IDE-managed Components
  TLabel *lblVCLTheme;
  TComboBox *cbxVCLTheme;
  TBitBtn *btnOK;
  TBitBtn *btnCancel;
  TPanel *pnlFudge;
  TLabel *lblNoInfoColour;
  TColorBox *cbxNoInfoColour;
  TColorBox *cbxOkayColour;
  TLabel *lblOKColour;
  TColorBox *cbxInvalidPathColour;
  TLabel *lblInvalidPathColour;
  TColorBox *cbxDuplicateColour;
  TLabel *lblDuplicateColour;
private:	// User declarations
protected:
  void Initialise(TExpertOptions &Options);
  void Finalise(TExpertOptions &Options);
public:		// User declarations
  __fastcall TfrmExpertOptions(TComponent* Owner);
  bool static Execute(TExpertOptions &Options);
};

extern PACKAGE TfrmExpertOptions *frmExpertOptions;
#endif
