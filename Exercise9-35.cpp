// Jarye Murphy
// exercise 9.35 from c++ primer 
/*
Exercise 9.35: Explain the difference between a vector’s capacity and its size.
*/
#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::cout;
using std::cin;

int main()
{
	// size is how many elements are in the vector
	// capacity is how much space the vector is allocated
	// you can use  v.reserve(n) where n is how much you want to allocate for vector
	// but size is actually how much of the space is being used by the vector
	vector<int> v;
	
	cout << "size: " << v.size() << " capacity: " << v.capacity() << "\n";
	v.reserve(100);
	cout << "size: " << v.size() << " capacity: " << v.capacity() << "\n";
	system("Pause");
	return 0;
}

