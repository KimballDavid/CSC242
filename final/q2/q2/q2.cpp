#include<iostream>
#include<iomanip>

double taxDue(double income, char status)
{
	using std::cout;
	double tax = 0.0;
	double taxDue = 0.0;
	// check status and then check income range
	if (status == 'S')
	{
		if (income <= 20000)
		{
			tax = 0.0;
		}
		else if (20000 < income && income <=40000)
		{
			tax = .08;
		}
		else if (40000 < income && income <= 100000)
		{
			tax = .15;
		}
		else 
		{
			tax = .20;
		}
	}
	else if(status == 'M')
	{
		if (income <= 20000)
		{
			tax = 0.0;
		}
		else if (20000 < income && income <= 40000)
		{
			tax = .05;
		}
		else if (40000 < income && income <= 100000)
		{
			tax = .10;
		}
		else
		{
			tax = .15;
		}
	}
	else // for incorrect filing status
	{
		cout << "You have entered an incorrect filing status.";
		return -1;
	}
	
	taxDue = income * tax;
	// return amount
	return taxDue;
}


int main()
{
	using std::cout;
	using std::cin;
	using std::fixed;
	using std::setprecision;
	using std::setw;


	char status = ' ';
	double income = 0.0;
	double tax = 0.0;
	// prompt user for income
	cout << "Enter income: ";
	cin >> income;
	// prompt user for filign status
	cout << "Enter filing status: ";
	cin >> status;
	// call fucntion
	tax = taxDue(income, status);
	cout << setw(9) << fixed << setprecision(2);
	cout << "Your tax is: " << tax;


	return 0;
}