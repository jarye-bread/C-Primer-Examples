// Jarye Murphy
// exercise 3.24 from c++ primer 
/*
Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of
adjacent elements. Change your program so that it prints the sum of the first and last
elements, followed by the sum of the second and second-to-last, and so on

Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators.
*/
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::vector;
using std::string;

template<class T>
void printVec(std::vector<T> &myVec)
{
	
	std::cout << "Printing vector" << std::endl;
	std::cout << "/////////////////////////" << "\n";
	for (auto it = myVec.begin(); it!=myVec.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << "/////////////////////////" << "\n";
}
void printAdjacentPairs(std::vector<int> vec)
{
	std::cout << "printing adjacent pairs" << "\n";
	for (auto it = vec.begin(); it!=vec.end(); ++it)
	{
		
		if (it == vec.end()-1) // if are at the last index we dont want to go past the end of vector index
		{ 
			std::cout << "sum " <<*it << "\n";
		}
		else
		{
			
			*it += *(it+1); // add the int of next index 
			std::cout << "sum " << *it << "\n";
		}
		
	}
}
void printFirstLastPairs(vector<int> &vec)
{
	std::cout << "printing first and last pairs" << "\n";
	int sum = 0;
	auto end = vec.end();
	auto mid = vec.begin() + ((vec.end() - vec.begin()) / 2);
	for (auto it = vec.begin(); it != mid; ++it) // since we are adding first and last just have to go half the distance
	{
		auto num = --end;
		sum = *it + *num;
		//sum = vec[i] + vec[vec.size()-(i+1)];
		std::cout << "sum is " << sum << "\n";
	}
}
int main()
{
	std::cout << "enter ints for me to sum the adjacent nums in a vector" << std::endl;
	std::cout << "type 'q' to quit entering numbers" << "\n ";
	int num;
	vector<int> vec;
	while (cin >> num)
	{
		if (num == 'q')
		{
			break;
		}
		vec.emplace_back(num);
	}
	printAdjacentPairs(vec);
	printFirstLastPairs(vec);
	system("Pause");
	return 0;
}