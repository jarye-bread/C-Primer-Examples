// Jarye Murphy
// exercise 9.43 from c++ primer 
/*
Exercise 9.43: Write a function that takes three strings, s, oldVal, and newVal.
Using iterators, and the insert and erase functions replace all instances of oldVal
that appear in s by newVal. Test your function by using it to replace common abbre-
viations, such as “tho” by ”though” and ”thru” by “through”.
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
	auto it = s.begin();
	auto sCtr = oldVal.size()-1; // ctr vairable that has the size of oldVal and increments each iteration 
	while (it != s.end() && sCtr != s.size()) // make sure the sCtr which has oldVal size is not bigger than string size
	{										  // if it does then when making strOldVal you will go past the size of s string and crash
		string strOldVal(it, it + oldVal.size()); // if 
		cout << "strOldVal is: " << strOldVal << "\n";
		system("PAUSE");
		if (strOldVal == oldVal)
		{
			s.erase(it, it + oldVal.size());
			it = s.insert(it, newVal.begin(), newVal.end());
			it += newVal.size();   // get iter at its new spot where you have just added size of newValue
			sCtr += newVal.size(); // 
		}
		else { 
			++it; 
			++sCtr;
		}
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

