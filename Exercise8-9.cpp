// Jarye Murphy
// exercise 8.9 from c++ primer 
/*
Exercise 8.9: Use the function you wrote for the first exercisein § 8.1.2 (p. 314) to print
the contents of an istringstream object.

Exercise 8.1: Write a function that takes and returns an istream&. The function
should read the stream until it hits end-of-file. The function should print what it reads
to the standard output. Reset the stream so that it is valid before returning the stream.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using std::cout;
using std::cin;
std::istream& readTillEof(std::istream&is)
{
	auto resetState = is.rdstate();
	std::string word,line;
	while (!is.eof())
	{
		std::getline(is, line);
		std::istringstream inStream(line);
		while (inStream >> word)
		{
			cout << word << std::endl;
		}
	}
	cin.setstate(resetState);
	return is;
}
int main()
{	
	readTillEof(cin);
	system("Pause");
	return 0;
}

