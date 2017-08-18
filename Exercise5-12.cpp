// Jarye Murphy
// exercise 5.12 from c++ primer 
/*
Exercise 5.12: Modify our vowel-counting program so that it counts the number of
occurrences of the following two-character sequences: ff, fl, and fi.
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
	int ffCount = 0;
	int flCount = 0;
	int fiCount = 0;
	while (getline(cin, text))
	{
		// use it iterator to start at begining of the string untill it hits the end of word
		// moving one char at a time through the word
		for (auto it = text.begin(); it != text.end(); ++it)
		{
			*it = tolower(*it);
			auto nextChar = it; // set nextChar to current iterator it
			if (nextChar+1 != text.end() ) // see if one past nextchar is the end or not dont want to move iterator 
			{							   // out of the bounds	
				++nextChar;
				if (*it == 'f')
				{
					if (*nextChar == 'f')
					{
						++ffCount;
					}
					if (*nextChar == 'l')
					{
						++flCount;
					}
					if (*nextChar == 'i')
					{
						++fiCount;
					}
					else { continue; }
				}
			}
			
			// if we have 'a' or 'e' or .... we will increment vowelCount
			// else we do nothing and move to the next letter of the string
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
			 << " space: " << spaceCount << " newline: " << newlineCount 
			 << " ff: " << ffCount << " fl: " << flCount << " fi: " << fiCount << std::endl;
	}
	system("Pause");
	return 0;
}