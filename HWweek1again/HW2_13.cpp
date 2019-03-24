#include <iostream>




int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	// for loop exexcution
	double savings = 0.0;
	double savings1 = 0.0;
	double rate = 0.00417;
	double total = 0.0;
	cout << "Enter monthly savings amount ";
	cin >> savings;
	cout << endl;
	for (int a = 0; a < 6; a += 1 )
	{
		savings1 = (1 + rate) * (savings + savings1);
	}
	cout << "After the sixth month, the account valie is " << savings1 << endl;
	return 0;
}