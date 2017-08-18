// Jarye Murphy
// exercise 9.45 from c++ primer 
/*
Exercise 9.45: Write a funtion that takes a string representinga name and two other
strings representing a prefix, such as “Mr.” or “Ms.” and a suffix, such as “Jr.” or
“III”. Using iterators and the insert and append functions, generate and return a
new string with the suffix and prefix added to the given name.
*/
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::cin;
string& addPrefixSuffix(string &s, const string &prefix, const string &suffix)
{
	if (s.empty() || prefix.empty() || suffix.empty()) // if they are empty no need to go through the iter
	{
		return s;
	}
	// adding suffix
	if (!suffix.empty())
	{
		s.append( " ");
		s.append( suffix);
	}
	// adding prefix
	if (!prefix.empty())
	{
		s.insert(0, prefix);
	}
	
	return s;
}
int main()
{
	string s = "King";
	s = addPrefixSuffix(s, "Mr.", "III");
	cout << s << "\n";
	system("Pause");	   
	return 0;
}

