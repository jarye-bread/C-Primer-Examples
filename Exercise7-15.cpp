// Jarye Murphy
// exercise 7.15 from c++ primer 
/*
Exercise 7.15: Add appropriate constructors to your Person class.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct Person {
	Person() : name(""), address("") { };
	Person(std::string &n, std::string &add) : name(n), address(add) {};
	Person(std::istream &is);
	std::string name;
	std::string address;
	std::string getName() const { return this->name; }
	std::string getAddress() const { return this->address; }
	
};
std::istream &read(std::istream &is, Person &p1)
{
	std::getline(is, p1.name);
	std::getline(is, p1.address);
	return is;
}
std::ostream &print(std::ostream &os, const Person &p1)
{
	cout << "Name is: " << "\t" << p1.getName() << "\n";
	cout << "Addres : " << "\t" << p1.getAddress() << std::endl;
	return os;
}
Person::Person(std::istream & is)
{
	read(is, *this);
}

int main()
{	
	cout << "Enter a name and address for a person" << std::endl;
	std::string nam; std::string addr;
	Person p1;
	read(cin, p1);
	print(cout, p1);
	system("Pause");
	return 0;
}

