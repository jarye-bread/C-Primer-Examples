// Jarye Murphy
// exercise 9.48 from c++ primer 
/*
Exercise 9.48: Given the definitions of name and numbers on page 365, what does
numbers.find(name) return?
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main()
{
	string numbers("0123456789"), name("r2d2");
	int pos = numbers.find(name);
	cout << "position is: " << pos  << "\n";
	// returns -1 cant find the first occurence of r2d2 in the string 0123456789
	system("Pause");	   
	return 0;
}

