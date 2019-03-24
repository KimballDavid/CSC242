#include<iostream>
//#include<string>
#include<iomanip>


int main()
{
	using std::cout;
	using std::cin;
	using std::setw;
	using std::setfill;
	/*
	using string to find ISBN, have to find first digit if zero is leading

	using std::string;
	using std::to_string;
	string entry = "";
	string final_output = " "
	cin >> entry;
	if ( entry.at(0)=='0')
		final_output = "0" + final_output;
	*/ // for use when changing to string
	

	
	int d1, d2, d3, d4, d5, d6, d7, d8, d9; //digits
	int ISBN = 0; // variable for storing input
	cout << "Enter first 9 digits of isbn: \n";
	cin >> ISBN;
	// get digits
	const int allDigits = ISBN;

	d9 = ISBN % 10; 
	ISBN /= 10; 
	// adjust number for future manipulation
	// use this to get remainder of digits
	d8 = ISBN % 10; 
	ISBN /= 10;
	d7 = ISBN % 10; 
	ISBN /= 10;
	d6 = ISBN % 10; 
	ISBN /= 10;
	d5 = ISBN % 10; 
	ISBN /= 10;
	d4 = ISBN % 10; 
	ISBN /= 10;
	d3 = ISBN % 10; 
	ISBN /= 10;
	d2 = ISBN % 10; 
	ISBN /= 10;
	d1 = ISBN % 10;
	// place all digits in individual variable for calculations

	/*cout << d9 << "\n";
	cout << d8 << "\n";
	cout << d7 << "\n";
	cout << d6 << "\n";
	cout << d5 << "\n";
	cout << d4 << "\n";
	cout << d3 << "\n";
	cout << d2 << "\n";
	cout << d1 << "\n"; troubleshooting math issues*/

	int chk_value = ((d1 * 1) + (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) +
		(d6 * 6) + (d7 * 7) + (d8 * 8) + (d9 * 9)) % 11;

	//int checksum = chk_value % 11;
	cout << chk_value;
	//cout << checksum;
	//if checksum == ten make last digit X, if not ten then put actual digit
	if (chk_value == 10)
	{
		cout << setw(9) << setfill('0') << "The ISBN-10 is " << allDigits << "X";
	}
	else
	{
		cout << "The ISBN-10 is " << setw(9) << setfill('0') << allDigits << chk_value;
	}
	return 0;
}

