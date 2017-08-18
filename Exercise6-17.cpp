// Jarye Murphy
// exercise 6.17 from c++ primer 
/*
Exercise 6.17: Write a function to determine whether a string contains any capital
letters. Write a function to change a string to all lowercase. Do the parameters you
used in these functions have the same type? If so, why? If not, why not?
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
bool hasCapitalLetters(const string &s)
{
	for (auto it = s.begin(); it != s.end(); ++it)
	{
		if (isupper(*it) == 1)
		{
			return true;
		}
	}
	return false;
}
void allLowerCase(string &s)
{
	for (auto it = s.begin(); it != s.end(); ++it)
	{
		if (isupper(*it) == 1)
		{
			*it = tolower(*it);
		}
	}
}
int main()
{	
	cout << "Enter a string and I will tell you if it has capital letters: " << std::endl;
	string res;
	getline(cin, res);
	if (hasCapitalLetters(res) == true)
	{
		cout << "the string: " << res << " has capital letters in it" << std::endl;
	}
	else
	{
		cout << "the string: " << res << " doesnt have capital letters in it" << std::endl;
	}
	allLowerCase(res);
	cout << "all lowercase now: " << res << std::endl;
	system("Pause");
	return 0;
}