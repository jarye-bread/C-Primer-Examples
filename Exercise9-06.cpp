// Jarye Murphy
// exercise 9.6 from c++ primer 
/*
Exercise 9.6: What is wrong with the following program? How might you correct it?
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(),
iter2 = lst1.end();
while (iter1 < iter2) / * ...
* /
*/
#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::list;

int main()
{	
	list<int> lst1;
	list<int>::iterator iter1 = lst1.begin(),
		iter2 = lst1.end();
//	while (iter1 < iter2)	//cant compare the two iterators on a list with a less than sign also never increment iter1
							// so even if it did run it would be a infinite loop
	// my fix
	while (iter1!=iter2)
	{
		// do stuff with iterator
		++iter1;
	}
	system("Pause");
	return 0;
}

