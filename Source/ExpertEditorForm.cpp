/**
  
  This module defines a class which represents a form for the user to edit the name and location
  of an expert.

  @Author  David Hoyle
  @Version 1.0
  @Date    12 Jul 2019

  @license

    Expert Manager - a C++ Builder application for managing RAD Studio Experts (DLL and Packages)
    in multiple version of RAD Studio.
    
    Copyright (C) 2019  David Hoyle (https://github.com/DGH2112/Expert-Manager)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

**/
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

  @param   DlgType               as a TDlgType
  @param   strExpertName         as a String as a Reference
  @param   strExpertFileName     as a String as a Reference
  @param   ExpandRADSTudioMacros as a TExpandRADStudioMacros
  @return  a bool

**/
bool __fastcall TfrmExpertEditor::Execute(const TDlgType DlgType, String &strExpertName,
  String &strExpertFileName, TExpandRADStudioMacros ExpandRADStudioMacrosProc) {
  bool boolResult = false;
  std::unique_ptr<TfrmExpertEditor> frm( new TfrmExpertEditor(Application->MainForm) );
  switch (DlgType) {
    case dtExpert:
      frm->Caption = L"Expert Editor";
      frm->lblExpertKey->Caption = L"Expert &Name";
      frm->lblExpertFileName->Caption = L"Expert &Filename";
      frm->btnBrowse->Caption = L"&Browse for Expert";
      frm->dlgOpen->Filter = L"Expert DLLs (*.dll)|*.dll";
      break;
    case dtPackage:
      frm->Caption = L"Package Editor";
      frm->lblExpertKey->Caption = L"Package &Name";
      frm->lblExpertFileName->Caption = L"Package &Filename";
      frm->btnBrowse->Caption = L"&Browse for Package";
      frm->dlgOpen->Filter = L"Package BPLs (*.bpl)|*.bpl";
      break;
  }
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

