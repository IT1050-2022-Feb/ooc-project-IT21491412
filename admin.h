#include "Manager.h"
#include "Report.h"

class Admin: public Manager{
  protected:
    char AdmID;

  public:
    Admin();
    Admin(char A_ID );
    void HandleDataBase();
    void UpdateSystem();
    void DisplayDeatils();
    

}
