// Jarye Murphy
// exercise 7.31 from c++ primer 
/*
Exercise 7.31: Define a pair of classes X and Y, in which X has a pointer to Y, and Y has
an object of type X.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct X {
	(Y)* ptrY;
};
struct Y {
	X obj;
};
int main()
{

	system("Pause");
	return 0;
}

