// Jarye Murphy
// exercise 9.14 from c++ primer 
/*
Exercise 9.14: Write a program to assign the elements from a list of char * pointers
to C-style character strings to a vector of strings.
*/
#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::cin;
using std::vector;
using std::list;

int main()
{	
	list<char*> ls{ "d","a","d"};
	cout << "list size " <<ls.size() << std::endl;
	vector<std::string> vec;
	cout <<"vec size before assign " << vec.size() << std::endl;
	vec.assign(ls.begin(), ls.end());
	cout << "vec size after assign "<< vec.size() << std::endl;
	system("Pause");
	return 0;
}

