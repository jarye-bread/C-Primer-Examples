// Jarye Murphy
// exercise 9.34 from c++ primer 
/*
Exercise 9.34: Assuming vi is a container of ints that includes even and odd values,
predict the behavior of the following loop. After you’ve analyzed this loop, write a
program to test whether your expectations were correct.
iter = vi.begin();
while (iter != vi.end())
if ( * iter % 2)
iter = vi.insert(iter, * iter);
++iter;
*/
#include <iostream>
#include <vector>
#include <list>
using std::list;
using std::cout;
using std::cin;

int main()
{
	// if the number is odd it inserts the same item again
	// since it will always insert an odd number and not increment up by two
	// which includes the current iter it was on and the new element inserted into the list
	// it will keep finding the same element it just inserted and insert another leading infinite loop
	// of 1 s that it keeps adding over and over again.
	list<int> vi{ 1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin();
	while (iter != vi.end())
		if (*iter % 2)
			cout << *iter << "\n"; // line added to see whats going on each iteration
			iter = vi.insert(iter, *iter);
	++iter;
	
	system("Pause");
	return 0;
}

