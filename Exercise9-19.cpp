// Jarye Murphy
// exercise 9.19 from c++ primer 
/*
Exercise 9.19: Rewrite the program from the previous exercise to use a list. List the
changes you needed to make.
*/
#include <iostream>
#include <list>
#include <string>
using std::cout;
using std::cin;
using std::list;
using std::string;

int main()
{	
	list<string> ls;
	string word;
	cout << "type 'q' to quit entering strings into a deque" << std::endl;
	while (cin >> word)
	{
		if (word == "q")
		{
			break;
		}
		ls.insert(ls.end(),word); // need to insert at end so insert and use the ls.end() iterator to insert at last element
	}							 
	for (auto it = ls.begin(); it != ls.end(); ++it)
	{
		cout << *it << std::endl;
	}
	system("Pause");
	return 0;
}

