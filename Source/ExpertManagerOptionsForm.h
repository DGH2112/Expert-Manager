/**
  
  This module defines a class which defines a form interface for updating the applications options.

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
