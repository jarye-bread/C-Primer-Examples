// Jarye Murphy
// exercise 8.4 from c++ primer 
/*
Exercise 8.4: Write a function to open a file for input and read its contents into a
vector of strings, storing each line as a separate element in the vector.
*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::vector;
using std::string;
using std::cout;
using std::cin;
vector<string> readFile()
{
	std::ifstream is("file.txt");
	vector<string> fileContents;
	string word;
	if (is)					// make sure the file is open
	{
		while (!is.eof())   // till you hit the end of file read into word and
		{
			std::getline(is, word);
			fileContents.emplace_back(word);	// and put it in the vector
		}
	}
	return fileContents;
}
template<class T>
void printVec(vector<T> &vec)
{
	for (auto elm : vec)
	{
		cout << elm << std::endl;
	}
}
int main()
{	
	vector<string> vec = readFile();
	printVec(vec);
	system("Pause");
	return 0;
}

