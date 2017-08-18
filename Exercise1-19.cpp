// Jarye Murphy
// exercises Section 1.4.4
// exercise 1.19 from c++ primer 
// revision of 
#include <iostream>

int main()
{
	int min; int max; // init to vairables to 
	bool validInput = false;
	while (!validInput)
	{
		std::cout << "Min number to start a range followed by a max? " << std::endl;
		std::cin >> min >> max;
		if (min < max)
		{
			validInput = true;
		}
		else
		{
			std::cout << "please enter a min number that is smaller than max number" << std::endl;
		}
	}
	std::cout << "Going from a range of: " << min << " To a max of: " << max << std::endl;
	while (min <= max)
	{
		std::cout << min << "\n";
		++min;
	}
	system("Pause");
	return 0;
}