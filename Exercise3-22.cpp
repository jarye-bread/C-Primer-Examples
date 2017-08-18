/*
Jarye Murphy
C++ primer 5th edition
Exercise 3.22

Exercise 3.22: Revise the loop that printed the first paragraph in text to instead
change the elements in text that correspond to the first paragraph to all uppercase.
After you’ve updated text, print its contents.

*/
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::vector;
using std::string;
using std::cout;
using std::cin;

void printVec(vector<string> printVec)
{
	for (auto it = printVec.begin(); it != printVec.end(); ++it)
	{
		cout << *it << std::endl;
	}
}
int main()
{
	vector<string> vec;
	string word;
	while (cin >> word)
	{
		if (word == "q")
		{
			break;
		}
		vec.emplace_back(word);
	}
	for (auto vIt = vec.begin(); vIt != vec.end(); ++vIt)// iter with vIt through the whole vector
	{
		for (auto it = (*vIt).begin(); it != (*vIt).end() && !isspace(*it); ++it)// set new iter to the begining of the string that vIt is pointing too
		{
			*it = toupper(*it); // set the it iter to itself after using toupper
		}
		(*vIt) = (*vIt); // set the new string equal to itself to replace lowercase with uppercase
	}
	
	printVec(vec);
	system("Pause");
	return 0;
}

/*
// this also works might be more readable
for (auto vIt = vec.begin(); vIt != vec.end(); ++vIt)
{
string s = *vIt;
for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
{
*it = toupper(*it);
}
// todo assign the string s to *vIt to keep the changes
(*vIt) = s;
}
*/