// Jarye Murphy
// exercise 5.23 from c++ primer 
/*
Exercise 5.23: Write a program that reads two integers from the standard input and
prints the result of dividing the first number by the second.
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
	auto num = 0;
	auto denom = 0;
	cout << "Enter two numbers for a divison operation! " << "\n";
	cout << "Enter a numerator: " << std::endl;
	cin >> num;
	cout << "Enter a denominator: " << std::endl;
	cin >> denom;
	cout << "the answer is: " << "\t" << num / denom << std::endl;
	system("Pause");
	return 0;
}
