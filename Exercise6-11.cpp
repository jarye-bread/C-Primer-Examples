// Jarye Murphy
// exercise 6.11 from c++ primer 
/*
Exercise 6.11: Write and test your own version of reset that takes a reference.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
void reset(int &num)
{
	num = 0;
}
int main()
{	
	int i = 0;
	while (i<20)
	{
		cout << i << std::endl;
		++i;
	}
	reset(i);
	cout << "reset i and its value is: " << i << std::endl;
	system("Pause");
	return 0;
}