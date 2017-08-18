// Jarye Murphy
// exercise 7.1 from c++ primer 
/*
Exercise 7.1: Write a version of the transaction-processing program from § 1.6 (p. 24)
using the Sales_data class you defined for the exercises in § 2.6.1 (p. 72).
*/
#include <iostream>
#include <vector>
#include <string>
#include <map>
using std::vector;

using std::cout;
using std::cin;

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{	
	vector<std::string> vecIsbn;
	std::map<std::string, int> mapTrans;
	std::string bookNo = "";
	cout << "type 'quit' when done entering book numbers" << std::endl;
	while (cin >> bookNo)
	{
		if (bookNo == "quit")
		{
			break;
		}
		else
		{
			vecIsbn.emplace_back(bookNo);
		}
	}
	for (const auto &elm : vecIsbn)
	{
		++mapTrans[elm];
	}
	for (const auto &elm : mapTrans)
	{
		cout << elm.first << " has occurred " << elm.second << " times" << std::endl;
	}
	system("Pause");
	return 0;
}