#include<iostream>
/*
double getHyp(double hxd, double hyd)
{
	//slope = -1 / 2;
	double temp_x = 200 - (hxd * 2);
	double temp_y = 100 - (hyd);
	return temp_x, temp_y;
}*/

int main()
{
	using std::cout;
	using std::cin;
	//using std::endl;

	double user_x = 0.0;
	double user_y = 0.0;

	double Hyp_x = 200 - (user_x * 2);
	double Hyp_y = 100 - user_y;

	cout << "Enter a point's x- and y- coordinates: ";
	cin >> user_x >> user_y;
	cout << "\n";
	//double hyp_xy = getHyp(temp_x, temp_y);


	// determine if in triangle
	//need to make itno fucntion for reusablity
	if (user_x < Hyp_x && user_y < Hyp_y)
	{
		cout << "The point is in the triangle";
		return -1;
	}
	else
	{
		cout << "The point is not in the triangle";
		return -1;
	}
	return 0;
}