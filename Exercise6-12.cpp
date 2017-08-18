// Jarye Murphy
// exercise 6.12 from c++ primer 
/*
Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210) to use refer-
ences instead of pointers to swap the value of two ints. Which version do you think
would be easier to use and why?
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
// i like passing by refrence rather than pointers therefore i can pass arguments to functions of just the object
// and have swapInts parameters just be a refrence its easier to understand and simplified without as many
// pointers and refrences lurking around in the code and improves readablity. Both are very easy to implement though
void swapInts(int &n1, int &n2)
{
	int temp = 0;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
int main()
{	
	cout << "enter two values to swap with eachother" << std::endl;
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;
	cout << "before swap " << "\t" << "first int " << num1 << " second int " << num2 << std::endl;
	swapInts(num1, num2);
	cout << "after swap " << "\t" << "first int " << num1 << " second int " << num2 << std::endl;
	system("Pause");
	return 0;
}