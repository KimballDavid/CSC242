#include<iostream>
#include<iomanip>

int main()
{
	using std::cout;
	using std::setw;
	using std::left;
	using std::fixed;
	//using std::showpoint;
	using std::setprecision;
	
	cout << "Kilograms" << "\t" << "Pounds" << "\t" << " | " << "\t" << "Pounds" << " \t\t" << "Kilograms \n";
	double i = 0.0;
	double kg = 2.2; // kilogram is 2.2 lbs
	int kg_value = 1;
	int lb = 20;

	while (i < 200)
	{
		cout << setw(9) << fixed << setprecision(2);
		cout << left << kg_value << "\t";
		cout << kg * kg_value << "\t" << " | ";
		cout << "\t" << lb << " \t\t";
		cout << lb / kg << "\n";
		kg_value += 2;
		lb += 5;
		i += 2; 
	}

	return 0;
}