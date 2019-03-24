#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	//variables
	const double rate1 = 3.5;
	const double rate2 = 5.5;
	const double rate3 = 8.5;
	const double rate4 = 10.5;
	double weight = 0.0;
	double shippingCost = 0.0;
	cout << "Enter a weight in pounds " << endl;
	cin >> weight;
	if (weight > 50)
	{
		cout << "This package cannot be shipped" << endl;
		return -1;
	}
	else
	{
		if (weight > 10 && weight <= 20)
		{
			shippingCost = rate4;
			cout << shippingCost;
		}
		else if (weight > 3 && weight <= 10)
		{
			shippingCost = rate3;
			cout << shippingCost;
		}
		else if (weight > 1 && weight <= 3)
		{
			shippingCost = rate2;
			cout << shippingCost;
		}
		else if (weight > 0 && weight <= 1)
		{
			shippingCost = rate1;
			cout << shippingCost;
		}
	}
	return 0;
}