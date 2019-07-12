/**
  
  This module defines a C++ Builder application to allow a user to install RAD Studio Experts into
  multiple version of RAD Studio.

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
#include <tchar.h>

#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
#ifdef DEBUG
  #pragma comment(lib,"CodeSiteLoggingPkg.lib")
  #pragma link "CodeSiteLogging"
#endif

USEFORM("Source\ExpertManagerProgressForm.cpp", frmProgress);
USEFORM("Source\ExpertEditorForm.cpp", frmExpertEditor);
USEFORM("Source\ExpertMgrMainForm.cpp", frmExpertManager);
USEFORM("Source\ExpertManagerOptionsForm.cpp", frmExpertOptions);

int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
  try
  {
     Application->Initialize();
     Application->MainFormOnTaskBar = true;
     Application->Title = "Expert and Package Manager for Multiple RAD Studio Installations";
     Application->CreateForm(__classid(TfrmExpertManager), &frmExpertManager);
     Application->CreateForm(__classid(TfrmExpertOptions), &frmExpertOptions);
     Application->Run();
  }
  catch (Exception &exception)
  {
     Application->ShowException(&exception);
  }
  catch (...)
  {
     try
     {
       throw Exception("");
     }
     catch (Exception &exception)
     {
       Application->ShowException(&exception);
     }
  }
  return 0;
}

