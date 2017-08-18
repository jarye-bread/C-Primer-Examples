// Jarye Murphy
// exercise 9.27 from c++ primer 
/*
Exercise 9.27: Write a program to find and remove the odd-valued elements in a
forward_list<int>.
*/
#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;
using std::cin;

int main()
{
	forward_list<int> fls{ 1,2,3,4,5,6,7,8,9,10,11 };
	auto curr = fls.begin();
	auto prev = fls.before_begin();
	while (curr != fls.end())
	{
		if (*curr % 2 == 1)
		{
			curr = fls.erase_after(prev);
		}
		else {
			prev = curr;
			++curr; }
	}
	auto beg = fls.begin();
	while (beg != fls.end())
	{
		cout << *beg << std::endl;
		++beg;
	}
	system("Pause");
	return 0;
}

