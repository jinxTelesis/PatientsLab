#pragma once
#include <string>
using namespace std;

class Surgery
{
private:
	int mCharge =0; 
	//string mSurgeryType;
	//string mAmputation; // 1st surgery
	//string mRecapitation; // 2nd surgery
	//string mSexualReassignement; // 3rd surgery
	//string mBiopsy; // 4th surgery
	//string mLivertr; // 5th surgery
	int mAmpCost;
	int mRecapCost;
	int mSrsCost;
	int mBiopCost;
	int mLiverTrCost;
public:
	Surgery(); // added
	Surgery(int Amp, int Recap, int Srs, int Bio, int LiverTr);
	int getAmp();
	void setAmp(int amp);
	int getRecap();
	void setRecap(int recap);
	int getSrs();
	void setSrs(int recap);
	int getBiospy();
	void setBiospy(int bio);
	int getLiverTr();
	void setLiverTr(int liv);

	int picCharge(char charge);
	//float getcost(); 
	//string getsurgerytype(); 
	//void getSurgerydisplay(float& totalcost1); 
};
