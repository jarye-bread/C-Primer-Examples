// Jarye Murphy
// exercise 9.20 from c++ primer 
/*
Exercise 9.20: Write a programto copy elements froma list<int>into two deques.
The even-valued elements should go into one deque and the odd ones into the other.
*/
#include <iostream>
#include <list>
#include <deque>
#include <string>
using std::cout;
using std::cin;
using std::list;
using std::deque;
using std::string;
void printDeque(deque<int> &d)
{
	for (auto it = d.begin(); it != d.end(); ++it)
	{
		cout << *it << std::endl;
	}
}
int main()
{	
	list<int> ls{ 1,2,3,4,5,6,7,8,9,10 };
	deque<int> evenDeq;
	deque<int> oddDeq;
	for (auto it = ls.begin(); it != ls.end(); ++it)
	{
		if (*it % 2 == 0) // if the remainder of dividing is 0 its even
		{
			evenDeq.emplace_back(*it);
		}
		else
		{
			oddDeq.emplace_back(*it); // if not even its odd so put in odd deque
		}
	}
	cout << "printing even deque" << std::endl;
	printDeque(evenDeq);
	cout << "printing odd deque" << std::endl;
	printDeque(oddDeq);
	system("Pause");
	return 0;
}

