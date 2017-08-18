// Jarye Murphy
// exercise 3.35 from c++ primer 
/*
Exercise 3.35: Using pointers, write a program to set the elements in an array to zero.
*/
#include <iostream>

#include <vector>


int main()
{
	int arr[10]; // get an array of ten ints

	int counter = 0;
	for (auto elm : arr)
	{
		elm = counter;
		std::cout << elm << "\n";
		++counter;
	}
	//now to change them all to 0
	// point to the beging of the array arr
	// while arrBegin doesnt equal the &arr[10] last index of arr array
	// increment arr and assin *arrBegin to 0 each iteration
	for (auto arrBegin = arr; arrBegin != &arr[10]; ++arrBegin)
	{
		*arrBegin = 0;
	}
	std::cout << "changing all the values to 0 using pointers" << "\n";
	for (auto elm : arr)
	{
		std::cout << elm << "\n";
	}
	system("Pause");
	return 0;
}