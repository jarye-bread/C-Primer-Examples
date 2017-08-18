// Jarye Murphy
// exercise 5.19 from c++ primer 
/*
Exercise 5.19: Write a program that uses a do while loop to repetitively request two
strings from the user and report which string is less than the other.
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
void stringSize(string s1, string s2)
{
	cout << "//////////////////////////" << "\n" << std::endl;
	if (s1.size() < s2.size())
	{
		cout << "string 1: " << s1 << " is smaller" << std::endl;
	}
	else if (s2.size() < s1.size())
	{
		cout << "string 2: " << s2 << " is smaller" << std::endl;
	}
	cout << "\n" << "//////////////////////////" << "\n" <<std::endl;
}
int main()
{
	string str1; string str2;
	do
	{
		cout << "enter 2 strings type 'q' to quit" << std::endl;
		cin >> str1 >> str2;
		stringSize(str1, str2);
	} while (str1 != "q" && str2 != "q");
	system("Pause");
	return 0;
}