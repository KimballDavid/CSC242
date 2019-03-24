#include<iostream>
#include<string>



int main()
{
	using std::cout;
	using std::cin;
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


	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10; //digits
	int ISBN = 0; // variable for storing input
	cout << "Enter first 9 digits of isbn: \n";
	cin >> ISBN;
	// get digits

	d9 = ISBN % 10; ISBN / 10; // adjust number for future manipulation
	// use this to get remainder of digits
	d8 = ISBN % 10; ISBN / 10;
	d7 = ISBN % 10; ISBN / 10;
	d6 = ISBN % 10; ISBN / 10;
	d5 = ISBN % 10; ISBN / 10;
	d4 = ISBN % 10; ISBN / 10;
	d3 = ISBN % 10; ISBN / 10;
	d2 = ISBN % 10; ISBN / 10;
	d1 = ISBN % 10; ISBN / 10;
	// place all digits in individual variable for calculations
	

	int checksum = ((d1 * 1 )+ (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) + 
		(d6 * 6) + (d7 * 7) + (d8 * 8) + (d9 * 9)) % 11;

	//if checksum == ten make last digit X, if not ten then put actual digit


	return 0;
}

