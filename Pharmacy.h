#include <iostream>
#include <string>
using namespace std;

class Pharmacy
{
private:
	float medCost;
	string medName;

public:
	Pharmacy(float, string);
	float getMedCost();
	string getMedName();
};
