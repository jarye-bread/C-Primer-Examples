// Jarye Murphy
// exercise 6.5 from c++ primer 
/*
Exercise 6.5: Write a function to return the absolute value of its argument.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
int absVal(int abs)
{
	return std::abs(abs);
}
int main()
{	
	cout << "which number would you like the absoulte value of?" << std::endl;
	int num = 0;
	cin >> num;
	cout << "absolute value of " << num << " is "<< absVal(num) << std::endl;
	system("Pause");
	return 0;
}