// Jarye Murphy
// exercise 2.41 from c++ primer 
/*
Exercise 2.41: Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22),
§ 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your Sales_data class in
the same file as your main function.

§ 1.5.1 (p. 22)
Exercise 1.21: Write a program that reads two Sales_item objects that have the
same ISBN and produces their sum.
Exercise 1.22: Write a program that reads several transactions for the same ISBN .
Write the sum of all the transactions that were read.

§ 1.5.2 (p. 24)
Exercise 1.23: Write a program that reads several transactions and counts how many
transactions occur for each ISBN .
Exercise 1.24: Test the previous program by giving multiple transactions representing
multiple ISBN s. The records for each ISBN should be grouped together.

§ 1.6 (p. 25)
Exercise 1.25: Using the Sales_item.h header from the Web site, compile and exe-
cute the bookstore program presented in this section.
*/
#include <iostream>
#include <map>
#include <vector>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::string;
using std::vector;

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};
// helper functions for setting up sales data
double priceBook()
{
	cout << "what is the price of the book?" << std::endl;
	double price;
	cin >> price;
	return price;
}
unsigned getUnitsSold()
{
	cout << "How many units are sold?" << std::endl;
	unsigned res;
	cin >> res;
	return res;
}
string getBookNo()
{
	cout << "What is the book number?" << std::endl;
	string res;
	cin >> res;
	return res;
}

//§ 1.5.1 (p. 22)
//Exercise 1.21: Write a program that reads two Sales_item objects that have the
//same ISBN and produces their sum.
void sumSalesData()
{
	Sales_data sale1, sale2;
	cout << "For sale 1: " << std::endl;
	sale1.bookNo = getBookNo();
	sale1.units_sold = getUnitsSold();
	sale1.revenue = priceBook();
	cout << "For sale 2: " << std::endl;
	sale2.units_sold = getUnitsSold();
	int totalSold = sale1.units_sold + sale2.units_sold;
	cout << "books sold: " << totalSold << std::endl;
	cout << "money made: " << totalSold*sale1.revenue << std::endl;
}
//Exercise 1.22: Write a program that reads several transactions for the same ISBN .
//Write the sum of all the transactions that were read.
void sumMultipleSales()
{
	Sales_data sale1;
	int sumOfSold = 0;
	sale1.bookNo = getBookNo();
	//going to read only 5 sales 
	int i = 0;
	while (i < 5)
	{
		sumOfSold += getUnitsSold();
		++i;
	}
	cout << "total sold is " << sumOfSold << std::endl;
}
//§ 1.5.2 (p. 24)
//Exercise 1.23: Write a program that reads several transactions and counts how many
//transactions occur for each ISBN .
void indivIsbnCtr()
{
	Sales_data sale1;
	std::map<string, int> mapSale;
	std::vector<std::string> saleBookStr;
	int i = 0;
	while (i < 5)
	{
		int ctr = 0;
		sale1.bookNo = getBookNo();
		sale1.units_sold = getUnitsSold();
		sale1.revenue = priceBook();
		
		saleBookStr.emplace_back(sale1.bookNo);
		++i;
	}
	std::map<std::string, size_t>  saleMap;
	for (const auto &w : saleBookStr) {
		++saleMap[w];
	}

	for (const auto &pair : saleMap) {
		std::cout << pair.second
			<< " occurrences of ISBN '"
			<< pair.first << "'\n";
	}
}

int main()
{
	sumSalesData();
	sumMultipleSales();
	indivIsbnCtr();
	system("PAUSE");
	return 0;
}