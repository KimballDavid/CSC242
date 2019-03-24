#include<iostream>
#include<ctime>
#include<cstdlib>

const int size = 5;

void initilizeMatrix(double matrix[][size], const int size)
{
	using std::cout;
	
	srand(time(0));
	
	// initlize matrix with random numbers
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	// print matrix for user 
	for (size_t i = 0; i < size; i++)
	{
		cout << "\n";
		for (size_t j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
	}

	cout << "\n";
	// cycle through matrix
	for (int i = 0; i < size; i++)
	{
		// set largest value to 0 at beginning of every row for comparison
		double highestValue = 0.0;

		for (int j = 0; j < size; j++)
		{
			// statement to check if the matrix index value is larger than current largest value and replace
			if (matrix[i][j] > highestValue)
			{
				highestValue = matrix[i][j];
			}
		}
		// print largest value for each row
		if (highestValue > 0)
			cout << "The largest value in row " << i << " is " << highestValue << "\n";
	}
}

int main()
{

	double matrix[size][size];

	initilizeMatrix(matrix, size);

	return 0;
}