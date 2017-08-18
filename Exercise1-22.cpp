// Jarye Murphy
// exercise 1.22 from c++ primer 
/*
Exercise 1.22: Write a program that reads several transactions for the same ISBN .
Write the sum of all the transactions that were read.
*/
#include "Sales_item.h"
#include <iostream>

using std::cout;
using std::cin;


int main()
{	
	Sales_item item1, sumItem;
	while (cin >> item1)
	{
		sumItem += item1;
		std::cout <<  "sum is: " << sumItem << std::endl;
	}
	
	system("Pause");
	return 0;
}