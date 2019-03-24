#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using std::ofstream;
	using std::ios;
	using std::string;
	using std::endl;
	using std::cout;

	cout << "Mary had a little \t lamb \n its fleece was as \b\b white as snow";

	// create an output stream file object
	ofstream fileout;
	// name that objects associated file
	fileout.open("c:\\temp\\mydatafile.txt", ios::out);
	string mydata = "Mary";
	fileout << mydata;
	fileout.close();
	fileout.open("c:\\temp\\mydatafile.txt", ios::out | ios::app);
	string mydata2 = " had a little lamb";
	fileout << mydata2 << endl;
	fileout.close();
	return 0;
}
