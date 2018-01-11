#ifndef ExpertMgrMainFormH
#define ExpertMgrMainFormH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "Registry.hpp"
#include <System.Actions.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnPopup.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <ExpandedNodeManager.h>
#include <memory>

/**
  This is an enumerate to define the state of the tree nodes as follows:
    evNone         Denotes a standard tree node which does not represent an expert
                   instance.
    evOkay         A node for an expert instance that has all valid entries.
    evInvalidPath  A node for an expert instance that has invalid paths / filenames.
    evDuplication  A node for an expert instance that has duplicate filenames (not paths).
**/
enum TExpertValidation {evNone, evOkay, evInvalidPaths, evDuplication};

/** This is a type to represent a set of expert validation enumerates. **/
typedef Set<TExpertValidation, evNone, evDuplication> TExpertValidations;

/** A class to represent a form for displaying the expert installations in a treeview. **/
class TfrmExpertManager : public TForm
{
__published: // IDE-managed Components
  TTreeView *tvExpertInstallations;
  TSplitter *splMain;
  TListView *lvInstalledExperts;
  TActionManager *amActions;
  TActionToolBar *atbrExperts;
  TAction *actAddExpert;
  TAction *actEditExpert;
  TAction *actDeleteExpert;
  TImageList *ilImages;
  TPopupActionBar *pabContextMenu;
  TMenuItem *Add1;
  TMenuItem *Edit1;
  TMenuItem *Delete1;
  TAction *actFileExit;
  TPageControl *pagPages;
  TTabSheet *tabExperts;
  TTabSheet *tabKnownIDEPackages;
  TTabSheet *tabKnownPackages;
  TActionToolBar *atbrKnownPackages;
  TActionToolBar *atbrKnownIDEPackages;
  TListView *lvKnownPackages;
  TListView *lvKnownIDEPackages;
  TAction *actAddKnownIDEPackage;
  TAction *actEditKnownIDEPackage;
  TAction *actDeleteKnownIDEPackage;
  TAction *actAddKnownPackage;
  TAction *actEditKnownPackages;
  TAction *actDeleteKnownPackages;
  void __fastcall FormCreate(TObject *Sender);
  void __fastcall FormDestroy(TObject *Sender);
  void __fastcall FormShow(TObject *Sender);
  void __fastcall tvExpertInstallationsAdvancedCustomDrawItem(TCustomTreeView *Sender, TTreeNode *Node,
          TCustomDrawState State, TCustomDrawStage Stage, bool &PaintImages, bool &DefaultDraw);
  void __fastcall tvExpertInstallationsChange(TObject *Sender, TTreeNode *Node);
  void __fastcall lvInstalledExpertsAdvancedCustomDrawItem(TCustomListView *Sender, TListItem *Item,
          TCustomDrawState State, TCustomDrawStage Stage, bool &DefaultDraw);
  void __fastcall lvInstalledExpertsDblClick(TObject *Sender);
  void __fastcall actAddExpertExecute(TObject *Sender);
  void __fastcall actEditExpertExecute(TObject *Sender);
  void __fastcall actDeleteExpertExecute(TObject *Sender);
  void __fastcall actActionExpertUpdate(TObject *Sender);
  void __fastcall actAddExpertUpdate(TObject *Sender);
  void __fastcall actFileExitExecute(TObject *Sender);
  void __fastcall lvInstalledExpertsItemChecked(TObject *Sender, TListItem *Item);
  void __fastcall lvKnownIDEPackagesItemChecked(TObject *Sender, TListItem *Item);
  void __fastcall lvKnownPackagesItemChecked(TObject *Sender, TListItem *Item);
private:     // User declarations
  std::unique_ptr<TExpandedNodeManager> FExpandedNodeManager;
  std::unique_ptr<TStringList>          FCurrentRADStudioMacros;
  bool                                  FUpdatingListView;
  String                                FSelectedNodePath;
  String                                FLastExpertViewName;
  String                                FLastKnownIDEPackagesViewName;
  String                                FLastKnownPackagesViewName;
  void __fastcall LoadSettings();
  void __fastcall SaveSettings();
  void __fastcall IterateExpertInstallations();
  void __fastcall IterateSubInstallations(TTreeNode *Node, String strRootInstallation);
  void __fastcall IterateVersions(TTreeNode *Node, String strSubSection);
  TExpertValidation __fastcall CheckExperts(TTreeNode *Node, String strSubSection);
  TExpertValidation __fastcall CheckPackages(TTreeNode* Node, String strSubSection, String strPackage);
  TExpertValidation __fastcall GetHighestValidation(TTreeNode* Node);
  String __fastcall GetRegPathToNode(TTreeNode* Node);
  void __fastcall UpdateTreeViewStatus(TTreeNode* Node, const bool boolShow);
  bool __fastcall IsViewableNode(TTreeNode* Node);
  void __fastcall GetExpandedNodes(TTreeNode* Node);
  void __fastcall SetExpandedNodes(TTreeNode* Node);
  void __fastcall GetCurrentRADStudioMacros(String strRegPathToRADStudioRoot);
  String __fastcall ExpandRADStudioMacros(String strFullFileName);
  void __fastcall AddRADStudioMacro(String strMacro, String strValue);
  void __fastcall GetVersionAndBuild();
  void __fastcall AddExpertsToList(TListView* lvList, String strSubSection, String strKey,
    bool boolEnabled, TStringList* slDups);
  void __fastcall AddPackagesToList(TListView* lvList, String strSubSection, String strKey);
  void __fastcall ShowExperts(TTreeNode *Node);
  void __fastcall SelectTreeViewNode(const String strSelectedPath);
  void __fastcall GetPackageList(TStringList* slPackages, const String strSubSection,
    const String strKey);
  void __fastcall RenderPackageList(TListView* lvList, TStringList* slPackages,
    String &strLastViewName, const String strViewName);
  void __fastcall GetCurrentPosition(TListView* lvList, String &strLastViewName,
    const String strViewName, int &iSelected);
  void __fastcall SetCurrentPosition(TListView* lvList, int &iSelected);
public:      // User declarations
  __fastcall TfrmExpertManager(TComponent* Owner);
};

extern PACKAGE TfrmExpertManager *frmExpertManager;

#endif
