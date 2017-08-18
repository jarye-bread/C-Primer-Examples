// Jarye Murphy
// exercise 9.41 from c++ primer 
/*
Exercise 9.41: Write a program that initializes a string from a vector<char>.
*/
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::cin;

int main()
{
	vector<char*> v{ "heya","whats"};
	auto it = v.begin();
	string s(v[0],3); // grab the first char in vector which is heya and grab 3 chars which is hey leaving 4th char off 
	string s1(v[1], 4); // grab 2nd item in vector and grab 4 chars which is what
	cout << s << " " << s1 <<"\n";
	system("Pause");
	return 0;
}

