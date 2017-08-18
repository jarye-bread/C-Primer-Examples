// Jarye Murphy
// exercises Section 1.4.1
// exercise 1.9 from c++ primer 

#include <iostream>

int main()
{
	int counter = 50; int sum = 0;
	while (counter <= 100)
	{
		sum += counter;
		std::cout << "Sum is: " << sum << "\n";
		++counter;
	}
	system("Pause");
	return 0;
}