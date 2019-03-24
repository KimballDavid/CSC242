#include<iostream>
#include<cctype>


char whatIschar(const char& dch)
{
	using std::cout;

	if (isdigit(dch))
	{
		cout << "Character is a digit.";
		return -1;
	}
	else if (isupper(dch))
	{
		cout << "Character is uppercase.";
		return -1;
	}
	else if (islower(dch))
	{
		cout << "Character is lowercase.";
		return -1;
	}
	else
	{
		cout << "Character isn't a number or letter.";
		return -1;
	}
	return -1;
}

int main()
{
	using std::cout;
	using std::cin;

	char ch;

	cout << "Enter a character: \n";
	cin >> ch;
	cout << ch << "\n";

	whatIschar(ch);
	
	return 0;
}