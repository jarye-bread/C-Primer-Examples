// Jarye Murphy
// exercise 8.13 from c++ primer 
/*
Exercise 8.13: Rewrite the phone number program from this section to read from a
named file rather than from cin.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

struct PersonInfo {
	string name;
	vector<string> phones;
};
int main(int argc, char* argv[])
{	
	string line, word; // will hold a line and word from input, respectively
	vector<PersonInfo> people; // will hold all the records from the input
	std::ifstream is(argv[1]); // add a file for the input
	while (getline(is, line)) { 
		PersonInfo info; // create an object to hold this record’s data
		std::istringstream record(line); // bind record to the line we just read
		record >> info.name; // read the name
		while (record >> word) // read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info); // append this record to people
	}

	system("Pause");
	return 0;
}

