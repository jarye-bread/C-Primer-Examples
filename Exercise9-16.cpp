// Jarye Murphy
// exercise 9.16 from c++ primer 
/*
Exercise 9.16: Repeat the previous program, but compare elements in a list<int>
to a vector<int>.
*/
#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::cin;
using std::vector;
using std::list;
bool vecAndListEqual(vector<int> &v, list<int> &ls)
{
	v.shrink_to_fit();
	if (v.size() != ls.size()) // if they dont have the same size they cant be equal
	{
		return false;
	}
	else
	{
		auto lIt = ls.begin();
		for (auto it = v.begin(); it != v.end(); ++it)
		{
			if (*it != *lIt) // see if each element in vector and list are equal
			{
				return false; // if any are different it will break and end
			}
			++lIt;
		}
	}
	return true; // if it has the same size and all values are equal then vector and list are equal
}
int main()
{	
	cout << "lets compare two vector ints to see if they are equal" << std::endl;
	vector<int> vec1{ 1,2,3,4,5 };
	list<int> ls1{ 1,2,3,4,5 };
	vector<int> vec2{ 1,2,3,4,6 };
	cout << "list and vector 1" << std::endl;
	if (vecAndListEqual(vec1,ls1) == true)
	{
		cout << "the vector and list are equal " << std::endl;
	}
	else
	{
		cout << "the vector and list arent equal " << std::endl;
	}
	cout << "now for list and vector2 " << std::endl;
	if (vecAndListEqual(vec2, ls1) == true)
	{
		cout << " the vector and list are equal " << std::endl;
	}
	else
	{
		cout << "the vector and list arent equal " << std::endl;
	}
	system("Pause");
	return 0;
}

