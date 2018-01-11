#include <vcl.h>
#pragma hdrstop

#include "ExpertEditorForm.h"
#include <memory>

#pragma package(smart_init)
#pragma resource "*.dfm"

/**

  This is the constructor for the TfrmExpertEditor class.

  @precon  None.
  @postcon None.

**/
__fastcall TfrmExpertEditor::TfrmExpertEditor(TComponent* Owner) : TForm(Owner) {}


/**

  This is the forms main interface method for invoking the form.

  @precon  None.
  @postcon This method displays the editor form and intialises it with the passed values.
           If confirmed the method returns true and the new values are returned in the
           by reference parameters.

  @param   strExpertName         as a String as a Reference
  @param   strExpertFileName     as a String as a Reference
  @param   ExpandRADSTudioMacros as a TExpandRADStudioMacros
  @return  a bool

**/
bool __fastcall TfrmExpertEditor::Execute(String &strExpertName, String &strExpertFileName,
  TExpandRADStudioMacros ExpandRADStudioMacrosProc) {
  bool boolResult = false;
  std::unique_ptr<TfrmExpertEditor> frm( new TfrmExpertEditor(Application->MainForm) );
  frm->edtExpertName->Text = strExpertName;
  frm->edtExpertFileName->Text = strExpertFileName;
  frm->FExpandRADStudioMacros = ExpandRADStudioMacrosProc;
  if (frm->ShowModal() ==  System::Uitypes::mrOk) {
    strExpertName = frm->edtExpertName->Text;
    strExpertFileName = frm->edtExpertFileName->Text;
    boolResult = true;
  }
  return boolResult;
}

/**

  This is an on click event handler for the Browse button.

  @precon  None.
  @postcon Displays a open file dialogue to browse for the DLL.

  @param   Sender as a TObject

**/
void __fastcall TfrmExpertEditor::btnBrowseClick(TObject *Sender) {
  if (dlgOpen->Execute(this->Handle)) {
    edtExpertFileName->Text = dlgOpen->FileName;
    if (edtExpertName->Text == "")
      edtExpertName->Text = ExtractFileName(dlgOpen->FileName);
  }
}

/**

  This is an on click event handler for the OK buttons.

  @precon  None.
  @postcon Validates that the expert name is not null and that the filename is valid.

  @param   Sender as a TObject

**/
void __fastcall TfrmExpertEditor::btnOKClick(TObject *Sender) {
  if (edtExpertName->Text == "") {
    ShowMessage("The Expert Name cannot be NULL!");
    ModalResult = mrNone;
  }
  if (!FileExists(FExpandRADStudioMacros(edtExpertFileName->Text))) {
    ShowMessage("The Expert File Name MUST exist!");
    ModalResult = mrNone;
  }
}

