 //IT21491412 -Ganepola U.I
//IT21561252 - Liyanage L.S.T
//IT21572388 - Arampath A.M.S.Y
//IT21787072_COSTA D.A.S
//IT21480218 - Deheragoda D.M.L.M

#include <iostream>
#include<cstring>
#include"claim.h"
#include "Manager.h"
#include "User.h"
#include "Payment.h"
#include "admin.h"
#include "feedback.h"

using namespace std;

int main() {
	claim *claim1 = new claim();
	claim1->setClaim("cl001", 3, "M001", "A001");
	claim1->DisplayClaimDetails();

	delete claim1;

//--------------------------------------------------------------------------
  Manager* M1 = new Manager();

	M1 = new Manager(1000, "Minosha Deheragoda", "minosha2000@gmail.com");

	M1->DisplayDetails();

	cout << endl;

	delete M1;

//------------------------------------------------------------------------
  Registered_User * R1 = new Registered_User();

	R1 = new Registered_User(0001, "Shehan Gunasekara", "No 97, New Road, Kiribathgoda", "shehan2000@gmail.com", 21);

	R1 -> DisplayDetails();

	cout << endl;

	delete R1;

//--------------------------------------------------------------------------  
Feedback *Feedback1 = new Feedback;
  Feedback1 ->setFeedback(877,"In progress");
  Feedback1 ->displayFeebackDetails();

  cout  << endl; 



//------------------------------------------------------------------------

  Payment *Payment1 = new Payment;
  Payment1->Payment("PM456" , "Cash" , 15000);
  Payment1 ->displayPayment();

  cout << endl;

  //------------------------------------------------------------------------

   admin *admin1 = new Payment;
    admin1->Payment("AD456" , "Kamal" , "N0 5 , Temple road , Colombo" , "kamalad@gmail.com" , 36 );
    admin1 ->DisplayDeatils();

  cout << endl;

  
	
}

//---------------------------------------------------------------------------

	agent*agent1=new agent();
	agent*a1=new agent("A001","Kevin");
	
	agent*a2=new agent("A002","Sahan");

agent1->add agent(a1,a2);
delete a1;
delete a2;

agent*a3=new agent("A003","Sadun");
agent*a4=new agent("A004","Kasun");

agent1->add agent(a3,a4);
agent1->displayDetails();

cout << endl;
  


//------------------------------------------------------------------------
  policy *p1= new policy("p001","full","5000","12months");
	visitor *v1 = new visitor("Sadun");
  
	v1-> viewPolicyDetails();
  
	v1-> displayPolicyDetails();

  cout <<endl;

  //------------------------------------------------------------------------
