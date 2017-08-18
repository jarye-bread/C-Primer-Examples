// Jarye Murphy
// exercise 6.54 from c++ primer 
/*
Exercise 6.54: Write a declaration for a function that takes two int parameters and
returns an int, and declare a vector whose elements have this function pointer type.
*/
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;


int main()
{	
	using ptr =  int(*)(int,int);
	vector<vecPtr> myVec;
	system("Pause");
	return 0;
}