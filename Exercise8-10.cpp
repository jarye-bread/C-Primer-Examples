// Jarye Murphy
// exercise 8.10 from c++ primer 
/*
Exercise 8.10: Write a program to store each line from a file in a vector<string>.
Now use an istringstream to read each element from the vector a word at a time.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using std::cout;
using std::cin;
void readTillEof(std::ifstream&is)
{
	auto resetState = is.rdstate();
	std::vector<std::string> vec;
	std::string word,line;
	while (!is.eof())
	{
		std::getline(is, line);
		std::istringstream inStream(line);
		while (inStream >> word)
		{
			vec.emplace_back(word);
		}
	}
	
	for (auto it = vec.begin(); it!=vec.end(); ++it)
	{
		std::istringstream isStreamVec(*it);
		while (isStreamVec >> word)
		{
			cout << word << std::endl;
		}
	}
	cin.setstate(resetState);
}
int main(int argc, char* argv[])
{	
	std::ifstream is("file.txt");
	readTillEof(is);
	system("Pause");
	return 0;
}

