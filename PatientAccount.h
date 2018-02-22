#include <iostream>
#include <string>
//#include "Surgery.h"
//#include "Pharmacy.h"
using namespace std;

class PatientAccount // :public Surgery/Pharmacy
{
public:
	PatientAccount();
	PatientAccount(string name, int idNumber);
	void setIdNumber(int idNumber);
	int getIdNumber();
	void setGetName(string name);
	string getName();
	void setDailyRate( int dailyRate);
	int getDailyRate();
	void setDaysInHospital(int numberDays);
	int getDaysInHospital();
	void setTotalCharges(int charges);
	int getTotalCharges();
	void print();
private:
	string name;
	int idNumber, charges, numberDays;
	double dailyRate;
};
