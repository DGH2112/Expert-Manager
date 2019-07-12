/**
  
  This module defines simple types for use throughout the application.

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
#ifndef ExpertManagerTypesH
#define ExpertManagerTypesH

#include <Vcl.Graphics.hpp>
#include <Registry.hpp>
#include <memory>

/** A mapping for different implementation of registry ini files. **/
typedef TRegIniFile TRegistryINIFileCls;
/** A simplified type for a unique_ptr encapsulated TRegistryINIFileCls. **/
typedef std::unique_ptr<TRegistryINIFileCls> TUPIniFile;
/** A simplified type for a unique_ptr encapsulated TStringList. **/
typedef std::unique_ptr<TStringList> TUPStrList;

/** A record to hold our options so they can be passed tot he options dialogue. **/
struct TExpertOptions {
  TColor                                FNoneColour        = (TColor)clRed;
  TColor                                FOkayColour        = (TColor)clGreen;
  TColor                                FInvalidPathColour = (TColor)clGray;
  TColor                                FDuplicateColour   = (TColor)clMaroon;
  String                                FVCLTheme          = L"Windows";
};

#endif
