// Jarye Murphy
// exercise 9.10 from c++ primer 
/*
Exercise 9.10: What are the types of the following four objects ?
*/
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int main()
{	
	
	vector<int> v1;
	const vector<int> v2;
	auto it1 = v1.begin(); // iterator
	auto it2 = v2.begin(); // const iterator
	auto it3 = v1.cbegin();// const iterator
	auto it4 = v2.cbegin();// const iterator
	system("Pause");
	return 0;
}

