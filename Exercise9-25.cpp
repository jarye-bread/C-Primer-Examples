// Jarye Murphy
// exercise 9.25 from c++ primer 
/*
Exercise 9.25: In the program on page 349 that erased a range of elements, what hap-
pens if elem1 and elem2 are equal? What if elem2 or both elem1 and elem2 are the
off-the-end iterator?
*/
#include <iostream>
#include <list>
using std::list;
using std::cout;
using std::cin;

void printList(const list<int> &ls)
{
	auto it = ls.begin();
	while (it!=ls.end())
	{
		cout << *it << std::endl;
		++it;
	}
}
int main()
{
	list<int> slist = { 0,1,2,3,4,5,6,7,8,9 };
	auto elem1 = slist.begin();
	auto elem2 = slist.begin();
	elem1 = slist.erase(elem1, elem2);
	//what happens if elem1 and elem2 are equal ?
	cout << "elem1 and elem2 are equal" << std::endl;
	printList(slist);
	// nothing ends up getting deleted

	//What if elem2 or both elem1 and elem2 are the off - the - end iterator ?
	cout << "elem1 and elem2 are off end iterators" << std::endl;
	auto elem3 = ++slist.end();
	auto elem4 = ++elem3;
	// program crashes since iterators point to nothing
	elem3 = slist.erase(elem3, elem4);
	printList(slist);
	system("Pause");
	return 0;
}

