#include "User.h"
#include<cstring>
#include<iostream>
using namespace std;

Registered_User::Registered_User()
{
	UserID = 0;
	strcpy(Name, "");
	strcpy(Address, "");
	strcpy(Email, "");
	Age = 0;
}

Registered_User::Registered_User(int R_ID, const char R_Name[], const char R_Address[], const char R_Email[], int R_Age)
{
	UserID = R_ID;
	strcpy(Name, R_Name);
	strcpy(Address, R_Address);
	strcpy(Email, R_Email);
	Age = R_Age;
}

