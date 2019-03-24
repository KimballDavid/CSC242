#include<iostream>
#include<string>

int main()
{
	using std::cout;
	using std::cin;
	using std::string;

	string ISBN; // store user input
	int d1, d2, d3, d4, d5, d6, d7, d8, d9;

	cout << "Enter first 9 digits of isbn: \n";
	cin >> ISBN; //get ISBN

	//Alter input into int so we can manipulate it
	d1 = ISBN[0] - '0';
	d2 = ISBN[1] - '0';
	d3 = ISBN[2] - '0';
	d4 = ISBN[3] - '0';
	d5 = ISBN[4] - '0';
	d6 = ISBN[5] - '0';
	d7 = ISBN[6] - '0';
	d8 = ISBN[6] - '0';
	d9 = ISBN[8] - '0';

	//calculate chk_value
	int chk_value = ((d1 * 1) + (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) +
		(d6 * 6) + (d7 * 7) + (d8 * 8) + (d9 * 9)) % 11;

	// determine if check value is ten and replace with X if it does.
	if (chk_value == 10)
	{
		cout <<  "The ISBN-10 is " << ISBN << "X";
	}
	else
	{
		cout << "The ISBN-10 is " << ISBN << chk_value;
	}
	return 0;
}