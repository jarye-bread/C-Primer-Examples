// Jarye Murphy
// exercise 7.3 from c++ primer 
/*
Exercise 7.3: Revise your transaction-processing program from § 7.1.1 (p. 256) to use
these members.
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
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data& rhs);
	friend  std::istream &operator >>(std::istream &is, Sales_data &rhs);
};
std::istream &operator >>(std::istream &is, Sales_data &rhs)
{
	double price = 0.0;
	is >> rhs.bookNo >> rhs.units_sold >> price;
	if (is)
	{
		rhs.revenue = rhs.units_sold*price;
	}
	else {
		rhs = Sales_data();
	}
	return is;
}
Sales_data &Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
int main()
{	
	vector<std::string> vecIsbn;
	std::map<std::string, int> mapTrans;
	std::string bookNo = "";
	cout << "enter some books with same isbn and we will combine them " << std::endl;
	Sales_data sale1, sale2;
	cout << "enter book number, followed by units sold, then lastly price" << std::endl;
	cin >> sale1;
	cout << "now enter for book 2" << std::endl;
	cin >> sale2;
	sale1.combine(sale2);
	cout << "after combining units sold " << sale1.units_sold << " revenue " << sale1.revenue << std::endl;
	system("Pause");
	return 0;
}

