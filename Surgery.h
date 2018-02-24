#pragma once
#include <string>
using namespace std;

class Surgery
{
private:
	float surgerycost; //getters
	string surgerytype; //getters
public:
	Surgery(float, string); // setters
	float getcost(); //setters
	string getsurgerytype(); // setters
	void getsurgerydisplay(float& totalcost1); // setters
};
