#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

/*void increase(int x[], int size)
{
	for (int i = 0; i < size; i++)
		x[i]++;

}
void increase(int y)
{
	y++;
}*/

/*void  reverse(const int list[], const int size, int newList[])
{
	for (int i = 0; i < size; i++)
	newList[i] = list[size - 1 - i];

}*/

/*int m(int m[][4], int rowSize = 4)
{
	int sum = 0;
	for (int i = 0; i < rowSize; i++)
	for (int j = 0; j < 4; j++)
	sum += m[i][j];
	return sum;
}*/

/*const int COLUMN_SIZE = 3;

double sum(const double m[][COLUMN_SIZE], int rowSize)
{
	int sum = 0;

	for (int i = 0; i < rowSize; i++)
	sum += m[i][i];
	return sum;
}*/

int ttt(int m[][2])
{
	int v = m[0][0];
	for (int i = 0; i < 2; i++)
	for (int j = 0; j < 2; j++)
	if (v < m[i][j])
	v = m[i][j];
	return v;
}

int m(int list[], int numberOfElements)
{
	int v = list[0];
	for (int i = 1; i < numberOfElements; i++)
	if (v < list[i])
	v = list[i];
	return v;
}

int main()
{
	using std::cout;
	using std::cin;

	/*int list[] = { 1,2,3,4,5,6 };
	for (int i = 1; i < 6; i++)
	list[i] = list[i - 1];

	for (int i = 0; i < 6; i++)
	cout << list[i] << " ";*/
	
	/*int x[] = { 1,2,3,4,5 };
	increase(x, 5);
	int y[] = { 1,2,3,4,5 };
	increase(y[0]);
	cout << x[0] << " " << y[0];*/

	/*int x[3];
	cout << "x[0] is" << x[0];*/

	/*int x[5];
	int i;
	for (i = 0; i < 5; i++)
	x[i] = i;
	cout << x[i] << " ";*/

	/*char city[7] = "Dalles";
	cout << strlen(city);*/

	/*double list[] = { 3.4,2.0,3.5,5.5 };
	cout << list[1];*/

	/*int list[] = { 1,2,3,4,5 };
	int newList[5];

	reverse(list, 5, newList);
	for (int i = 0; i < 5; i++)
		cout << newList[i] << " ";*/

	/*int matrix[4][4] = { {1, 1, 1, 1},{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1} };
	cout << m(matrix, 3) << "\n";*/

	/*bool x[2][4] = { {false,false,false,false},{false,false,false,false} };
	cout << x[0][0];*/

	/*int data[2][2][2] = { {{1,2} , {3,4}} , {{5,6} , {7,8}} };*/

	/*int matrix[4][4] = { {1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15} };
	for (int i = 0; i < 4; i++)
	cout << matrix[i][i] << " ";*/

	/*double m[3][3] = { {1,2,3},{1.5,2.5,3.5},{0.1,0.1,0.1} };
	cout << "\nSum of all elements is " << sum(m, 3) << "\n";*/

	/*int matrix[4][4]= { {1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15} };
	for (int i = 0; i < 4; i++)
		cout << matrix[1][i] << " ";*/

	/*int matrix[5][5][2];
	cout << sizeof(matrix);*/

	/*int matrix[5][5];
	for (int column = 0; column < 5; column++)
	matrix[4][column] = 10;*/

	/*int data[][2][2] = { {{1,2},{3,4}}, {{5,6}, {7,8}} };
	cout << ttt(data[0]) << "\n";*/

	/*int matrix[4][4] = { {1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15} };
	for (int i = 0; i < 4; i++)
		cout << matrix[i][3] << " ";*/

	/*int values[2][4] = { {3,4,5,1},{33,6,1,2} };
	for (int row = 0; row < 2; row++)
	{
		cout << m(values[row], 4) << " ";
	}*/

	/*char charArray[2][2] = { { 'a', 'b' }, {'c','d'} };*/

	/*int data[][2][2] = { {{1,2},{3,4}},{{5,6},{7,8}} };
	cout << data[1][0][0] << "\n";*/

	/*int matrix[4][4] = { {1,2,3,4},{4,5,6,7},{8,9,10,11},{12,13,14,15} };
	for (int i = 0; i < 4; i++)
	cout << matrix[i][1] << " ";*/

	/*int numbers[][] = { {1},{1,2},{1,2,3} };
	sizeof(numbers);*/

	/*int matrix[5][5];
	for (int column = 0; column < 5; column++)
		matrix[4][column] = 10;*/


	return 0;
}