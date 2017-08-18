// Jarye Murphy
// exercise 5.10 from c++ primer 
/*
Exercise 5.10: There is one problem with our vowel-counting program as we’ve im-
plemented it: It doesn’t count capital letters as vowels. Write a program that counts
both lower- and uppercase letters as the appropriate vowel—that is, your program
should count both ’a’ and ’A’ as part of aCnt, and so forth.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main()
{
	string text;
	int vowelCount = 0;
	while (cin >> text)
	{
		// use it iterator to start at begining of the string untill it hits the end of word
		// moving one char at a time through the word
		for (auto it = text.begin(); it != text.end(); ++it)
		{
			// if we have 'a' or 'e' or .... we will increment vowelCount
			// else we do nothing and move to the next letter of the string
			*it = tolower(*it);
			if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u') 
			{
				++vowelCount;
			}
			else {}
		}
		cout << "vowel count is now: " << vowelCount << std::endl;
	}
	system("Pause");
	return 0;
}