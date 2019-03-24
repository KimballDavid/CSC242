#include<iostream>
#include<cmath>
#include<iomanip>


double computeSqrt(const double& dx, const double& dz)
{
	return  (3 * dx) - dz;
}


int main()
{
	using std::cin;
	using std::cout;
	using std::fixed;
	using std::setprecision;
	
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	double temp_Square = 0.0;


	cout << "Enter the x, y, and z: \n";
	cin >> x;
	cout << "\n";
	cin >> y;
	cout << "\n";
	cin >> z;
	cout << "\n";

	temp_Square = computeSqrt(x, z);

	if (temp_Square < 0)
	{
		cout << "Caannot evaulate";
		return -1;
	}
	if (y - z == 0)
	{
		cout << "Cannot Evaluate";
		return -1;
	}
	else
	{
		cout << fixed << setprecision(2) << (sqrt(temp_Square) + (2 * pow(y, 2))) / (y - z);
	}
	return 0;
}