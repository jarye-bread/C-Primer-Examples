// Jarye Murphy
// exercises Section 1.4.1
// exercise 1.10 from c++ primer 

#include <iostream>

int main()
{
	int counter = 10; // start at 10
	while (counter >= 0) // count down to 0
	{
		std::cout << counter << "\n";
		--counter;
	}
	system("Pause");
	return 0;
}