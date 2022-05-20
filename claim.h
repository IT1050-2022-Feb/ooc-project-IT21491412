//IT21491412 -Ganepola U.I

#pragma once
class claim {
private:
	char Claim_ID[10];
	int Type;
	char MID[6];
	char AID[6];

public:
	claim();
	claim(const char claimid[], int type);
	void setClaim(const char claimid[], int type, const char mid[], const char aid[]);
	void Review();
	void Approval();
	void DisplayClaimDetails();
	~claim();
};