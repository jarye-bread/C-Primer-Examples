// Jarye Murphy
// exercise 3.16 from c++ primer 
/*
How many elements are there in each of the following vectors? What
are the values of the elements?
(a) vector<int> v1; (b) vector<int> v2(10);
(c) vector<int> v3(10, 42); (d) vector<int> v4{10};
(e) vector<int> v5{10, 42}; (f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};

Exercise 3.16: Write a program to print the size and contents of the vectors from
exercise3.13. Check whether your answers to that exercisewere correct. If not, restudy
§ 3.3.1 (p. 97) until you understand why you were wrong.
*/
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
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
	vector<int> v1; 
	vector<int> v2(10);
	vector<int> v3(10, 42); 
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 }; 
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };
	std::cout << "vector v1" << std::endl;
	printVec(v1);
	/////////////
	std::cout << "vector v2" << std::endl;
	printVec(v2);
	/////////////
	std::cout << "vector v3" << std::endl;
	printVec(v3);
	/////////////
	std::cout << "vector v4" << std::endl;
	printVec(v4);
	/////////////
	std::cout << "vector v5" << std::endl;
	printVec(v5);
	/////////////
	std::cout << "vector v6" << std::endl;
	printVec(v6);
	/////////////
	std::cout << "vector v7" << std::endl;
	printVec(v7);
	/////////////
	system("Pause");
	return 0;
}