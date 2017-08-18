// Jarye Murphy
// exercise 9.31 from c++ primer 
/*
Exercise 9.31: The program on page 354 to remove even-valued elements and dupli-
cate odd ones will not work on a list or forward_list. Why? Revise the program
so that it works on these types as well.

vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
auto iter = vi.begin(); // call begin , not cbegin because we’re changing vi
while (iter != vi.end()) {
if ( * iter % 2) {
iter = vi.insert(iter, * iter); // duplicate the current element
iter += 2; // advance past this element and the one inserted before it
} else
iter = vi.erase(iter); // remove even elements
// don’t advance the iterator; iter denotes the element after the one we erased
}
*/
#include <iostream>
#include <forward_list>
#include <list>
using std::list;
using std::forward_list;
using std::cout;
using std::cin;

int main()
{
	forward_list<int> fls{ 0,1,2,3,4,5,6,7,8,9 };
	auto curr = fls.begin();
	auto prev = fls.before_begin();
	while (curr !=fls.end())
	{
		if (*curr % 2 == 1)
		{
			curr = fls.erase_after(prev); // erase current int that curr is pointing to no need to ++curr since it already has moved up one
		}
		else {
			curr = fls.insert_after(curr, *curr); // insert the value of curr after the iterator its at
			prev = curr;						  // move prev to curr iterator so its at the same spot
			++curr;								  // move curr one ahead of prev so prev is now one before curr iterator again
		}
		
	}
	// list insert and delete
	list<int> ls{ 0,1,2,3,4,5,6,7,8,9 };
	auto beg = ls.begin();
	while (beg != ls.end())
	{
		if (*beg % 2 == 1)
		{
			beg = ls.erase(beg);
		}
		else
		{
			beg = ls.insert(beg, *beg);
			++beg; // iter must move 2 times since we just added an element after itself
			++beg; // if we move once it will see it on next iteration and add again making a infinite loop
		}
	}
	//print list
	for (auto &elm : fls)
	{
		cout << elm << "\n";
	}
	for (auto &elm : ls)
	{
		cout << elm << "\n";
	}
	system("Pause");
	return 0;
}

