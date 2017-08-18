// Jarye Murphy
// exercise 6.33 from c++ primer 
/*
Exercise 6.33: Write a recursive function to print the contents of a vector.
*/
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

vector<int> printRecurseVec(vector<int> vec)
{
	auto end = vec.size()-1; // set the end to size of vector -1 
	if (vec.size() != 0)	 // untill the size equals 0 print else nothing left in vector
	{
		cout << vec[end]  << std::endl; 
		vec.pop_back();		 // pop last element off of the vector so the size decrease by 1 each iteration
		return printRecurseVec(vec); // recurse
	}
	return vec;
}
int main()
{	
	cout << "We are going to print a vector using recursion" << std::endl;
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	printRecurseVec(vec);
	system("Pause");
	return 0;
}