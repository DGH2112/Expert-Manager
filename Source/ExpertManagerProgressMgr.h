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
