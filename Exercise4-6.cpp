// Jarye Murphy
// exercise 4.6 from c++ primer 
/*
Exercise 4.6: Write an expression to determine whether an int value is even or odd.
*/
#include <iostream>



int main()
{
	
	auto num = 1;
	std::cout << "input a num to find out if its even or odd?" << "\n";
	std::cin >> num;

	if (num % 2 == 0)
	{
		std::cout << num << " is a even number!" << "\n";
	}
	else
	{
		std::cout << num << " is a odd number!" << "\n";
	}
	system("Pause");
	return 0;
}