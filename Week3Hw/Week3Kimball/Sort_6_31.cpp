#include<iostream>
// no elegance sorry
// compare numers
void sort(double& num1, double& num2, double& num3)
{
	using std::cout;

	if (num1 < num2 && num1 < num3) // determine if num1 is smallest
	{
		cout << num1 << " ";
		if (num2 < num3)
		{
			cout << num2 << " " << num3;
		}
		else
		{
			cout << num3 << " " << num2;
		}
	}
	else if (num2 < num1 && num2 < num3) // determine if num2 is smallest
	{
		cout << num2 << " ";
		if (num1 < num3)
		{
			cout << num1 << " " << num3;
		}
		else
		{
			cout << num3 << " " << num1;
		}
	}
	else // num3 is smallest
	{
		cout << num3 << " ";
		if (num1 < num2)
		{
			cout << num1 << " " << num2;
		}
		else
		{
			cout << num2 << " " << num1;
		}
	}
}

int main()
{
	using std::cout;
	using std::cin;

	double num1 = 0.0;
	double num2 = 0.0;
	double num3 = 0.0;

	cout << "Enter 3 numbers: "; // request input from user
	cin >> num1 >> num2 >> num3;

	sort(num1, num2, num3); // call function

	return 0;
}