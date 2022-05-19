#pragma once
class Registered_User
{
private:
	int UserID;
	char Name[50];
	char Address[100];
	char Email[100];
	int Age;

public:
	Registered_User();
	Registered_User(int R_ID, const char R_Name[], const char R_Address[], const char R_Email[], int R_Age);
	void DisplayDetails();

	~Registered_User();

};
