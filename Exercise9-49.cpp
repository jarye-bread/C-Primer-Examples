// Jarye Murphy
// exercise 9.49 from c++ primer 
/*
Exercise 9.49: A letter has an ascender if, as with d or f, part of the letter extends
above the middle of the line. A letter has a descender if, as with p or g, part of the
letter extends below the line. Write a program that reads a file containing words and
reports the longest word that contains neither ascenders nor descenders.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using std::string;
using std::cout;
using std::cin;
bool hasAscederDescender(const string s)
{
	const string ascender = "bdfhklt", descender = "pgqjy"; //define constant ascender and descenders
	const string ascDesc = ascender + descender; // add the two strings 
	for (auto it = s.begin(); it != s.end(); ++it)
	{
		if (ascDesc.find(*it) != -1) // for each letter in the string check to see if it is in the ascender and descender list
		{
			return true; // if it doesnt equal -1 which is what returns when string.find() function returns when doesnt find a letter
		}
	}
	return false;
}
int main()
{
	string line, biggestWord;
	std::ifstream file("file.txt");
	if (file) // make sure the stream is open
	{
		while (!file.eof()) // read till end of file
		{
			std::getline(file, line);
			std::istringstream is(line);
			string word;
			while (is >> word)
			{
				if (hasAscederDescender(word) == false) // make sure the current word doesnt have an ascender or descender
				{
					if (biggestWord.size() < word.size()) // if our current biggest word is smaller than current word parse then assign new biggestWord
					{
						biggestWord = word;
					}
				}

			}
			
		}
	}
	cout << "biggest word Without ascenders and descenders is " << biggestWord << " with a count of " << biggestWord.size() << "\n";
	system("Pause");	   
	return 0;
}

