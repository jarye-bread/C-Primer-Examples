// Jarye Murphy
// exercise 9.29 from c++ primer 
/*
Exercise 9.29: Given that vec holds 25 elements, what does vec.resize(100) do?
What if we next wrote vec.resize(10)?
*/
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
void printVec(const vector<int> &v)
{
	for (auto elm : v)
	{
		cout << elm << "\n";
	}
}
int main()
{
	cout << "vector with 25 ints all equal 1" << "\n";
	//Given that vec holds 25 elements
	vector<int> vec(25, 1); // create a vec with 25 elements all with one in it
	printVec(vec);
	// what does vec.resize(100) do?
	vec.resize(100);
	printVec(vec); // prints 100 '0'
	//What if we next wrote vec.resize(10) ?
	vec.resize(10); 
	printVec(vec); // prints 10 '1'

	system("Pause");
	return 0;
}

