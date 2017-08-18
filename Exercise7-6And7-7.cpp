// Jarye Murphy
// exercise 7.6 from c++ primer 
/*
Exercise 7.6: Define your own versions of the add, read, and print functions.
Exercise 7.7: Rewrite the transaction-processing program you wrote for the exercises
in § 7.1.2 (p. 260) to use these new functions.
*/
#include <iostream>
#include <string>
using std::cout;
using std::cin;

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data& rhs);
};

Sales_data &Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
std::istream &read(std::istream &is, Sales_data &rhs)
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
std::ostream &print(std::ostream &os, const Sales_data &rhs)
{
	cout << "book isbn: " << "\t" << rhs.isbn() << "\n";
	cout << "units sold:" << "\t" << rhs.units_sold << "\n";
	cout << "revenue :  " << "\t" << rhs.revenue << std::endl;
	return os;
}
int main()
{	
	cout << "enter some books with same isbn and we will combine them " << std::endl;
	Sales_data sale1, sale2;
	cout << "enter book number, followed by units sold, then lastly price" << std::endl;
	read(cin, sale1);
	read(cin, sale2);
	sale1.combine(sale2);
	cout << "after combining " << std::endl;
	print(cout, sale1);
	system("Pause");
	return 0;
}

