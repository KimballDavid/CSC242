#include<iostream>
#include<iomanip>

int main()
{
	using std::cout;
	using std::cin;
	using std::showpoint;
	using std::setprecision;

	double cd_Value = 0.0;
	double annual_Yield = 0.0;
	double maturityPeriod = 0;

	// prompt user for amount of money being deposited
	cout << "Enter the initial deposit amount: ";
	cin >> cd_Value;
	cout << "\n";
	// prompt user for amount of annual yield 
	cout << "Enter annual percentage yield: ";
	cin >> annual_Yield;
	cout << "\n";
	// prompt user for amount of annual yield 
	cout << "Enter maturity period (number of months): ";
	cin >> maturityPeriod;
	cout << "\n";

	cout << "Monthly CD value: \n";

	for (int i = 1; i < maturityPeriod + 1; i++)
	{
		double yield = 0.0;
		yield = ((cd_Value * annual_Yield) / 1200);
		
		cd_Value += yield;
		
		
		cout << i << "\t";
		cout << showpoint << setprecision(7) << cd_Value << "\n";
	}

	return 0;
}