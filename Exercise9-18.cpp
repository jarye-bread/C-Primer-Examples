// Jarye Murphy
// exercise 9.18 from c++ primer 
/*
Exercise 9.18: Write a program to read a sequence of strings from the standard input
into a deque. Use iterators to write a loop to print the elements in the deque.
*/
#include <iostream>
#include <deque>
#include <string>
using std::cout;
using std::cin;
using std::deque;
using std::string;

int main()
{	
	deque<string> deq;
	string word;
	cout << "type 'q' to quit entering strings into a deque" << std::endl;
	while (cin >> word)
	{
		if (word == "q")
		{
			break;
		}
		deq.emplace_back(word);
	}
	for (auto it = deq.begin(); it != deq.end(); ++it)
	{
		cout << *it << std::endl;
	}
	system("Pause");
	return 0;
}

