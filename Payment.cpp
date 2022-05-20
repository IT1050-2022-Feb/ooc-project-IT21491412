//IT21572388 - Arampath A.M.S.Y

#include<iostream>
#include<string.h>
#include "Payment.h"

using namespace std;

 Payment::Payment(){
    strcpy(payID,"");
    strcpy(Payment_method,"");
    amount = 0;
 }
 Payment::Payment(const char P_ID[] ,const char P_method[] , double P_amount){
 strcpy(payID,P_ID[]);
 strcpy(Payment_method,P_method);
 amount = P_amount;
}

void Payment::displayPayment(){
  cout << "Payment ID : " << payID << endl;
  cout << "Payment method : " <<Payment_method << endl;
  cout << "Amount : " << amount << endl;
}

Payment::~Payment()
{
  cout << "Deleting payment" << endl;
}