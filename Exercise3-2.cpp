// Jarye Murphy
// exercises Section 1.4.4
// exercise 1.19 from c++ primer 
// revision of 
#include <iostream>
#include <string>
int main()
{
	std::cout << "reading an entire line type 'stop' to end this function" << std::endl;
	std::string line;
	while (std::getline(std::cin, line))
	{
		if (line == "stop")
		{
			break;
		}
		std::cout << line << std::endl;
	}
	std::string word;
	while (std::cin >> word)
	{
		std::cout << word << std::endl;
	}
	
	system("Pause");
	return 0;
}