// Jarye Murphy
// exercise 9.12 from c++ primer 
/*
Exercise 9.12: Explain the differences between the constructor that takes a container
to copy and the constructor that takes two iterators.
*/
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;
void printVec(vector<int> &v)
{
	for (auto elm : v)
	{
		cout << elm << std::endl;
	}
}
int main()
{	
	// iterators 
	vector<int> v1{1,2,3,4,5};				
	vector<int> v2(v1.begin(),v1.end()-2);	 //allows you to copy just a range of ints in a vector
	vector<int> v3(v1);						// copy ctor makes you copy the whole vector
	cout << "printing first vec" << std::endl;
	printVec(v1);
	cout << "\n" << "printing second vec iterator range taking 2 elements off of vector 1" << std::endl;
	printVec(v2);
	cout << "\n" << "printing 3rd vect copy ctor" << std::endl;
	printVec(v3);
	system("Pause");
	return 0;
}

