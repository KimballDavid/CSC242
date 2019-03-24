#include<iostream>
#include<string>

int main()
{
	using std::cout;
	using std::cin;
	using std::string;

	char major; // hold user input
	int status = 0; // hold user input
	string user_major; // hold output
	string user_status; // hold output

	//goto_Spot: // reinstance program doesn't work

	cout << "Enter two charcters: ";
	cin >> major >> status;

	if (major == 'M')
	{
		user_major = "Mathematics";
	}
	if (major == 'C')
	{
		user_major = "Computer Science";
	}
	if (major == 'I')
	{
		user_major = "Information Technology";
	}
	/*else
	{
		goto goto_Spot; // reinstance program doesn't work
	}*/

	switch (status)
	{
	case 1: user_status = ", Freshman"; /*cout << user_major << user_status;*/ break;
	case 2: user_status = ", Sophmore"; /*cout << user_major << user_status;*/ break;
	case 3: user_status = ", Junior"; /*cout << user_major << user_status;*/  break;
	case 4: user_status = ", Senior"; /*cout << user_major << user_status;*/ break;
	}
	/*if (status > 4)
	{
		goto goto_Spot; // reinstance program doesn't work
	}*/

	cout << user_major << user_status;

	return 0;
}