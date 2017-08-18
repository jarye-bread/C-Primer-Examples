// Jarye Murphy
// exercise 10.1 from c++ primer 
/*
Exercise 10.1: The algorithm header defines a function named count that, like
find, takes a pair of iterators and a value. count returns a count of how often that
value appears. Read a sequence of ints into a vector and print the count of how
many elements have a given value.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cout;
using std::cin;

int main()
{
	cout << "enter numbers into a vector " << "\n";
	vector<int> vec;
	int num = 0;
	int i = 0;
	while (i < 10)
	{
		cin >> num;
		vec.emplace_back(num);
		++i;
	}
	int numToFind = 0;
	cout << "What number would you like to see the count of in the vector? " << "\n";
	cin >> numToFind;
	cout << "the number " << numToFind << " was found " << std::count(vec.begin(), vec.end(), numToFind) << " times in the vector " << "\n";
	system("Pause");	   
	return 0;
}

