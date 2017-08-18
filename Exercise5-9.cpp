// Jarye Murphy
// exercise 5.9 from c++ primer 
/*
Exercise 5.9: Write a program using a series of if statements to count the number of
vowels in text read from cin.
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