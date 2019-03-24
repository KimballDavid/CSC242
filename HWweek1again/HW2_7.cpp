#include <iostream>

using std::cout;
using std::endl;
using std::cin;


//const int min = 60;
//const int hr = 24;
//const int day = 365;

int main()
{
	double mins = 0.0;
	double hrs = 0.0;
	double days = 0.0;
	double year = 0.0;
	cout << "Enter the number of minutes: " << endl;
	cin >> mins; 
	hrs = mins / 60;
	days = hrs / 24;
	year = days / 365;
	cout << mins << " minutes is approximately " << static_cast<int>(year) << " years and " << static_cast<int>(days) % 365 << " days." << endl;
	return 0;
}