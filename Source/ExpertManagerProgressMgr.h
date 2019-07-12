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
#ifndef ExpertManagerProgressMgrH
#define ExpertManagerProgressMgrH
#include "ExpertManagerProgressForm.h"
#include <Forms.hpp>

/** This class managed the display of progress in the application. **/
class TEMProgressMgr {
  private:
    const double FTotal = 1000000;
    double FSteps = 0;
    TfrmProgress* frm = nullptr;
  protected:
  public:
    TEMProgressMgr();
    ~TEMProgressMgr() {};
    void Show(const int iSteps, const String strInitMsg);
    void Update(const double dblStep, const double dblPosition, const double dblMax, const String strMsg);
    void Hide();
};

#endif
