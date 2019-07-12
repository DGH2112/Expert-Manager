/**
  
  This module defines a class to managing the display of progress for the application.

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
#pragma hdrstop

#include "ExpertManagerProgressMgr.h"
#pragma package(smart_init)

/**

  This is the classes constructor.

  @precon  None.
  @postcon Creates an instance of the progress form and adds it to the owner list of the main form for
           disposal.

**/
TEMProgressMgr::TEMProgressMgr() {
  frm = new TfrmProgress(Application->MainForm);
}

/**

  This method dislpays the progress, setting the number of progress steps and an initial message.

  @precon  None.
  @postcon The progress is displayed.


  @param   iSteps as an int as a constant
  @param   strInitMsg as a String as a constant

**/
void TEMProgressMgr::Show(const int iSteps, const String strInitMsg) {
  FSteps = iSteps;
  frm->Initialise(FTotal, strInitMsg);
  frm->Show();
};

/**

  This method updates the progress.

  @precon  None.
  @postcon The progress is updated.

  @param   dblStep as a double as a constant
  @param   dblPosition as a double as a constant
  @param   dblMax as a double as a constant
  @param   strMsg as a String as a constant

**/
void TEMProgressMgr::Update(const double dblStep, const double dblPosition, const double dblMax,
  const String strMsg) {
  double dblProgress = FTotal * (
    (dblStep - 1) / FSteps +              // Step
    (dblPosition / dblMax / FSteps)       // Progress within Step
  );
  frm->UpdateProgress(dblProgress, strMsg);
};

/**

  This method hides the progress.

  @precon  None.
  @postcon The progress is hidden.

**/
void TEMProgressMgr::Hide() {
  frm->Hide();
};
