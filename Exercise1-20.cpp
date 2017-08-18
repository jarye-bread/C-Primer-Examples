// Jarye Murphy
// exercise 1.20 from c++ primer 
/*
Exercise 1.20: http://www.informit.com/title/0321714113 contains a copy
of Sales_item.h in the Chapter 1 code directory. Copy that file to your working
directory. Use it to write a program that reads a set of book sales transactions, writing
each transaction to the standard output.
*/
#include "Sales_item.h"
#include <iostream>

using std::cout;
using std::cin;


int main()
{	
	Sales_item item1;
	while (cin >> item1)
	{
		std::cout << item1 << std::endl;
	}
	
	system("Pause");
	return 0;
}