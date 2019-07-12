//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>

#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
#ifdef DEBUG
  #pragma comment(lib,"CodeSiteLoggingPkg.lib")
  #pragma link "CodeSiteLogging"
#endif

//---------------------------------------------------------------------------
USEFORM("Source\ExpertManagerProgressForm.cpp", frmProgress);
USEFORM("Source\ExpertEditorForm.cpp", frmExpertEditor);
USEFORM("Source\ExpertMgrMainForm.cpp", frmExpertManager);
USEFORM("Source\ExpertManagerOptionsForm.cpp", frmExpertOptions);
//---------------------------------------------------------------------------
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
//---------------------------------------------------------------------------
