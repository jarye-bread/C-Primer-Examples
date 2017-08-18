// Jarye Murphy
// exercise 9.23 from c++ primer 
/*
Exercise 9.23: In the first program in this section on page 346, what would the values
of val, val2, val3, and val4 be if c.size() is 1?
*/
#include <iostream>
#include <forward_list>
using std::cout;
using std::cin;


int main()
{
	std::forward_list<int> c{ 1 };
	if (!c.empty()) {
		// val and val2 are copies of the value of the first element in c
		// both vals are 1
		auto val =	*c.begin(), val2 = c.front();// val3 and val4 are copies of the of the last element in c
		auto last = c.end();
		cout << "val " << val << " val2 " << val2 << std::endl;
		// val 3 and val4 cannot be compiled
		//auto val3 = *(--last); //can’t decrement forward_list iterators
		//auto val4 = c.back(); // not supported by forward_list
	}
	system("Pause");
	return 0;
}

