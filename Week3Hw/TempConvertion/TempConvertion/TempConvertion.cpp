#include<iostream>
#include<iomanip>

// celsius to fahrenheit convertion
double celsiusToFahrenheit(double celsius)
{
	double fahrenheit = (9.0 / 5) * celsius + 32;
	return fahrenheit;
}

// fahrenheit to celsius convertion
double fahrenheitToCelsius(double fahrenheit)
{
	double celsius = (5.0 / 9) * (fahrenheit - 32);
	return celsius;
}

// function to run loop for calculation and display results
double convertTemp(double celsius, double fahrenheit)
{
	using std::cout;
	using std::fixed;
	using std::setprecision;
	using std::setw;
	using std::left;

	int i = 0;
	while (i < 10) // loop to display values
	{
		cout << setw(9) << fixed << setprecision(1); // formatting output for first set of requirements
		cout << left << celsius << "\t";
		cout << celsiusToFahrenheit(celsius) << "\t\t" << " | ";
		cout << "\t" << fahrenheit << " \t\t";
		cout << setprecision(2) << fahrenheitToCelsius(fahrenheit) << "\n";// formatting output for second set of requirements
		fahrenheit -= 10.0; // adjust numbers
		celsius -= 1.0; // adjust numbers
		i += 1;
	}
	return -1;
}

int main()
{
	using std::cout;
	double celsius = 40.0;
	double fahrenheit = 120.0;
	// display top banner
	cout << "celsius" << "\t\t" << "fahrenheit" << "\t" << " | " << "\t" << "fahrenheit" << " \t" << "celsius \n";
	convertTemp(celsius, fahrenheit); // call functions

	return 0;
}