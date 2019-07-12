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
#ifndef ExpertEditorFormH
#define ExpertEditorFormH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>

typedef String __fastcall (__closure *TExpandRADStudioMacros)(String strFileName);

/** An enumerate for the different dialogue types: Expert and Package. **/
enum TDlgType {dtExpert, dtPackage};

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
  static bool __fastcall Execute(const TDlgType DlgType, String &strExpertName,
    String &strExpertFileName, TExpandRADStudioMacros ExpandRADStudioMacrosProc);
};

extern PACKAGE TfrmExpertEditor *frmExpertEditor;
#endif
