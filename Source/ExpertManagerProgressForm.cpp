/**
  
  This module defines a class to display progress for the application.

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

#include "ExpertManagerProgressForm.h"

#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmProgress *frmProgress;


/**

  This is a constructor for the TfrmProgress form.

  @precon  None.
  @postcon Does nothing.

**/
_fastcall TfrmProgress::TfrmProgress(TComponent* Owner) : TForm(Owner) {}

/**

  This method initialises the progress form.

  @precon  None.
  @postcon The form is initialised.

  @param   iMax as an int as a constant
  @param   strText as a String as a constant

**/
void TfrmProgress::Initialise(const int iMax, const String strText) {
  ProgressBar->Max = iMax;
  lblInfo->Caption = strText;
  Application->ProcessMessages();
};

/**

  This method updates the progress on the form.

  @precon  None.
  @postcon The information text is updated and the position of the progress bar is also updated.

  @param   iPosition as an int as a constant
  @param   strText as a String as a constant

**/
void TfrmProgress::UpdateProgress(const int iPosition, const String strText ) {
  ProgressBar->Position = iPosition + 1;
  ProgressBar->Position = iPosition;     // Workaround for animated progress bar
  lblInfo->Caption = strText;
  Application->ProcessMessages();
};

