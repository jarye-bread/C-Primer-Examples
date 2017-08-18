// Jarye Murphy
// exercise 7.4 from c++ primer 
/*
Exercise 7.4: Write a class named Person that represents the name and address of
a person. Use a string to hold each of these elements. Subsequent exercises will
incrementally add features to this class.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct Person {
	std::string name;
	std::string address;
};

int main()
{	
	cout << "Enter a name and address for a person" << std::endl;
	std::string nam; std::string addr;
	std::getline(cin, nam);
	std::getline(cin , addr);
	Person p1;
	p1.name = nam;
	p1.address = addr;
	cout << "name is: " << p1.name << " lives at: " << p1.address << std::endl;
	system("Pause");
	return 0;
}

