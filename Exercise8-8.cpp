// Jarye Murphy
// exercise 8.7 from c++ primer 
/*
Exercise 8.8: Revise the program from the previous exercise to append its output to
its given file. Run the program on the same output file at least twice to ensure that the
data are preserved.
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
	std::ifstream is(argv[1]);
	std::ofstream out(argv[2], std::ofstream::app); // change to std::ofstream::app to append the file
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
			out << sale1.bookNo << " "<< sale1.units_sold << " " << price << "\n";
		}
	}
	system("Pause");
	return 0;
}