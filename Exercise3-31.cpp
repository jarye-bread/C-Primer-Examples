// Jarye Murphy
// exercise 3.31 from c++ primer 
/*
Exercise 3.31: Write a program to define an array of ten ints. Give each element the
same value as its position in the array.
*/
#include <iostream>


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
	system("Pause");
	return 0;
}