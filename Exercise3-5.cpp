// Jarye Murphy
// exercises Section 1.4.4
// exercise 1.19 from c++ primer 
// revision of 
#include <iostream>
#include <string>
int main()
{
	std::cout << "type 'quit' to see final strings all combined " << std::endl;
	std::string strSum, str;
	while (std::getline(std::cin, str))
	{
		if (str == "quit")
		{
			break;
		}
		strSum += str;
		strSum += " ";
		
	}
	std::cout << "final string is: " << "\n";
	std::cout << strSum;
	system("Pause");
	return 0;
}