#include "PatientAccount.h"
#include <iostream>
using namespace std;

PatientAccount::PatientAccount()
{
	name = ""; 
	idNumber = 0;
	charges = 0;
	numberDays = 0;
	dailyRate = 0;
}

PatientAccount::PatientAccount(string name, int idNumber, double dailyRate) {
	this->name = name;
	this->idNumber = idNumber;
	this->charges = 0;
	this->numberDays = 0;
	this->dailyRate = dailyRate; 
}

void PatientAccount::setDailyRate(int dailyRate) {
	this->dailyRate = dailyRate;
}

int PatientAccount::getDailyRate() {
	return dailyRate;
}

void PatientAccount::setDaysInHospital(int numberDays) {
	this->numberDays = numberDays;
}

int PatientAccount::getDaysInHospital() {
	return numberDays;
}

void PatientAccount::setTotalCharges(int charges) {
	this->charges = charges;
}

int PatientAccount::getTotalCharges() {
	return charges;
}

void PatientAccount::setIdNumber(int idNumber) {
	this->idNumber = idNumber;
}

int PatientAccount::getIdNumber() {
	return idNumber;
}

void PatientAccount::setGetName(string name) {
	this->name = name;
}

string PatientAccount::getName() {
	return name;
}

void PatientAccount::print() {
	cout << "Patient's Name: " << name << endl;
	cout << "ID Number: " << idNumber << endl;
}
