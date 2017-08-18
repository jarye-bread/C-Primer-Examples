// Jarye Murphy
// exercise 8.1 from c++ primer 
/*
Exercise 8.1: Write a function that takes and returns an istream&. The function
should read the stream until it hits end-of-file. The function should print what it reads
to the standard output. Reset the stream so that it is valid before returning the stream.
*/
#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::cin;
std::istream& readTillEof(std::istream&is)
{
	auto resetState = is.rdstate();
	std::string word;
	while (!is.eof())
	{
		is >> word;
		cout << word << std::endl;
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

