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

