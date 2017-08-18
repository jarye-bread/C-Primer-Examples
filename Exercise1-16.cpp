// Jarye Murphy
// exercises Section 1.4.3
// exercise 1.16 from c++ primer 

#include <iostream>
int main()
{
	int sum = 0, value = 0;

	std::cout << "input numbers till you want to quit by hitting '-1'" << "\n";
	while (std::cin >> value)
	{
		if (value == -1)
		{
			std::cout << "Sum is: " << sum << std::endl;
			system("Pause");
			exit(1);
		}
		sum += value;
	}
	return 0;
}