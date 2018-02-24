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

Pharmacy::Pharmacy(float medc = 0, string medn = " ")
{
	medCost = medc;
	medName = medn;
};

float Pharmacy::getMedCost()
{
	cout << "Please enter the price of the medication: $";
	cin >> medCost;

	return medCost;
}

string Pharmacy::getMedName()
{
	cout << "Please enter the name of the medication: ";
	getline(cin, medName);

	return medName;
}
