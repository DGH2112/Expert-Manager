#include <vcl.h>
#pragma hdrstop

#include "ExpertManagerProgressForm.h"

#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmProgress *frmProgress;


/**

  This is a constructor for the TfrmProgress form.

  @precon  None.
  @postcon Does nothing.

**/
_fastcall TfrmProgress::TfrmProgress(TComponent* Owner) : TForm(Owner) {}

/**

  This method initialises the progress form.

  @precon  None.
  @postcon The form is initialised.

  @param   iMax as an int as a constant
  @param   strText as a String as a constant

**/
void TfrmProgress::Initialise(const int iMax, const String strText) {
  ProgressBar->Max = iMax;
  lblInfo->Caption = strText;
  Application->ProcessMessages();
};

/**

  This method updates the progress on the form.

  @precon  None.
  @postcon The information text is updated and the position of the progress bar is also updated.

  @param   iPosition as an int as a constant
  @param   strText as a String as a constant

**/
void TfrmProgress::UpdateProgress(const int iPosition, const String strText ) {
  ProgressBar->Position = iPosition + 1;
  ProgressBar->Position = iPosition;     // Workaround for animated progress bar
  lblInfo->Caption = strText;
  Application->ProcessMessages();
};

