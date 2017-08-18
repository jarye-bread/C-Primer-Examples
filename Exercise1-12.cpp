// Jarye Murphy
// exercises Section 1.4.2
// exercise 1.12 from c++ primer 

#include <iostream>

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
	{
		sum += i; // going to start at -100 adding negative numbers to itself at 0
		std::cout << sum << "\n"; // it will adding positive numbers and reach 100 it will even out at a sum of 0
	}
		
	system("Pause");
	return 0;
}