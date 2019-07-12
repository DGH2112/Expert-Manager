/**
  
  This module defines a class to manage whcih nodes in the treeview have been expanded so that
  they can be re-expanded when the application is run.

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
#ifndef ExpandedNodeManagerH
#define ExpandedNodeManagerH

#include <Classes.hpp>
#include <ComCtrls.hpp>
#include <memory>

/** This is a simple class to manage which nodes in the treeview have been expaned so
    that they can be re-expanded when the application is launched. **/
class TExpandedNodeManager {
private:
  std::unique_ptr<TStringList> FExpandedNodes;
protected:
  void __fastcall LoadSettings();
  void __fastcall SaveSettings();
public:
  void __fastcall AddNode(TTreeNode* Node);
  void __fastcall RemoveNode(TTreeNode* Node);
  bool __fastcall IsExpanded(TTreeNode* Node);
  String __fastcall ConvertNodeToPath(TTreeNode* Node);
  TExpandedNodeManager();
  ~TExpandedNodeManager();
};

#endif

