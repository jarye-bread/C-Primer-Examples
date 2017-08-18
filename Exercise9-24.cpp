// Jarye Murphy
// exercise 9.24 from c++ primer 
/*
Exercise 9.24: Write a program that fetches the first element in a vector using at,
the subscript operator, front, and begin. Test your program on an empty vector
*/
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;


int main()
{
	vector<int> vec{};
	vector<int> vec2{ 1,2,3 };
	// on empty vectors will throw erros since its accessing elements in a  vector with a size of 0
	cout << "vector first element using begin: " << *vec.begin() << "\n";
	cout << "vector first element using front: " << vec.front() << "\n";
	cout << "vector first element using subscript " << vec.at(0) << "\n";
	system("Pause");
	return 0;
}

