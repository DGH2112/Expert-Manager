#ifndef ExpertManagerProgressFormH
#define ExpertManagerProgressFormH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>

/** A class / form for displaying the progress of searching for experts and package information. **/
class TfrmProgress : public TForm {
__published:
  TProgressBar *ProgressBar;
  TLabel *lblInfo;
  TPanel *pnlEtching;
private:
public:
  __fastcall TfrmProgress(TComponent* Owner);
  void Initialise(const int iMax, const String strText);
  void UpdateProgress(const int iPosition, const String strText);
};

extern PACKAGE TfrmProgress *frmProgress;
#endif
