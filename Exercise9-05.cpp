// Jarye Murphy
// exercise 9.5 from c++ primer 
/*
Exercise 9.5: Rewrite the previous program to return an iterator to the requested ele-
ment. Note that the program must handle the case where the element is not found.
*/
#include <iostream>
#include <vector>
#include <cctype>
using std::vector;
using std::cout;
using std::cin;

vector<int>::iterator numLookUp(vector<int>::iterator b, vector<int>::iterator e,int num)
{
	while (b != e)
	{
		if (*b == num)
		{
			return b;
		}
		++b;
	}
	throw std::out_of_range("number looking up isnt in the vector");
}
int main()
{	
	vector<int> vec{ 1,2,3,4,5,22,6,7,8 };
	cout << "which number do you want to look for? " << std::endl;
	int num;
	cin >> num;
	vector<int>::iterator it;
	try {
		it = numLookUp(vec.begin(), vec.end(), num);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() <<" exiting" <<  std::endl;
		system("PAUSE");
		exit(1);
	}
	cout << "we found the number: " << *it << std::endl;
	
	system("Pause");
	return 0;
}

