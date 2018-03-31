#pragma hdrstop

#include "ExpertManagerProgressMgr.h"
#pragma package(smart_init)

/**

  This is the classes constructor.

  @precon  None.
  @postcon Creates an instance of the progress form and adds it to the owner list of the main form for
           disposal.

**/
TEMProgressMgr::TEMProgressMgr() {
  frm = new TfrmProgress(Application->MainForm);
}

/**

  This method dislpays the progress, setting the number of progress steps and an initial message.

  @precon  None.
  @postcon The progress is displayed.


  @param   iSteps as an int as a constant
  @param   strInitMsg as a String as a constant

**/
void TEMProgressMgr::Show(const int iSteps, const String strInitMsg) {
  FSteps = iSteps;
  frm->Initialise(FTotal, strInitMsg);
  frm->Show();
};

/**

  This method updates the progress.

  @precon  None.
  @postcon The progress is updated.

  @param   dblStep as a double as a constant
  @param   dblPosition as a double as a constant
  @param   dblMax as a double as a constant
  @param   strMsg as a String as a constant

**/
void TEMProgressMgr::Update(const double dblStep, const double dblPosition, const double dblMax,
  const String strMsg) {
  double dblProgress = FTotal * (
    (dblStep - 1) / FSteps +              // Step
    (dblPosition / dblMax / FSteps)       // Progress within Step
  );
  frm->UpdateProgress(dblProgress, strMsg);
};

/**

  This method hides the progress.

  @precon  None.
  @postcon The progress is hidden.

**/
void TEMProgressMgr::Hide() {
  frm->Hide();
};
