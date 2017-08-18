// Jarye Murphy
// exercise 5.21 from c++ primer 
/*
Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so that it looks
only for duplicated words that start with an uppercase letter.
*/
#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::cin;

int main()
{
	
	string word;
	string repeat;
	bool invalidRes = false;
	int count = 0;
	while (std::getline(cin , word) ) 
	{
		if (word == repeat && isupper(word[0]) == true) // first iter will come up false which is good because we havent had duplicate word
		{												// word[0] is the first char in string word check to se if uppercase letter
			cout << "repeated word " << word << " ending loop" << std::endl;
			break;
		}
		if (word.empty() == true ) // check to see if nothing is in the word
		{
			cout << "blank word ending input " << std::endl;
			break;
		}
		repeat = word;		// assign repeat word and then next iteration it will check to see the next
							// input if its the same as the string repeat
	}
	
	system("Pause");
	return 0;
}