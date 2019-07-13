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
#ifndef ExpertMgrAboutBoxFormH
#define ExpertMgrAboutBoxFormH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>

class TfrmExpertMgrAboutBox : public TForm
{
__published:	// IDE-managed Components
  TLabel *lblExpertMgr;
  TLabel *lblAuthor;
  TLabel *lblBuild;
  TLabel *lblBuildDate;
  TMemo *lblInformation;
  TPanel *pnlFudge;
  TPanel *pnlButtons;
  TBitBtn *btnOK;
  void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
  __fastcall TfrmExpertMgrAboutBox(TComponent* Owner);
  static void Execute();
};

extern PACKAGE TfrmExpertMgrAboutBox *frmExpertMgrAboutBox;
#endif
