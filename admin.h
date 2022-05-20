//IT21572388 - Arampath A.M.S.Y
#include "Manager.h"

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
