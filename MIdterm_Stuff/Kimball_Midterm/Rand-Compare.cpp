#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>


double comparedigits(const double& d1, const double& d2)
{
	using std::cout;

	if (d1 == d2)
	{
		cout << "\n The digits are the same.";
		return -1;
	}
	else
	{
		cout << "\n The digits are different";
		return -1;
	}

}


int main()
{
	using std::cout;
	using std::rand;
	using std::srand;

	srand(time(0));
	double rand_Digit = 0.0;
	double rand_Digit2 = 0.0;
	
	//generate digits
	rand_Digit = 9 + rand() % 90;

	// display integer
	cout << rand_Digit << "\n";
	
	double digit1 = 0.0;
	double digit2 = 0.0;

	//splitting integer into seperate variables to compare
	digit1 = static_cast<int>(rand_Digit) % 10;
	cout << digit1 << "\n";
	rand_Digit2 = rand_Digit / 10;
	digit2 = static_cast<int>(rand_Digit2) % 10;
	cout << digit2;

	// comparing individual digits using function
	comparedigits(digit1, digit2);
	return 0; 
}