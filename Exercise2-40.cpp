// Jarye Murphy
// exercise 2.40 from c++ primer 
/*
Exercise 2.40: Write your own version of the Sales_data class.
*/
#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
int main()
{
	struct Sales_data {
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
	};
	Sales_data firstSale;
	std::string bookNumber;
	unsigned unitSold = 0;
	double money = 0.0;
	cout << "Whats the book number?" << std::endl;
	cin >> bookNumber;
	cout << "Whats the unit sold?" << std::endl;
	cin >> unitSold;
	cout << "Whats the revenue from the book?" << std::endl;
	cin >> money;
	firstSale.bookNo = bookNumber;
	firstSale.units_sold = unitSold;
	firstSale.revenue = money;
	cout << "The book number is: " << "\t"<<  firstSale.bookNo << std::endl;
	cout << "The units sold is: " << "\t" << firstSale.bookNo << std::endl;
	cout << "The revenue for book is: " << "\t" << firstSale.bookNo << std::endl;
	return 0;
}