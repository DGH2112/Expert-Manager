//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>

#ifdef ENABLE_CODESITE
#pragma comment(lib,"CodeSiteLoggingPkg.lib")
#pragma link "CodeSiteLogging"
#endif

//---------------------------------------------------------------------------
USEFORM("Source\ExpertEditorForm.cpp", frmExpertEditor);
USEFORM("Source\ExpertMgrMainForm.cpp", frmExpertManager);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
  try
  {
     Application->Initialize();
     Application->MainFormOnTaskBar = true;
     Application->Title = "Expert and Package Manager for Multiple RAD Studio Installations";
     Application->CreateForm(__classid(TfrmExpertManager), &frmExpertManager);
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
