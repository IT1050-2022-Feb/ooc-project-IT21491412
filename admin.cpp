//IT21572388 - Arampath A.M.S.Y

#include<iostream>
#include<string.h>
#include "admin.h"
using namespace std;

Admin::Admin(){
  
}
Admin::Admin(const char  A_ID ){
  strcpy(AdmId , A_ID);
}

void Admin::HandleDataBase(){
  
}
void Admin::UpdateSystem(){
  
}
void Admin::DisplayDeatils()
{
  cout << "Admin ID : " << AdmID << endl;
  Manager::DisplayDeatils();
}
