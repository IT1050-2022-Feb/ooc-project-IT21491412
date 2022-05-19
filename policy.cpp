#include<iostream>
#include<string.h>
#include"policy.h"
using namespace std;
policy::policy(){
}
policy::policy(int PID, char Ptype, double Pprice,char Pperiod);

  void policy::viewPolicy() {
 
}
  void policy::addPolicy() {

}
  void policy::updatePolicy() {
}
  void policy::deletePolicy() {
    
}
  void DisplayPolicyDetails(int PID,char Ptype,double Pprice,char Pperiod) 
{
  cout<<"policy ID:"<<PID <<endl;
  cout<<"policy type:"<<Ptype <<endl;
  cout<<"policy price:"<<Pprice <<endl;
  cout<<"policy period:"<<Pperiod <<endl;
}
policy::~policy(){
  cout<<"policy deleted" <<endl;
}
