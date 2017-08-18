// Jarye Murphy
// exercise 7.11 from c++ primer 
/*
Exercise 7.11: Add constructors to your Sales_data class and write a program to
use each of the constructors.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct Sales_data {
	Sales_data() = default;
	Sales_data(std::string &book) : bookNo(book){}
	Sales_data(std::string book, unsigned unitsSold, double price);
	Sales_data(std::istream &is);
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data& rhs);
};
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

Sales_data::Sales_data(std::string book, unsigned unitsSold, double price)
{
	this->bookNo = book;
	this->units_sold = unitsSold;
	this->revenue = this->units_sold*price;
}

Sales_data::Sales_data(std::istream & is)
{
	read(is, *this);
}

Sales_data &Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

int main()
{	
	cout << "this book sold over a million copies at 2.00 " << std::endl;
	Sales_data sale1("ox23", 1000000, 2.00);
	print(cout, sale1);
	cout << "default ctor" << std::endl;
	Sales_data sale2();
	cout << "only book number ctor" << std::endl;
	cout << "enter a isbn" << std::endl;
	std::string bookIsbn;
	cin >> bookIsbn;
	Sales_data sale3(bookIsbn);
	print(cout, sale3);
	cout << "now istream ctor" << std::endl;
	Sales_data sale4(cin);
	print(cout, sale4);
	system("Pause");
	return 0;
}

