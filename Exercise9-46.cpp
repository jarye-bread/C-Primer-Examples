// Jarye Murphy
// exercise 9.46 from c++ primer 
/*
Exercise 9.46: Rewrite the previous exercise using a position and length to manage
the strings. This time use only the insert function.
*/
#include <iostream>
#include <string>
using std::string;
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
		s.insert(s.size(), " ");
		s.insert(s.size(), suffix);
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

