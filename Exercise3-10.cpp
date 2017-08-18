// Jarye Murphy
// exercises Section 1.4.4
// exercise 1.19 from c++ primer 
// revision of 
#include <iostream>
#include <string>
#include <cctype> // for isalpha
int main()
{
	std::cout << "type string and I will take away all punctuation " << std::endl;
	std::string str;
	while (std::getline(std::cin, str)) // if you try to use while(std::cin >> str) it wont pick up whitespaces like spaces
	{									// so formatting will look messed up
		for (auto c : str)
		{
			if (bool(ispunct(c)) == true)
			{
				c = ' ';
			}
			std::cout << c;
		}
	}
	
	system("Pause");
	return 0;
}