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
#pragma hdrstop

#include "ExpandedNodeManager.h"
#include <Registry.hpp>
#include <ExpertManagerGlobals.h>
#include "ExpertManagerTypes.h"

#pragma package(smart_init)

/**

  This is a constructor for the expanded node manager class.

  @precon  None.
  @postcon Creates memeory for an internal strings to store the node paths and then
           loads the saved paths.

**/
TExpandedNodeManager::TExpandedNodeManager() {
  FExpandedNodes = std::unique_ptr<TStringList>( new TStringList() );
  LoadSettings();
}

/**

  This is a destructor for the expaned node manager class.

  @precon  None.
  @postcon Saves the paths in the string list and then frees the memory used by the string
           list.

**/
TExpandedNodeManager::~TExpandedNodeManager() {
  SaveSettings();
}

/**

  This method loads the expanded nodes from the registry.

  @precon  None.
  @postcon The expanded nodes in the registry are loaded into the internal string list.

**/
void __fastcall TExpandedNodeManager::LoadSettings() {
  std::unique_ptr<TRegistryINIFileCls> iniFile( new TRegistryINIFileCls(strRegSettings) );
  std::unique_ptr<TStringList> sl( new TStringList() );
  iniFile->ReadSection("ExpandedNodes", sl.get());
  FExpandedNodes->Assign(sl.get());
}

/**

  This method saves the expanded nodes to the registry.

  @precon  None.
  @postcon The expanded nodes in the internal string list are saved to the registry.

**/
void __fastcall TExpandedNodeManager::SaveSettings() {
  std::unique_ptr<TRegistryINIFileCls> iniFile( new TRegistryINIFileCls(strRegSettings) );
  iniFile->EraseSection("ExpandedNodes");
  for (int i = 0; i < FExpandedNodes->Count; i++) {
    iniFile->WriteString("ExpandedNodes", FExpandedNodes->Strings[i], "");
  }
}

/**

  This method adds the path to the passed node to the list of expanded nodes.

  @precon  Node must be a valid instance.
  @postcon The path to the passed node is added to the string list.

  @param   Node as a TTreeNode

**/
void __fastcall TExpandedNodeManager::AddNode(TTreeNode* Node) {
  String strPath = ConvertNodeToPath(Node);
  if (strPath.Length() != 0)
    FExpandedNodes->Add(strPath);
}

/**

  This method moves the path to the passed node from the list of expanded nodes.

  @precon  Node must be a valid instance.
  @postcon The path to the passed node is removed from the string list.

  @param   Node as a TTreeNode

**/
void __fastcall TExpandedNodeManager::RemoveNode(TTreeNode* Node) {
  String strPath = ConvertNodeToPath(Node);
  if (strPath.Length() != 0) {
    int iIndex = FExpandedNodes->IndexOf(strPath);
    if (iIndex != -1)
      FExpandedNodes->Delete(iIndex);
  }
}

/**

  This method converts the given node to a string representation of its path to its root.

  @precon  Node must be a valid instance.
  @postcon A path is returned by transering the nodes parent back to the root and converts
           this into a string representation.

  @paramm  Node as a TTreeNode
  @return  a String

**/
String __fastcall TExpandedNodeManager::ConvertNodeToPath(TTreeNode* Node) {
  if (Node != NULL) {
    String strPath = "";
    while (Node != NULL) {
      if (strPath.Length() != 0)
        strPath = "\\" + strPath;
      strPath = Node->Text + strPath;
      Node = Node->Parent;
    }
    return strPath;
  } else
    return "";
}

/**

  This method determines whether the passed node is in the list of expanded nodes and
  returns true if so else false.

  @precon  Node must be a valid instance.
  @postcon True is returned if the given node is in the expanded node list else returns
           false.

  @param   Node as a TTreeNode
  @return  a bool

**/
bool __fastcall TExpandedNodeManager::IsExpanded(TTreeNode* Node) {
  String strPath = ConvertNodeToPath(Node);
  return FExpandedNodes->IndexOf(strPath) != -1;
}
