// Jarye Murphy
// exercise 5.24 from c++ primer 
/*
Exercise 5.24: Revise your program to throw an exception if the second number is
zero. Test your program with a zero input to see what happens on your system if you
don’t catch an exception.
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
	cout << "the anser is: " << "\t" << num / denom << std::endl;
	/*
	Unhandled exception at 0x00382536 in CppPrimerEx.exe: 0xC0000094: Integer division by zero.
	*/
	system("Pause");
	return 0;
}