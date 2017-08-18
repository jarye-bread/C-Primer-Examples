// Jarye Murphy
// exercise 6.22 from c++ primer 
/*
Exercise 6.22: Write a function to swap two int pointers.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

void swapIntPtr( int *n1,  int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = *n1;
}


int main()
{	
	cout << "Enter 2 numbers and we will swap them: " << std::endl;
	int num1,num2;
	cin >> num1 >> num2;
	cout << "first number: " << num1 << " second number: " << num2 << std::endl;
	swapIntPtr(&num1, &num2);
	cout << "first number: " << num1 << " second number: " << num2 << std::endl;
	
	system("Pause");
	return 0;
}