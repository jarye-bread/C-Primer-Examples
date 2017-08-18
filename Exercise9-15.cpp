// Jarye Murphy
// exercise 9.15 from c++ primer 
/*
Exercise 9.15: Write a program to determine whether two vector<int>s are equal
*/
#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::cin;
using std::vector;
using std::list;
vector<int> populateVec()
{
	cout << "add things into a vec type '-1' when done" << std::endl;
	vector<int> vec;
	int num;
	while (cin >> num)
	{
		if (num == -1)
		{
			return vec;
		}
		vec.emplace_back(num);
	}
}
int main()
{	
	cout << "lets compare two vector ints to see if they are equal" << std::endl;
	vector<int> vec1 = populateVec();
	vector<int> vec2 = populateVec();
	if (vec1 == vec2)
	{
		cout << " the two vectors are equal " << std::endl;
	}
	else
	{
		cout << "the two vectors arent equal " << std::endl;
	}
	system("Pause");
	return 0;
}

