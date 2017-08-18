// Jarye Murphy
// exercise 3.19 from c++ primer 
/*
Exercise 3.19: List three ways to define a vector and give it ten elements, each with
the value 42. Indicate whether there is a preferred way to do so and why.
*/
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::vector;
using std::string;

template<class T>
void printVec(std::vector<T> myVec)
{
	
	std::cout << "Printing vector" << std::endl;
	std::cout << "/////////////////////////" << "\n";
	for (int i = 0 ; i !=myVec.size(); ++i)
	{
		std::cout << myVec[i] << std::endl;
	}
	std::cout << "/////////////////////////" << "\n";
}
int main()
{
	std::cout << "3 ways to get 10 ints of 42 in a vector" << std::endl;
	
	vector<int> vec1 = {42,42,42,42,42,42,42,42,42,42 };
	vector<int> vec2(10, 42);
	vector<int> vec3;
	for (int i = 0; i != 10; ++i)
	{
		vec3.emplace_back(42);
	}
	
	printVec(vec1);
	printVec(vec2);
	printVec(vec3);
	system("Pause");
	return 0;
}