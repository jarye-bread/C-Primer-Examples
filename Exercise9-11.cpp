// Jarye Murphy
// exercise 9.11 from c++ primer 
/*
Exercise 9.11: Show an example of each of the six ways to create and initialize a
vector. Explain what values each vector contains.
*/
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int main()
{	
	
	vector<int> v1;							// default ctor of vector
	vector<int> v2{1,2,3,4,5};				// has elements 1,2,3,4,5 in a vector
	vector<int> v3(10);						// 10 elements of 0
	vector<int> v4(10,5);					// 10 eklements of 5
	vector<int> v5(v4);						// copy ctor of vector v4
	vector<int> v6(v5.begin(),v5.end());	// copy of v5 using iterators to copy elements 

	system("Pause");
	return 0;
}

