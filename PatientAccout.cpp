#pragma once
#include <iostream>
#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
#include <string>

using namespace std;

PatientAccount::PatientAccount()
{
	name = "";
	idNumber = 0;
	charges = 0;
	numberDays = 1;
	dailyRate = 1;
}

PatientAccount::PatientAccount(string name, int idNumber, int dailyRate) {
	this->name = name;
	this->idNumber = idNumber;
	this->charges = 0;
	this->numberDays = 1;
	this->dailyRate = dailyRate;
}
/*
PatientAccount(Pharmacy &phar, Surgery &surg, string name, int idNumber, int dailyrate)
{
	this->idNumber = idNumber;
	this->dailyrate = dailyrate;
	this->name = name;
}
*/
/*
PatientAccount::PatientAccount(Surgery &surg, Pharmacy &phar, string name, int idNumber, int dailyrate)
{
	// think on this
}
*/

int PatientAccount::calChargesForStay()
{
	charges = surg.getCharge() + phar.getCharge() + (dailyRate * numberDays);
	return charges;
}

void PatientAccount::setDailyRate(int dailyRate) {
	if (dailyRate > 0)
		this->dailyRate = dailyRate;
	else
		this->dailyRate = 1;
}

int PatientAccount::getDailyRate() {
	return dailyRate;
}

void PatientAccount::setDaysInHospital(int numberDays) {
	if (numberDays > -1)
		this->numberDays = numberDays;
	else
		numberDays = 0;
}

int PatientAccount::getDaysInHospital() {
	return numberDays;
}

void PatientAccount::setTotalCharges(int charges) {
	cout << "override charges for special cases" << endl;
	this->charges = charges;
	cout << "overidden charge is " << this->charges << endl;
}

int PatientAccount::getTotalCharges() {
	return charges;
}

void PatientAccount::setIdNumber(int idNumber) {
	if (idNumber >= 1)
		this->idNumber = idNumber;
	else
		this->idNumber = 1;
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
