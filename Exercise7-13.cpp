// Jarye Murphy
// exercise 7.13 from c++ primer 
/*
Exercise 7.13: Rewrite the program from page 255 to use the istream constructor.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct Sales_data {
	Sales_data() = default;
	Sales_data(std::string &book) : bookNo(book){}
	Sales_data(std::string book, unsigned unitsSold, double price);
	Sales_data(std::istream &is)
	{
		read(is, *this);
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
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data& rhs);
};

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

Sales_data &Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

int main()
{	
	Sales_data total;
	while (true)
	{
		Sales_data entry(cin);
		total.combine(entry);
		print(cout,total);
	}
	system("Pause");
	return 0;
}

