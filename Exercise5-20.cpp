// Jarye Murphy
// exercise 5.20 from c++ primer 
/*
Exercise 5.20: Writea program to read a sequence of strings from the standard input
until either the same word occurs twice in succession or all the words have been read.
Use a while loop to read the text one word at a time. Use the break statement to
terminate the loop if a word occurs twice in succession. Print the word if it occurs
twice in succession, or else print a message saying that no word was repeated.
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
		if (word == repeat) // first iter will come up false which is good because we havent had duplicate word
		{
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