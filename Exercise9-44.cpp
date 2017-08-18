// Jarye Murphy
// exercise 9.44 from c++ primer 
/*
Exercise 9.44: Rewrite the previous function using an index and replace.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
string& replaceString(string &s, const string &oldVal, const string &newVal)
{
	if (s.empty() || oldVal.empty()) // if they are empty no need to go through the iter
	{
		return s;
	}
	auto i = 0;
	while (i!= s.size())
	{
		string strOld = s.substr(i, oldVal.size()); // make strOld the substring of poition we currently at to size of oldval
		if (strOld == oldVal)
		{
			s.replace(i, oldVal.size(), newVal);
			i += newVal.size();						// set i to equal size of newVal so we move to current index past the word we just insereted
		}
		else{ ++i; }
		
	}
	return s;
}
int main()
{
	string s = "lets thru thru dog thru";
	s = replaceString(s, "thru", "through");
	cout << s << "\n";
	system("Pause");	   
	return 0;
}

