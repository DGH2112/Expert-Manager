/**
  
  This module defines global constants for use throughout the application.

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
#include "ExpertManagerGlobals.h"
#pragma package(smart_init)

/** A string constant for the registry location for the applications settings. **/
wchar_t strRegSettings[] = L"Software\\Season's Fall\\Expert Manager\\";
/** A string constant for the registry sub-location for the Experts. **/
wchar_t strExperts[] = L"Experts";
/** A string constant for the registry sub-location for the Disabled Experts. **/
wchar_t strDisabledExperts[] = L"Experts\\Disabled";
/** A string constant for the registry sub-location for the Known IDE Packages. **/
wchar_t strKnownIDEPackages[] = L"Known IDE Packages";
/** A string constant for the registry sub-location for the Known Packages. **/
wchar_t strKnownPackages[] = L"Known Packages";
/** A string constant for the registry location of the applications setup settings. **/
wchar_t strSetup[] = L"Setup";
/** A string constant for the registry key for the left position of the main window. **/
wchar_t strLeft[] = L"Left";
/** A string constant for the registry key for the top position of the main window. **/
wchar_t strTop[] = L"Top";
/** A string constant for the registry key for the width of the main window. **/
wchar_t strWidth[] = L"Width";
/** A string constant for the registry key for the height of the main window. **/
wchar_t strHeight[] = L"Height";
/** A string constant for the registry key for the width of the main divider. **/
wchar_t strDividerWidth[] = L"DividerWidth";
/** A string constant for the registry key for the width of the expert name column. **/
wchar_t strExpertsListWidth[] = L"ExpertsListWidth";
/** A string constant for the registry key for the width of the Known IDE Packages name column. **/
wchar_t strKnownIDEPackagesListWidth[] = L"KnownIDEPackagesListWidth";
/** A string constant for the registry key for the width of the Known Packages name column. **/
wchar_t strKnownPackagesListWidth[] = L"KnownPackagesListWidth";
/** A string constant for the registry key for the focused page. **/
wchar_t strFocusedPage[] = L"FocusedPage";
/** A string constant for the registry key for the selected node. **/
wchar_t strSelectedNode[] = L"SelectedNode";
/** A string constant for the registry key for the no information colour. **/
wchar_t strNoIssueColour[] = L"NoIssueColour";
/** A string constant for the registry key for the okay colour. **/
wchar_t strOkayColour[] = L"OkayColour";
/** A string constant for the registry key for the invalid path colour. **/
wchar_t strInvalidPathColour[] = L"InvalidPathColour";
/** A string constant for the registry key for the duplicate colour. **/
wchar_t strDuplicateColour[] = L"DuplicateColour";
/** A string constant for the registry key for the VCL Theme. **/
wchar_t strVCLTheme[] = L"VCLTheme";
