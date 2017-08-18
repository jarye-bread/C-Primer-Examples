// Jarye Murphy
// exercise 5.17 from c++ primer 
/*
Exercise 5.17: Given two vectors of ints, write a program to determine whether
one vector is a prefix of the other. For vectors of unequal length, compare the num-
ber of elements of the smaller vector. For example, given the vectors containing 0,
1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.
*/
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
//preconditon vec1 is not bigger than vec2 when enters funtion
bool vecIsPrefix(vector<int> vec1, vector<int> vec2)
{
	for (decltype(vec1.size()) i = 0, v1sz = vec1.size(); i!= v1sz; ++i)
	{
		if (vec1[i] != vec2[i])
		{
			return false;
			cout << "its not a prefix of the vector" << std::endl;
		}
	}
	cout << " Its a prefix of other vector given" << std::endl;
	return true;
}
int main()
{
	vector<int> vec1;
	vector<int> vec2;
	auto num = 0;
	cout << "enter values into vec type '-1' to quit" << std::endl;
	while (cin >> num)
	{
		if (num == -1)
		{
			break;
		}
		vec1.emplace_back(num);
	}
	cout << "now add for next vector " << std::endl;
	int num2 = 0;
	while (cin >> num2)
	{
		if (num2 == -1)
		{
			break;
		}
		vec2.emplace_back(num2);
	}
	if (vec1.size() < vec2.size()) // see which one is smaller the smaller one goes first in vecIsPrefix
	{
		vecIsPrefix(vec1, vec2);
	}
	else						   // if vec2 is smaller than have it as first parameter
	{
		vecIsPrefix(vec2, vec1);
	}
	system("Pause");
	return 0;
}