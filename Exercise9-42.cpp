// Jarye Murphy
// exercise 9.42 from c++ primer 
/*
Exercise 9.42: Given that you want to read a character at a time into a string, and
you know that you need to read at least 100 characters, how might you improve the
performance of your program?
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
	string sentence;
	sentence.reserve(100); // reserve 100 characters for a string so its not always allocating more space
						   // when it uses up the allocated space, since you know you want 100 chars
	system("Pause");	   // just reserve 100 right off the begining before you enter chars into the string
	return 0;
}

