
#include <iostream>
#include<cstring>
#include"claim.h"
#include "Manager.h"
#include "User.h"
#include "Payment.h"
#include "admin.h"

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

  cout << endl;



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

  
	return 0;
}

