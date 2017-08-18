// Jarye Murphy
// exercise 9.47 from c++ primer 
/*
Exercise 9.47: Write a program that finds each numeric character and then each alpha-
betic character in the string "ab2c3d7R4E6". Write two versions of the program.
The first should use find_first_of, and the second find_first_not_of.
*/
#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::cin;
void findCharFirstOf(const string s, bool b)
{
	string lowerString = s;
	for (auto it = lowerString.begin(); it != lowerString.end(); ++it) // make all the letters in s lowercase since my letters string is lowercase
	{
		*it = tolower(*it);
	}
	string::size_type pos = 0;
	string searchFor, type;
	const string numbers = "0123456789";
	const string letters = "abcdefghijklmnopqrstuvwxyz";
	if (b == true)
	{
		searchFor = numbers;
		type = " numbers ";
	}
	else
	{
		searchFor = letters;
		type = " letters ";
	}
	int i = 0;
	cout << "positions of" << type <<"in the string: " << s << "\n";
	while (i != s.size())
	{
		string word = lowerString.substr(i, s.size());
		pos = word.find_first_of(searchFor);		// find what pos the number is at
		pos += i;								// set positon to += i because i keeps track of how far we are in the string
		if (i < pos)// set i = pos so we dont look for a number we already found but check to see if it less than pos
		{			// if i is greater than pos we dont want to go back a char in a word
			i = pos;
		}
		cout << pos << "\n";
		++i;
	}
}
void findCharFirstNotOf(const string s, bool b)
{
	string lowerString = s;
	for (auto it = lowerString.begin(); it != lowerString.end(); ++it) // make all the letters in s lowercase since my letters string is lowercase
	{
		*it = tolower(*it);
	}
	string::size_type pos = 0;
	string searchFor, type;
	const string numbers = "0123456789";
	const string letters = "abcdefghijklmnopqrstuvwxyz";
	if (b == true)
	{
		searchFor = numbers;
		type = " numbers ";
	}
	else
	{
		searchFor = letters;
		type = " letters ";
	}
	int i = 0;
	cout << "positions of first not of " << type << "in the string: " << s << "\n";
	while (i != s.size())
	{
		string word = lowerString.substr(i, s.size());
		pos = word.find_first_not_of(searchFor);		// find what pos the number is not at
		pos += i;								// set positon to += i because i keeps track of how far we are in the string
		if (i < pos)// set i = pos so we dont look for a number we already found but check to see if it less than pos
		{			// if i is greater than pos we dont want to go back a char in a word
			i = pos;
		}
		cout << pos << "\n";
		++i;
	}
}
int main()
{
	string s = "ab2c3d7R4E6";
	findCharFirstOf(s,true);
	findCharFirstOf(s, false);
	findCharFirstNotOf(s, true);
	findCharFirstNotOf(s, false);
	system("Pause");	   
	return 0;
}

