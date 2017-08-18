// Jarye Murphy
// exercise 6.51 from c++ primer 
/*
Exercise 6.51: Write all four versions of f. Each function should print a distinguish-
ing message. Check your answers for the previous exercise. If your answers were
incorrect, study this section until you understand why your answers were wrong.
*/
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

void f()
{
	cout << "default f() " << std::endl;
}
void f(int)
{
	cout << "1 int " << std::endl;
}
void f(int, int)
{
	cout << "2 ints " << std::endl;
}
void f(double, double)
{
	cout << "2 doubles " << std::endl;
}
// without this function for f(2.56,42) could have 2 functions it applies
void f(double, int)
{
	cout << "1 double 1 int" << std::endl;
}
int main()
{	
	cout << "Printing various f() fucntions" << std::endl;
	f(2.56, 42); // a this is ambiguous call and could be 2 doubles and 2 ints
	f(42);		 // b
	f(42, 0);	 // c
	f(2.56, 3.14); // d
	system("Pause");
	return 0;
}