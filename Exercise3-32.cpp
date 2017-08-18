// Jarye Murphy
// exercise 3.32 from c++ primer 
/*
Exercise 3.32: Copy the array you defined in the previous exercise into another array.
Rewrite your program to use vectors.
*/
#include <iostream>
#include <algorithm>
#include <vector>

template<class T>
void printVec(std::vector<T> &vec)
{
	for (auto elm : vec)
	{
		std::cout << elm << "\n";
	}
}
int main()
{
	int arr[10]; // get an array of ten ints
	int arr2[10];

	int counter = 0;
	for (auto elm : arr)
	{
		elm = counter;
		std::cout << elm << "\n";
		++counter;
	}
	std::copy(std::begin(arr), std::end(arr), std::begin(arr2));

	
	std::vector<int> vec(10);
	std::vector<int> vecCopy(10);
	for (int i = 0; i < 10; ++i)
	{
		vec[i] = i;
	}
	auto iterVec = vec.begin();
	for (auto it = vecCopy.begin(); it!=vecCopy.end(); ++it)
	{
		*it = *iterVec;
		++iterVec;
	}

	// print the vectors
	printVec(vec);
	printVec(vecCopy);
	system("Pause");
	return 0;
}