#include "Surgery.h" //
#include <iostream>
#include <ctype.h>

Surgery::Surgery()
{
	//mSurgeryType =""; // remove
	//mAmputation = "Amputation"; // 1st surgery
	//mRecapitation = "hope you enjoyed your Recapitation"; // 2nd surgery
	//mSexualReassignement = "Sexual Reassignement"; // 3rd surgery
	//mBiopsy ="Biopsy"; // 4th surgery
	//mLivertr ="Liver Transplant"; // 5th surgery
	mAmpCost = 1000;
	mRecapCost = 100000;
	mSrsCost = 70000;
	mBiopCost = 300;
	mLiverTrCost = 5000;
}

Surgery::Surgery(int Amp, int Recap, int Srs, int Bio, int LiverTr)
{
	//mSurgeryType = ""; // remove
	//mAmputation = "Amputation"; // 1st surgery
	//mRecapitation = "hope you enjoyed your Recapitation"; // 2nd surgery
	//mSexualReassignement = "Sexual Reassignement"; // 3rd surgery
	//mBiopsy = "Biopsy"; // 4th surgery
	//mLivertr = "Liver Transplant"; // 5th surgery
	mAmpCost = Amp;
	mRecapCost = Recap;
	mSrsCost = Srs;
	mBiopCost = Bio;
	mLiverTrCost = LiverTr;
}

int Surgery::getAmp()
{
	return mAmpCost;
}

int Surgery::getRecap()
{
	return mRecapCost;
}

int Surgery::getSrs()
{
	return mSrsCost;
}

int Surgery::getBiospy()
{
	return mBiopCost;
}

int Surgery::getLiverTr()
{
	return mLiverTrCost;
}

void Surgery::setAmp(int amp) 
{
	if (amp > 1)
		mAmpCost = amp;
	else
		mAmpCost = 1;
}

void Surgery::setRecap(int recap)
{
	if (recap > 0)
		mRecapCost = recap;
	else
		mRecapCost = 1;
}

void Surgery::setSrs(int srs)
{
	if (srs > 0)
		mSrsCost = srs;
	else
		mSrsCost = 1;
}

void Surgery::setBiospy(int bio)
{
	if (bio > 0)
		mBiopCost = bio;
	else
		mBiopCost = 1;
}

void Surgery::setLiverTr(int liv)
{
	if (liv > 0)
		mLiverTrCost = liv;
	else
		mLiverTrCost = 1;
}

int Surgery::picCharge(char c) // a r l b s
{
	char cTemp;
	int charge;
	cTemp = tolower(c);

	switch (cTemp)
	{
	case 'a': charge = mAmpCost;
		return charge;

	case 'r': charge = mRecapCost;
		return charge;

	case 'l': charge = mLiverTrCost;
		return charge;

	case 'b': charge = mBiopCost;
		return charge;

	case 's': charge = mSrsCost;
		return charge;
	default :
		charge = 1;
		cout << "invalid selection restart program";
	}

}

/*
float Surgery::getcost()
{
	cout << "enter cost of surgery: ";
	cin >> surgerycost;
	return surgerycost;
}


std::string Surgery::getsurgerytype() {
	std::cout << "type of surgery: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max());
	std::getline(std::cin, surgerytype);
	return surgerytype;
}
void Surgery::getSurgerydisplay(float& totalcost1) //setters
{
	Surgery patient(getcost(), getsurgerytype());
	totalCost1 = surgerycost;


	cout << "what type of surgery?" << surgerytype << endl;
	cout << "cost of surgery : " << surgerycost << endl;
	cout << "total: " << totalcost1 << endl;
	cout << "\n";
}
*/
