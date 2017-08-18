// Jarye Murphy
// exercise 3.20 from c++ primer 
/*
Exercise 3.20: Read a set of integers into a vector. Print the sum of each pair of
adjacent elements. Change your program so that it prints the sum of the first and last
elements, followed by the sum of the second and second-to-last, and so on
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
void printAdjacentPairs(std::vector<int> &vec)
{
	int sum;
	int pos;
	for (int i = 0; i != vec.size(); ++i)
	{
		sum = vec[i]; // set equal to the current index
		if (i == vec.size()-1) // if are at the last index we dont want to go past the end of vector index
		{
			std::cout << sum << "\n";
		}
		else
		{
			pos = i + 1;
			sum += vec[pos]; // add the int of next index 
			std::cout << " " << sum << "\n";
		}
		
	}
}
void printFirstLastPairs(vector<int> &vec)
{
	int sum;
	for (int i = 0; i != vec.size()/2; ++i) // since we are adding first and last just have to go half the distance
	{
		sum = vec[i] + vec[vec.size()-(i+1)];
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