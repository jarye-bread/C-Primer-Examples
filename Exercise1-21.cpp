// Jarye Murphy
// exercise 1.21 from c++ primer 
/*
Exercise 1.21: Write a program that reads two Sales_item objects that have the
same ISBN and produces their sum.
*/
#include "Sales_item.h"
#include <iostream>

using std::cout;
using std::cin;


int main()
{	
	Sales_item item1, item2;
	cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	system("Pause");
	return 0;
}