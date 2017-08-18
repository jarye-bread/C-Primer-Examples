// Jarye Murphy
// exercise 6.10 from c++ primer 
/*
Exercise 6.10: Using pointers, write a function to swap the values of two ints. Test
the function by calling it and printing the swapped values.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
void swapInts(int *n1, int *n2)
{
	int temp = 0;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main()
{	
	cout << "enter two values to swap with eachother" << std::endl;
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;
	cout << "before swap " << "\t" << "first int " << num1 << " second int " << num2 << std::endl;
	swapInts(&num1, &num2);
	cout << "after swap " << "\t" << "first int " << num1 << " second int " << num2 << std::endl;
	system("Pause");
	return 0;
}