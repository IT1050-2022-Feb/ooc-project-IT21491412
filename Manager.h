//IT21480218 - Deheragoda D.M.L.M

#pragma once
class Manager
{
private:
	int Manager_ID;
	char Name[100];
	char Email[100];

public:
	Manager();
	Manager(int M_ID, const char M_Name[], const char M_Email[]);
	void DisplayDetails();
	void Add_Agent();
	void Remove_Agent();
	void Add_policy();
	void Remove_policy();
	void Approve_claim();
	void view_report();

	~Manager();
};
