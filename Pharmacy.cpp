#include "Pharmacy.h"

Pharmacy::Pharmacy()
{
	mTylenol = 20;
	mVitaminR = 5000;
	mEstrogen = 2000;
	mRanitidine = 10000;
	mMorphine = 300;
}

Pharmacy::Pharmacy(int Tyl, int Vit, int Est, int Ran, int Mor)
{
	mTylenol = Tyl;
	mVitaminR = Vit;
	mEstrogen = Est;
	mRanitidine = Ran;
	mMorphine = Mor;
}

int Pharmacy::getTyl()
{
	return mTylenol;
}

void Pharmacy::setTyl(int tyl)
{
	if (tyl > 1)
		mTylenol = tyl;
	else
		mTylenol = 1;
}


int Pharmacy::getVit()
{
	return mVitaminR;
}


void Pharmacy::setVit(int vit)
{
	if (vit > 1)
		mVitaminR = vit;
	else
		mVitaminR = 1;
}


int Pharmacy::getEst()
{
	return mEstrogen;
}

void Pharmacy::setEst(int est)
{
	if (est > 1)
		mEstrogen = est;
	else
		mEstrogen = 1;
}


int Pharmacy::getRanit()
{
	return mRanitidine;
}

void Pharmacy::setRanit(int ran)
{
	if (ran > 1)
		mRanitidine = ran;
	else
		mRanitidine = 1;
}

int Pharmacy::getMorp()
{
	return mMorphine;
}

void Pharmacy::setMorp(int mor)
{
	if (mor > 1)
		mMorphine = mor;
	else
		mMorphine = 1;
}

int Pharmacy::picCharge(char c)// t v e r m
{
	char cTemp;
	//int charge;
	cTemp = tolower(c);
	int tempcharge = charge;

	switch (cTemp)
	{
	case 't': charge = mTylenol;
		cout << "You are being charged for Tylenol " << endl;
		charge += tempcharge;
		return charge;

	case 'v': charge = mVitaminR;
		cout << "you're being charged for Vitamin R " << endl;
		charge += tempcharge;
		return charge;

	case 'e': charge = mEstrogen;
		cout << "you're being charged for Estrogen " << endl;
		charge += tempcharge;
		return charge;

	case 'r': charge = mRanitidine;
		cout << "you're being charged for Ranitidine " << endl;
		charge += tempcharge;
		return charge;

	case 'm': charge = mMorphine;
		cout << "you're being charged for Morphine " << endl;
		charge += tempcharge;
		return charge;

	default:
		charge = 1;
		cout << "invalid selection restart program";
		return charge;
	}

}

int Pharmacy::getCharge()
{
	return charge;
}

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

