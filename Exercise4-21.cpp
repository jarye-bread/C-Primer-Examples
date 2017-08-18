// Jarye Murphy
// exercise 4.21 from c++ primer 
/*
Exercise 4.21: Write a program to use a conditional operator to find the elements in a
vector<int> that have odd value and double the value of each such element.
*/
#include <iostream>
#include <vector>
int main()
{
	int num = 0;
	std::cout << " add numbers into the vec and enter 42 when done" << "\n";
	std::vector<int> vec;
	while (std::cin >> num)
	{
		if (num == 42)
		{
			break;
		}
		vec.emplace_back(num);
	}
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		// derefrence it modulate by 2 if that remainder is 1 its now odd
		// use ? operator since its odd set the *it equal to itself times 2
		// otherwise  do nothing
		*it % 2 == 1 ? *it = (*it) * 2 : NULL;
		std::cout << *it << "\n";
	}
	system("Pause");
	return 0;
}