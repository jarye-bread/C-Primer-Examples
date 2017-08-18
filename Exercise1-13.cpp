// Jarye Murphy
// exercises Section 1.4.2
// exercise 1.13 from c++ primer 

#include <iostream>

int main()
{
	// first adding 50 to 100 for loop exercise 1.9
	auto sum = 0;
	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
		std::cout << "Sum is: " << sum << "\n";
	}
	//second problem 10 down to 0 using -- operator
	std::cout << "Counting down from 10 to 0 now " << "\n";
	for (int j = 10; j >= 0; --j)
	{
		std::cout << j << "\n";
	}
	system("Pause");
	return 0;
}