// Jarye Murphy
// exercise 9.26 from c++ primer 
/*
Exercise 9.26: Using the following definition of ia, copy ia into a vector and into a
list. Use the single-iterator form of erase to remove the elements with odd values
from your list and the even values from your vector.
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
*/
#include <iostream>
#include <list>
#include <vector>
using std::vector;
using std::list;
using std::cout;
using std::cin;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec;
	list<int> ls;
	for (auto i = 0; i != 11; ++i)
	{
		vec.emplace_back(ia[i]);
		ls.emplace_back(ia[i]);
	}
	system("PAUSE");
	auto lit = ls.begin();
	auto vit = vec.begin();
	while (lit != ls.end())
	{
		if (*lit % 2 == 1) // if its odd and in a list remove it
		{
			lit = ls.erase(lit);
		}
		else{ ++lit; }
		
	}
	while (vit != vec.end())
	{
		if (*vit % 2 == 0) // if its even and in a vector remove it
		{
			vit = vec.erase(vit);
		}
		else{ ++vit; }
		
	}
	cout << "printing the list of even numbers" << std::endl;
	lit = ls.begin();
	while (lit!=ls.end())
	{
		cout << *lit << std::endl;
		++lit;
	}
	cout << "printing the vector of odd numbers" << std::endl;
	vit = vec.begin();
	while (vit != vec.end())
	{
		cout << *vit << std::endl;
		++vit;
	}
	system("Pause");
	return 0;
}

