#include<iostream>
#include <cmath>


double computeDiscr(double dga, double dgb, double dgc)
{
	return  dgb*dgb - 4*dga*dgc;
}


int main()
{
	using std::cout;
	using std::cin;

	// declare variable
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	// prompt user
	cout << "Enter a: ";
	cin >> a;
	cout << "\n";

	cout << "Enter b: ";
	cin >> b;
	cout << "\n";

	cout << "Enter c: ";
	cin >> c;
	cout << "\n";

	if (a == 0)
	{
		cout << "Im sorry a is 0 - there is no solution - goodbye \n";
		return -1;
	}

	// create a temporary 
	// value to hold variable
	double temp_discr = 0.0;

	temp_discr = computeDiscr(a,b,c);

	if (temp_discr > 0)
	{
		// display 2 roots
		double root1 = ( -b + sqrt( temp_discr ) ) / ( 2.0 * a );
		double root2 = ( -b - sqrt( temp_discr ) ) / ( 2.0 * a );

		cout << "Positive Discriminant :" << "\n";
		cout << "First  root is " << root1 << "\n";
		cout << "Second root is " << root2 << "\n";
	}
	else if (temp_discr == 0)
	{
		// display 1 root
		double root = -b / (2.0*a);
		cout << "Zero Discriminant : Root is " << root << "\n";
	}
	else // this covers the case if (temp_discr < 0)
	{
		// display message 
		cout << "Negative Discriminant : Equation has no real roots\n";
	}

	return 0;
}