#include<iostream>

// my understanidn of this question was unclear I did not
// know if you wanted literally 1,2,3...99,100
// or just positive integers between there
// as such I made two function for this part below

// fucntion to initilize array with values 1-100
/*double initilizeArray(double array[], const int size)
{
	double arrayValue = 0.0;

	for (int i = 0; i < size; i++)
	{
		array[i] = i + 1;
		arrayValue = array[i];
	}

	return arrayValue;
}*/

// initilize array with random values between 1-100
double initilizeArray(double array[], const int size)
{
	double arrayValue = 0.0;

	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 100;
		arrayValue = array[i];
	}

	return arrayValue;
}


// function to find array average
double averageArray(double array[], int size)
{

	double sum = 0.0;
	double average = 0.0;

	for (int i = 0; i < size; i++)
		sum += array[i];
	average = sum / size;

	return average;
}

// function to cycle through array units and print value
void printArray(const double array[], int size)
{
	using std::cout;
	
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";

}


int main()
{
	using std::cout;

	// build empty array container and determine size
	// initilize variables used in main()
	const int size = 100;
	double array1[size];
	double avgofArray = 0.0;

	// initilize array
	for (int i = 0; i < size; i++)
	{
		array1[i] = initilizeArray(array1, size);
	}
	
	// get average of array values
	avgofArray = averageArray(array1, size);

	// print array horizontally
	printArray(array1, size);
	
	// print average of array
	cout << "\n The average of the array is: " << avgofArray;

	return 0;
}