// Jarye Murphy
// exercise 10.2 from c++ primer 
/*
Exercise 10.2: Repeat the previous program, but read values into a list of strings.
*/
#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using std::string;
using std::list;
using std::cout;
using std::cin;

int main()
{
	cout << "enter strings into a list " << "\n";
	list<string> ls;
	string word = "";
	int i = 0;
	while (i < 10)
	{
		cin >> word;
		ls.emplace_back(word);
		++i;
	}
	string wordToFind = "";
	cout << "What word would you like to see the count of in the vector? " << "\n";
	cin >> wordToFind;
	cout << "the number " << wordToFind << " was found " << std::count(ls.begin(), ls.end(), wordToFind) << " times in the vector " << "\n";
	system("Pause");	   
	return 0;
}

