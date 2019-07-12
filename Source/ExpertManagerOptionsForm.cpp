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
#include <vcl.h>
#pragma hdrstop

#include <System.UITypes.hpp>
#include "ExpertManagerOptionsForm.h"

#pragma package(smart_init)
#pragma resource "*.dfm"

TfrmExpertOptions *frmExpertOptions;

/**
  
  This is a constructor for the TfrmExpertOptions form.

  @precon  None.
  @postcon None.
  
**/
__fastcall TfrmExpertOptions::TfrmExpertOptions(TComponent* Owner) : TForm(Owner) { }

/**
  
  This method invokes the dialogue to allow the user to set the VCL Style and colouring options.

  @precon  None.
  @postcon The Options dialogue is displayed in which the user and set the VCL Style and the colouring
           options. Returns true if the dialogue was confirmed.

  @param   Options as a TExprtyOption as a Reference
  @return  a Boolean
  
**/
bool TfrmExpertOptions::Execute(TExpertOptions &Options) {
  //TfrmExpertOptions* F = new TfrmExpertOptions(Application->MainForm);
  std::unique_ptr<TfrmExpertOptions> F( new TfrmExpertOptions(Application->MainForm) );
  F->Initialise(Options);
  if (F->ShowModal() == mrOk) {
    F->Finalise(Options);
    return true;
  } else {
    return false;
  }
};

/**
  
  This method initialises the controls on the form with the information in the Options record.

  @precon  None.
  @postcon The controls on the form are initialised to the vsalues in the given Options record.

  @param   Options as a TExpertOptions as a Reference.
  
**/
void TfrmExpertOptions::Initialise(TExpertOptions &Options) {
  auto ThemeNames = TStyleManager::StyleNames;
  for (auto i = ThemeNames.Low; i < ThemeNames.High; i++) {
    cbxVCLTheme->Items->Add(ThemeNames[i]);
  }
  cbxVCLTheme->ItemIndex = cbxVCLTheme->Items->IndexOf(Options.FVCLTheme);
  cbxNoInfoColour->Selected = Options.FNoneColour;
  cbxOkayColour->Selected = Options.FOkayColour;
  cbxInvalidPathColour->Selected = Options.FInvalidPathColour;
  cbxDuplicateColour->Selected = Options.FDuplicateColour;
};

/**
  
  This method copies the values in the controls on the form to the Options record.

  @precon  None.
  @postcon The given Options record is updated with the values from the controls on the form.

  @param   Options as a TExpertOptions as a Reference.
  
**/
void TfrmExpertOptions::Finalise(TExpertOptions &Options) {
  Options.FVCLTheme = cbxVCLTheme->Text;
  Options.FNoneColour = cbxNoInfoColour->Selected;
  Options.FOkayColour = cbxOkayColour->Selected;
  Options.FInvalidPathColour = cbxInvalidPathColour->Selected;
  Options.FDuplicateColour = cbxDuplicateColour->Selected;
};

