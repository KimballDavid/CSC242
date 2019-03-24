#include<iostream>
#include <cmath>

// display final answer to problem
void solveQuadraticEquation(double a, double b, double c, double& discriminant, double r1, double r2)
{
	using std::cout;

	cout << "You have entered " << a << " " << b << " " << c << "\n";
	
	if ( discriminant == 0)
	{
		cout << "Zero Discriminant : Root is " << r1 << "\n";
	}
	else
	{
		cout << "Positive discriminant : Roots are " << r1 << " and " << r2 << "\n";
	}
	
}
 
// calculate discriminant
double calculateDiscr(double dga, double dgb, double dgc)
{
	return  dgb * dgb - 4 * dga*dgc;
}

double checkDiscriminant(double& a, double& b, double& c, double& discriminant)
{
	using std::cout;

	double r1 = 0.0;
	double r2 = 0.0;

	if (discriminant > 0)
	{
		// display 2 roots
		r1 = (-b + sqrt(discriminant)) / (2.0 * a);
		r2 = (-b - sqrt(discriminant)) / (2.0 * a);
	}
	else if (discriminant == 0)
	{
		// display 1 root
		r1 = -b / (2.0*a);
	}
	else  
	{
		cout << "Negative Discriminant : Equation has no real roots\n";
		return -2; // used to end program early
	}

	solveQuadraticEquation(a, b, c, discriminant, r1, r2);

	return -1;
}

// trying to modularize code for input
// can't figure out how to call it correctly
/*void receiveInput(double& a, double& b, double& c)
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
		cout << "a is 0 - there is no solution \n";
		;
	}
	
}*/

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

	// check if a will lead to invalid input
	if (a == 0)
	{
		cout << "a is 0 - there is no solution \n";
		return -1;
	}

	double discriminant = calculateDiscr(a, b, c);
	
	checkDiscriminant(a, b, c, discriminant);


	return 0;
}