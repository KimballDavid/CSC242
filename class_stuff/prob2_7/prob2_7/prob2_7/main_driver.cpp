#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	unsigned int mins = 0.0;

	cout << "Enter minutes :";

	cin >> mins;

	double hours = mins / 60.0;

	double days = hours / 24.0;

	double yrs = days / 365.0;

	cout << mins << " minutes is " << static_cast<int>(yrs) << " and " 
		 << static_cast<int>(days) % 365 << "days" << endl;

	return 0;
}