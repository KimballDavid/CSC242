#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main()
{
	double subtotal = 0.0;
	double gratuity = 0.0;

	cout << "Enter subtotal and a gratuity rate(example: .15): " << endl;
	cin >> subtotal >> gratuity;
	double tip = subtotal * gratuity;
	double total = subtotal + tip;

	cout << "The gratuity is " << tip << " and the total is " << total << endl;
	return 0;
}
