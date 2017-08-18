// Jarye Murphy
// exercise 6.55 from c++ primer 
/*
Exercise 6.55: Write four functions that add, subtract, multiply, and divide two int
values. Store pointers to these functions in your vector from the previous exercise.
*/
#include <iostream>
#include <cassert>
#include <vector>
using std::vector;

using std::cout;
using std::cin;

int add(int num1, int num2)
{
	return num1 + num2;
}
int subtract(int num1, int num2)
{
	return num1 - num2;
}
int multiply(int num1, int num2)
{
	return num1 * num2;
}
int divide(int num1, int num2)
{
	assert(num2 != 0); // cant divide by 0
	return num1 / num2;
}
int main()
{	
	using intPtr = int(*)(int, int);
	vector<intPtr> myVec = { add,subtract,multiply,divide };
	cout << "enter two numbers to add, subtract, multiply, and divide by" << std::endl;
	int num1; int num2;
	cin >> num1 >> num2;
	cout << "\n"  << "///////////////" << std::endl;
	for (auto elm : myVec)
	{
		cout << elm(num1, num2) << std::endl;
	}
	cout << "///////////////" << std::endl;
	system("Pause");
	return 0;
}