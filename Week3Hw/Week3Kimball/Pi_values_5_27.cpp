#include<iostream>
#include<cmath>

double calculatePi()
{
	using std::cout; 
	int increment = 10000; // set increment to increase limit
	while (increment <= 100000) // set overall limit for code
	{
		double subSum = 0.0;
		for (int i = 1; i < increment; i++) // run through formula from 1 to increment
		{
			double expo = i + 1; // power of numerator
			double numerator = pow(-1, expo); // calculate numerator
			double denominator = (2 * i) - 1; // deteremine denominator
			subSum += numerator / denominator; // find value of function
		}
		double Pi = 0.0;
		Pi = 4 * subSum; // calculate Pi
		cout << increment << "\t";
		cout << Pi << "\n"; // display values
		increment += 10000; // adjust increment for other specified values
	}

	return -1;

}

int main()
{
	
	calculatePi();

	return 0;
}