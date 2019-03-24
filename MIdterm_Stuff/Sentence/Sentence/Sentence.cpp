#include<iostream>
#include<string>
#include<cctype>

using std::cout;
using std::cin;
using std::string; // had to make global for function
/*double wordCount(const string& dsentence)
{
	
}*/


int main()
{
	using std::getline;
	using std::cout;
	using std::cin;
	/*using std::string; commented out for function*/

	string sentence;
	//prompt user for sentence
	cout << "Enter a sentence\n";
	getline(cin, sentence);
	//display sentence
	cout << sentence;
	//get length of string
	double length = sentence.length();
	cout << "\n" << length;

	//use whitespace to count words



	double sub_length = length - 2;// used to print out second to last character
	// was confused on this part so gave you both
	cout << "\n second to last character with class function: " << sentence.at(sub_length); //string at class function
	cout << "\n second to last character with subscript: " << sentence[sub_length]; // subscript operator

	return 0;
}