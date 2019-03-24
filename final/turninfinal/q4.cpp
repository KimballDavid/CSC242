#include<iostream>
#include<cctype>
// determine if there is an even number in array
int arrayEvenIndex(const int array[], int size)
{
	using std::cout;

	int evenIndex = 0;
	int evenValue = 0;

	for (int i = 0; i < size; i++)
	{
		if(array[i] % 2 == 0 && array[i] > evenValue)
		{
			evenValue = array[i];
			evenIndex = i;
		}
		
	}
	return evenIndex;
}

int main()
{
	using std::cin;
	using std::cout;

	const int size = 10;
	int array[size];

	int largestEvenNumber = 0;
	// prompt users for array values
	cout << "Enter an array of numbers: ";
	// place values in array
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	largestEvenNumber = arrayEvenIndex(array, size);
	cout << "The largest even number in the arrray is index number " << largestEvenNumber;

	return 0;
}