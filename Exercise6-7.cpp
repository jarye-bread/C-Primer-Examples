// Jarye Murphy
// exercise 6.7 from c++ primer 
/*
Exercise 6.7: Write a function that returns 0 when it is first called and then generates
numbers in sequence each time it is called again.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
int callFunc()
{
	static size_t ctr = 0;
	return ctr++;
}
int main()
{	
	int i = 0;
	while (i<10)
	{
		cout << callFunc() << std::endl;
		++i;
	}
	system("Pause");
	return 0;
}