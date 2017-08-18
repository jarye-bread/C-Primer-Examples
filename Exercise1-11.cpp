// Jarye Murphy
// exercises Section 1.4.1
// exercise 1.11 from c++ primer 

#include <iostream>

int main()
{
	int min; int max; // init to vairables to 
	std::cout << "Min number to start a range followed by a max? " << std::endl;
	std::cin >> min >> max;
	std::cout << "Going from a range of: " << min << " To a max of: " << max << std::endl;
	while (min <= max)
	{
		std::cout << min << "\n";
		++min;
	}
	system("Pause");
	return 0;
}