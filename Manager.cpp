#include "Manager.h"
#include<cstring>
#include<iostream>
using namespace std;

Manager::Manager()
{
	Manager_ID = 0;
	strcpy(Name, "");
	strcpy(Email, "");
}

Manager::Manager(int M_ID, const char M_Name[], const char M_Email[])
{
	Manager_ID = M_ID;
	strcpy(Name, M_Name);
	strcpy(Email, M_Email);
}

void Manager::DisplayDetails()
{
	cout << "Manager ID: " << Manager_ID << endl;
	cout << "Manager Name: " << Name << endl;
	cout << "Manager Email: " << Email << endl;
}

void Add_Agent()
{

}
void Remove_Agent()
{

}
void Add_policy()
{

}
void Remove_policy()
{

}
void Approve_claim()
{

}
void view_report()
{

}

Manager::~Manager()
{
	cout << "Manager Removed" << endl;
}
