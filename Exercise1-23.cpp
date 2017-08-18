// Jarye Murphy
// exercise 1.23 from c++ primer 
/*
Exercise 1.23: Write a program that reads several transactions and counts how many
transactions occur for each ISBN .
*/
#include "Sales_item.h"
#include <iostream>

using std::cout;
using std::cin;


int main()
{	
	Sales_item item1, item2;
	int itemCtr = 1;
	cin >> item1 >> item2;
	if (item1 == item2)
	{
		itemCtr += 1;
		cout << "item1 " << item1 << " has a count of " << itemCtr << std::endl;
	}
	else
	{
		cout << "item1 "<< item1 << " has a count of " << itemCtr << std::endl;
		cout << "item2 " << item2 << " has a count of " << itemCtr << std::endl;
	}
	system("Pause");
	return 0;
}