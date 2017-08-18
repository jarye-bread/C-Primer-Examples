// Jarye Murphy
// exercise 9.4 from c++ primer 
/*
Exercise 9.4: Write a function that takes a pair of iterators to a vector<int> and an
int value. Look for that value in the range and return a bool indicating whether it
was found.
*/
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;

bool numLookUp(vector<int>::iterator b, vector<int>::iterator e,int num)
{
	while (b != e)
	{
		if (*b == num)
		{
			return true;
		}
		++b;
	}
	return false;
}
int main(int argc, char* argv[])
{	
	vector<int> vec{ 1,2,3,4,5,22,6,7,8 };
	cout << "which number do you want to look for? " << std::endl;
	int num;
	cin >> num;
	if (numLookUp(vec.begin(), vec.end(),num ) == true)
	{
		cout << "we found the number: " << num << std::endl;
	}
	else
	{
		cout << "we didnt find the number " << num <<std::endl;
	}
	system("Pause");
	return 0;
}

