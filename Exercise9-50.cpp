// Jarye Murphy
// exercise 9.50 from c++ primer 
/*
Exercise 9.50: Write a program to process a vector<string>s whose elements rep-
resent integral values. Produce the sum of all the elements in that vector. Change
the program so that it sums of strings that represent floating-point values.
*/
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

int main()
{
	vector<string> vecInts{ "1","2","3","4","10" };
	vector<string> vecFloats{ "1.05","2.43","3.44" };
	int sumInt = 0;
	float sumFloats = 0.00;
	for (auto &elm : vecInts)
	{
		sumInt += std::stoi(elm); // convert to int from string
	}
	for (auto &elm : vecFloats)
	{
		sumFloats += std::stof(elm); // convert to floating from string
	}
	cout << "sum of int vector " << sumInt << " sum of floats " << sumFloats << "\n";
	system("Pause");	   
	return 0;
}

