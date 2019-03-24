#include<iostream>
#include<iomanip>

const int N = 3;

void addMatrix(const double a[][N], const double b[][N], double c[][N]) 
{
	using std::cout;
	using std::setw;
	using std::left;
	cout << "The addition of the matrices is ";

	for (size_t row = 0; row < N; row++)
		for (size_t col = 0; col < N; col++)
			c[row][col] = a[row][col] + b[row][col];
	
	cout << left;
	for (size_t i = 0; i < N; i++)
	{
		cout << "\n";
		for (size_t j = 0; j < N; j++)
		{
			cout << a[i][j] << " ";
		}
		if (i == 1)
			cout << setw(3) << " + ";
		else
			cout << "   ";
		
		for (size_t j = 0; j < N; j++)
		{
			cout << b[i][j] << " ";
		}
		if (i == 1)
			cout << setw(3) << " = ";
		else
			cout << "   ";
		for (size_t j = 0; j < N; j++)
		{
			cout << c[i][j] << " ";
		}
		
		cout << "   ";
	}
	cout << "\n";
}

/*void getMatrix(double matrixA[][N])
{
	using std::cin;
	
	const size_t row = 3;
	const size_t col = 3;


	double matrix[row][col];
	
	for (size_t i = 0; i < row; i++)
		for (size_t j = 0; j < row; j++)
			cin >> matrix[i][j];

	
}*/

int main()
{
	using std::cin;
	using std::cout;
	
	double matrixa[N][N];

	cout << "Enter matrix1: ";

	for (size_t i = 0; i < N; i++)
		for (size_t j = 0; j < N; j++)
			cin >> matrixa[i][j];

	/*for (size_t i = 0; i < N; i++)
	{
		cout << "\n";
		for (size_t j = 0; j < N; j++)
		{
			cout << matrixa[i][j] << "\t";
		}
	}*/
	cout << "\n";

	double matrixb[N][N];

	cout << "Enter matrix2: \n";

	for (size_t i = 0; i < N; i++)
		for (size_t j = 0; j < N; j++)
			cin >> matrixb[i][j];

	/*for (size_t i = 0; i < N; i++)
	{
		cout << "\n";
		for (size_t j = 0; j < N; j++)
		{
			cout << matrixb[i][j] << "\t";
		}
	}*/

	double matrixc[N][N];

	addMatrix(matrixa, matrixb, matrixc);

	return 0;
}