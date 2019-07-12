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
#ifndef ExpertManagerProgressFormH
#define ExpertManagerProgressFormH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>

/** A class / form for displaying the progress of searching for experts and package information. **/
class TfrmProgress : public TForm {
__published:
  TProgressBar *ProgressBar;
  TLabel *lblInfo;
  TPanel *pnlEtching;
private:
public:
  __fastcall TfrmProgress(TComponent* Owner);
  void Initialise(const int iMax, const String strText);
  void UpdateProgress(const int iPosition, const String strText);
};

extern PACKAGE TfrmProgress *frmProgress;
#endif
