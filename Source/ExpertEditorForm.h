#ifndef ExpertEditorFormH
#define ExpertEditorFormH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>

typedef String __fastcall (__closure *TExpandRADStudioMacros)(String strFileName);

/** This class represents a form for editing expert installations. **/
class TfrmExpertEditor : public TForm {
__published:// IDE-managed Components
  TLabel *lblExpertKey;
  TEdit *edtExpertName;
  TLabel *lblExpertFileName;
  TEdit *edtExpertFileName;
  TBitBtn *btnOK;
  TBitBtn *btnCancel;
  TBitBtn *btnBrowse;
  TOpenDialog *dlgOpen;
  void __fastcall btnBrowseClick(TObject *Sender);
  void __fastcall btnOKClick(TObject *Sender);
private:    // User declarations
  TExpandRADStudioMacros FExpandRADStudioMacros;
public:     // User declarations
  __fastcall TfrmExpertEditor(TComponent* Owner);
  static bool __fastcall Execute(String &strExpertName, String &strExpertFileName,
    TExpandRADStudioMacros ExpandRADStudioMacrosProc);
};

extern PACKAGE TfrmExpertEditor *frmExpertEditor;
#endif
