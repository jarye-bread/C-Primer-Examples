// Jarye Murphy
// exercise 3.14 from c++ primer 

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
	auto numToAdd = 0;
	std::vector<int> vecOfInts;
	while (std::cin >> numToAdd)
	{
		if (numToAdd == 'q')
		{
			break;
		}
		vecOfInts.emplace_back(numToAdd);
	}
	printVec(vecOfInts);
	system("Pause");
	return 0;
}