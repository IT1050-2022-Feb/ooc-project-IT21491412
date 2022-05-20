//IT21787072_COSTA D.A.S
#include<visitor.h>
#include<registeredUser.h>
#include<payment.h>
#include<manager.h>
class policy
  {
private:
  char policyID;
  char type;
  double price;
  char period;
public:
  policy();
  policy(char policyID[],char type[],double price[],char 
  period[]);
  void viewPolicy();
  void addPolicy();
  void updatePolicy();
  void deletePolicy();
  void DisplayPolicyDetails();
  ~policy();
  };
