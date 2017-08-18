// Jarye Murphy
// exercises Section 1.4.4
// exercise 1.19 from c++ primer 
// revision of 
#include <iostream>
#include <string>
int main()
{
	std::cout << "reading two strings " << std::endl;
	std::string str1, str2;
	std::getline(std::cin, str1);
	std::getline(std::cin, str2);
	auto str1Size = str1.size();
	auto str2Size = str2.size();
	if (str1Size == str2Size)
	{
		std::cout << "\n" << str1 << "\t" << str2 << std::endl;
		std::cout << "string 1 and string 2 are equal length" << std::endl;
	}
	else
	{
		if (str1Size > str2Size)
		{
			std::cout << "string 1 is bigger than string 2 " << std::endl;
		}
		else
		{
			std::cout << "string 2 is bigger than string 1 " << std::endl;
		}
	}
	system("Pause");
	return 0;
}