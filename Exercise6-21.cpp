// Jarye Murphy
// exercise 6.21 from c++ primer 
/*
Exercise 6.21: Write a function that takes an int and a pointer to an int and returns
the larger of the int value or the value to which the pointer points. What type should
you use for the pointer?
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
//postcondition if the two values are equal returns -1
int biggerNumber(const int n1, const int *n2)// use const because we aren't changing the value of the variables
{											 // just seeing which is bigger and returning it
	if (n1 > *n2)
	{
		return n1;
	}
	else if (n1 < *n2)
	{
		return *n2;
	}
	else
	{
		return -1;
	}
}

int main()
{	
	cout << "Enter a number and we will find out which is bigger: " << std::endl;
	int num1,num2;
	cin >> num1 >> num2;
	cout << "first number: " << num1 << " second number: " << num2 << std::endl;
	cout << "bigger number is: " << biggerNumber(num1, &num2) << "\n";
	
	system("Pause");
	return 0;
}