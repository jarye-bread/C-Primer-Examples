// Jarye Murphy
// exercise 3.15 from c++ primer 

#include <iostream>
#include <string>
#include <vector>
template<class T>
void printVec(std::vector<T> myVec)
{
	std::cout << "Printing vector" << std::endl;
	std::cout << "/////////////////////////" << "\n";
	for (auto elm : myVec)
	{
		std::cout << elm << "\n";
	}
	std::cout << "/////////////////////////" << "\n";
}
int main()
{
	std::cout << "add ints and ill put them in a vector type 'q' to end it " << std::endl;
	std::string strToAdd;
	std::vector<std::string> vecOfStrings;
	while (std::getline(std::cin, strToAdd))
	{
		if (strToAdd == "q")
		{
			break;
		}
		vecOfStrings.emplace_back(strToAdd);
	}
	printVec(vecOfStrings);
	system("Pause");
	return 0;
}