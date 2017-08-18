/*
Jarye Murphy
C++ primer 5th edition

Exercise 3.23: Write a program to create a vector with ten int elements. Using an
iterator, assign each element a value that is twice its current value. Test your program
by printing the vector.

*/
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using std::vector;
using std::cout;
using std::cin;

template<class T>
void printVec(vector<T> printVec)
{
	for (auto it = printVec.begin(); it != printVec.end(); ++it)
	{
		cout << *it << std::endl;
	}
}
vector<int> popVecRand()
{
	std::srand(std::time(0));
	vector<int> ranVec;
	for (int i = 0; i != 10; ++i)
	{
		int randNum = std::rand();
		ranVec.emplace_back(randNum);
	}
	return ranVec;
}
int main()
{
	vector<int> vec = popVecRand();
	int num;
	cout << "random numbers before doubled: " << std::endl;
	printVec(vec);
	for (auto vIt = vec.begin(); vIt != vec.end(); ++vIt)// iter with vIt through the whole vector
	{
		(*vIt) = (*vIt)*2; // set the new int equal to itself
	}
	cout << "random numbers after doubled: " << std::endl;
	printVec(vec);
	system("Pause");
	return 0;
}
