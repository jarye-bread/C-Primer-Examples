// Jarye Murphy
// exercise 9.38 from c++ primer 
/*
Exercise 9.38: Write a program to explore how vectors grow in the library you use.
*/
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;

int main()
{
	vector<int> v;
	int i = 0;
	while (i < 40)
	{
		v.emplace_back(i);
		++i;
	}
	cout << "size: " << v.size() << " capacity: " << v.capacity() << "\n";
	i = 0;
	while (i < 40)
	{
		v.emplace_back(i);
		++i;
	}
	cout << "size: " << v.size() << " capacity: " << v.capacity() << "\n";
	system("Pause");
	return 0;
}

