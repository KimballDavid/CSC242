#include<iostream>
#include<cmath>

double mean(const double myList[], int size)
{
	double sum = 0.0;
	// for loop to add up array values
	for (int i = 0; i < size; i++)
	{
		sum += myList[i];
	}
	// divide total array values by nnumber of units in array
	double mean = sum / size;
	// return mean to put in variable for later use
	return mean;
}


// because of how the question is worded I can only pass myList array and size
// so for me to do deviation I need to find the mean twice
// I do this by either calling the mean function inside of the deviation function
// or placing a by having the same code in deviation as mean
// this seems like a waste of resources and space but I am not sure how to clean this up


double deviation(const double myList[], int size)
{
	/*double sum = 0.0;
	// for loop to add up array values
	for (int i = 0; i < size; i++)
	{
		sum += myList[i];
	}
	// divide total array values by nnumber of units in array
	double mean = sum / size;*/

	double mean4Deviation = 0.0;

	mean4Deviation = mean(myList, size);

	double sub_devi = 0.0;
	double deviation = 0.0;
	for (int i = 0; i < size; i++)
	{
		sub_devi += pow((myList[i] - mean4Deviation), 2);
	}
	// calculate deviation
	deviation = sqrt(sub_devi / (size - 1));
	// return deviation to variable
	return deviation;
}


int main()
{
	// namespace used
	using std::cout;
	using std::cin;

	// declare size of array and array name
	const int size = 10;
	double myList[size];

	// prompt for user input
	cout << "Enter 10 numbers\n";

	// obtain user input using for loop to walk through array
	for (int i = 0; i < size; i++)
	{
		cin >> myList[i];
	}

	// initilize variable to hold mean
	double myMean = 0.0;

	// call fucntion and store results
	myMean = mean(myList, size);

	// display mean
	cout << myMean << "\n";

	// initilize variable for deviation
	double myDeviation = 0.0;
	
	// call function to find deviation
	myDeviation = deviation(myList, size);
	
	// display standard deviation
	cout << myDeviation;

	return 0;
}