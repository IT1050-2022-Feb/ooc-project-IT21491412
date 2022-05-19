#include<registeredUser.h>
#include<claim.h>
#include<feedback.h>

class agent
{
private:
  int AID;
  int telNo;
public:
  agent();
  agent(char name[],char address[],char email[],int age);
  virtual void displayDetails();
  void viewClaimList();
  void manageFAQs();
  void manageFeedbacks(); 
~agent();
};
