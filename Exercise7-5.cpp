// Jarye Murphy
// exercise 7.5 from c++ primer 
/*
Exercise 7.5: Provide operations in your Person class to return the name and ad-
dress. Should these functions be const? Explain your choice.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct Person {
	std::string name;
	std::string address;
	std::string getName() const { return this->name; }
	std::string getAddress() const { return this->address; }
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
	cout << "name is: " << p1.getName() << " lives at: " << p1.getAddress() << std::endl;
	system("Pause");
	return 0;
}

