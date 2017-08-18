// Jarye Murphy
// exercise 8.5 from c++ primer 
/*
Exercise 8.5: Rewrite the previous program to store each word in a separate element.
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
			is >> word;
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

