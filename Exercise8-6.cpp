// Jarye Murphy
// exercise 8.6 from c++ primer 
/*
Exercise 8.6: Rewrite the bookstore program from § 7.1.1 (p. 256) to read its transac-
tions from a file. Pass the name of the file as an argument to main (§ 6.2.5, p. 218).
*/
#include <iostream>
#include <vector>
#include <fstream>
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
// my file looks like this format
/*
bookNo, units_sold, price
0x3 20 3.00
0x3 15 2.00
0x2 20 1.00
0x1 2 2.00

*/
int main(int argc, char* argv[])
{	
	std::fstream is(argv[1]);
	std::string bookNo;
	unsigned unitSold;
	double price;
	Sales_data sale1;
	if (is)
	{
		while (!is.eof())
		{
			is >> bookNo;
			is >> unitSold;
			is >> price;
			sale1.bookNo = bookNo;
			sale1.units_sold = unitSold;
			sale1.revenue += sale1.units_sold*price;
			cout << "revenue is: " << sale1.revenue << std::endl;
		}
	}
	system("Pause");
	return 0;
}