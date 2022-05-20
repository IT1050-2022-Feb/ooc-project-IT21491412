//IT21787072_COSTA D.A.S
#include<iostream>
#include<string.h>
#include"agent.h"
using namespace std;
agent::agent(){
}
agent::agent(int AID, char name, char address,char email , int age);

  void agent::viewClaimList() {
 
}
  void agent::manageFAQs() {

}
  void agent::manageFeedbacks() {
}
  void DisplayDetails(int AID) 
{
  cout<<"agent ID:"<<AID <<endl; }
agent::~agent(){
  cout<<"agent deleted" <<endl;
}
