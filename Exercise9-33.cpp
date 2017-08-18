// Jarye Murphy
// exercise 9.33 from c++ primer 
/*
Exercise 9.33: In the final example in this section what would happen if we did not
assign the result of insert to begin? Write a program that omits this assignment to
see if your expectation was correct.
*/
#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::cout;
using std::cin;

int main()
{
	vector<int> v{ 1,2,3,4,5 };
	// safer: recalculate end on each trip whenever the loop adds/erases elements
	auto begin = v.begin();
	while (begin != v.end()) {
		// do some processing
		++begin; // advance begin because we want to insert after this element
		begin = v.insert(begin, 42); // insert the new value
		++begin; // advance begin past the element we just added
	}
	for (auto &elm : v)
	{
		cout << elm << "\n";
	}
	// now to see what happens if we omit begin = v.insert(begin,42) 
	// to see what happens?
	// which makes it crash because you arent giving it a positon or an iter to point to where
	// it wants the new value to add at certain position
	vector<int> v1{ 1,2,3,4,5 };

	auto begin1 = v1.begin();
	while (begin1 != v1.end()) {
		
		++begin1; 
		cout << *begin1 << "\n";
		system("PAUSE");
		v.insert(begin1, 42); 
		++begin1; 
	}
	for (auto &elm : v1)
	{
		cout << elm << "\n";
	}
	system("Pause");
	return 0;
}

