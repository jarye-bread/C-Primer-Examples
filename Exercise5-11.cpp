// Jarye Murphy
// exercise 5.11 from c++ primer 
/*
Exercise 5.11: Modify our vowel-counting program so that it also counts the number
of blank spaces, tabs, and newlines read.
*/
#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::cin;

int main()
{
	string text;
	int vowelCount = 0;
	int tabsCount = 0;
	int spaceCount = 0;
	int newlineCount = 0;
	while (getline(cin, text))
	{
		// use it iterator to start at begining of the string untill it hits the end of word
		// moving one char at a time through the word
		for (auto it = text.begin(); it != text.end(); ++it)
		{
			// if we have 'a' or 'e' or .... we will increment vowelCount
			// else we do nothing and move to the next letter of the string
			*it = tolower(*it);
			if (*it == ' ') 
			{
				++spaceCount;
			}
			if (*it == '\t')
			{
				++tabsCount;
			}
			if (*it == '\n')
			{
				++newlineCount;
			}
			if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u') 
			{
				++vowelCount;
			}
			else {}
		}
		cout << "vowel count is now: " << vowelCount << " tabs: " << tabsCount
			 << " space: " << spaceCount << " newline: " << newlineCount << std::endl;
	}
	system("Pause");
	return 0;
}