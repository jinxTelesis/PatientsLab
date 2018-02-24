

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
