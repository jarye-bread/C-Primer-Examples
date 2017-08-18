// Jarye Murphy
// exercise 4.11 from c++ primer 
/*
Exercise 4.11: Write an expression that tests four values, a, b, c, and d, and ensures
that a is greater than b, which is greater than c, which is greater than d.
*/
#include <iostream>
bool greaterThanPrevious(int a, int b, int c, int d)
{
	if (a > b && b > c && c > d)
	{
		return true;
	}
	return false;
}
int main()
{
	
	auto a = 0, b = 0, c = 0, d = 0;
	std::cout << "input a 4 numbers?" << "\n";
	std::cin >> a >> b >> c >> d;

	
	if (greaterThanPrevious(a, b, c, d) == true)
	{
		std::cout << " numbers are greater than all previous !" << "\n";
	}
	else
	{
		std::cout << " numbers arent greater than all previous!" << "\n";
	}
	system("Pause");
	return 0;
}