#include<iostream> 
#include<cstring> 
#include"feedback.h"
using namespace std;


          Feedback::Feedback()
{

}
          void Feedback::setFeedback(int ID, string status)
{
                      feedbackID = ID;
                      fstatus = status;

}
          void Feedback::displayFeedbackDetails()
{
	cout << "ID : " << ID << endl;
	cout << "STATUS : " << status << endl;

}
Feedback::~Feedback (){

  cout <<  "Feedback deleted" << endl;
}
