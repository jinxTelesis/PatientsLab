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
Surgery::Surgery(float co = 0, string st = " ")
{
surgerycost = co;
surgerytype = st;
}
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
return surgery type;
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
