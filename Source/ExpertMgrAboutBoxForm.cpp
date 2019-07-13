/**

  This module defines a class which represents the main form for the application which displays a
  treeview of the RAD Studio installations and the Experts, Known Packages and Know IDE Packages
  within each installation.

  @Author  David Hoyle
  @Version 1.0
  @Date    13 Jul 2019

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

  @todo Consider replacing the list veiws and treeview with TVirtualStringTree instances.
  @todo Or instead of the above maintain the lists in the background and sync them with the listview
        so the listviews do not need rendering for each change.

**/
#include <vcl.h>
#include <memory>
#pragma hdrstop

#include "ExpertMgrAboutBoxForm.h"

#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmExpertMgrAboutBox *frmExpertMgrAboutBox;

/**
  
  This is the constructor for the TfrmExpertMgrAboutBox class.

  @precon  None.
  @postcon None.
  
**/
__fastcall TfrmExpertMgrAboutBox::TfrmExpertMgrAboutBox(TComponent* Owner) : TForm(Owner) {}

/**
  
  This method invokes the About Box.

  @precon  None.
  @postcon The About Box is displayed on the form.
  
**/
void TfrmExpertMgrAboutBox::Execute() {
  std::unique_ptr<TfrmExpertMgrAboutBox> F( new TfrmExpertMgrAboutBox( Application->MainForm ));
  F->ShowModal();
}

/**
  
  This method is an on create event hander for the form.

  @precon  None.
  @postcon Updates some of the controls on the form before it is displayed.

  @param   Sender as a TObject
  
**/
void __fastcall TfrmExpertMgrAboutBox::FormCreate(TObject *Sender) {
  TDateTime dtDateTime = 0;
  FileAge(ParamStr(0), dtDateTime);
  lblBuildDate->Caption = L"Build Date: " + FormatDateTime("ddd dd mmm yyyy @ hh:nn", dtDateTime);
  DWORD iVerHandle = NULL;
  String strFileName = ParamStr(0);
  DWORD iVerInfoSize = GetFileVersionInfoSize(ParamStr(0).c_str(), &iVerHandle);
  if (iVerInfoSize) {
    LPSTR VerInfo = new char [iVerInfoSize];
    try {
      if (GetFileVersionInfo(ParamStr(0).c_str(), iVerHandle, iVerInfoSize, VerInfo)) {
        unsigned int iVerValueSize = 0;
        LPBYTE lpBuffer = NULL;
        if (VerQueryValue(VerInfo, TEXT("\\"), (VOID FAR* FAR*)&lpBuffer, &iVerValueSize)) {
          if (iVerValueSize) {
            VS_FIXEDFILEINFO *VerValue = (VS_FIXEDFILEINFO *)lpBuffer;
            int iMajor = VerValue->dwFileVersionMS >> 16;
            int iMinor = VerValue->dwFileVersionMS & 0xFFFF;
            int iBugFix = VerValue->dwFileVersionLS >> 16;
            int iBuild = VerValue->dwFileVersionLS & 0xFFFF;
            String strBugFix = " abcedfghijklmnopqrstuvwxyz";
            #ifdef DEBUG
            String strBuildMsg = "Expert Manager %d.%d%s (DEBUG Build %d.%d.%d.%d)";
            #else
            String strBuildMsg = "Expert Manager %d.%d%s (Build %d.%d.%d.%d)";
            #endif
            lblBuild->Caption = Format(strBuildMsg,
              ARRAYOFCONST((iMajor, iMinor, strBugFix[iBugFix + 1], iMajor, iMinor, iBugFix, iBuild)));
          }
        }
      }
    } __finally {
      delete[] VerInfo;
    }
  }
}

