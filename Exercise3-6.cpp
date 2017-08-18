// Jarye Murphy
// exercises Section 1.4.4
// exercise 1.19 from c++ primer 
// revision of 
#include <iostream>
#include <string>
#include <cctype> // for isalpha
int main()
{
	std::cout << "type string and I will replace it with 'x' " << std::endl;
	std::string str;
	while (std::getline(std::cin, str)) // if you try to use while(std::cin >> str) it wont pick up whitespaces like spaces
	{									// so formatting will look messed up
		for (auto c : str)
		{
			if (bool(isalpha(c)) == true)
			{
				c = 'x';
			}
			
			std::cout << c;
		}
	}
	
	system("Pause");
	return 0;
}