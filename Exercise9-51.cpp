// Jarye Murphy
// exercise 9.51 from c++ primer 
/*
Exercise 9.51: Write a class that has three unsigned members representing year,
month, and day. Write a constructor that takes a string representing a date. Your
constructor should handle a variety of date formats, such as January 1, 1900, 1/1/1900,
Jan 1, 1900, and so on.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

struct Date {
private:
	unsigned _year;
	unsigned _month;
	unsigned _day;
public:
	string getDate();
	Date(string s);
};
string Date::getDate()
{
	string date = std::to_string(_month) + "/" + std::to_string(_day) + "/" + std::to_string(_year);
	return date;
}
Date::Date(const string sDate)
{
	string s = sDate;
	const vector<string> months{ "Jan" ,"Feb" ,"Mar" ,"Apr" ,"May" ,"June" ,"July" ,"Aug" ,"Sep" ,"Oct" ,"Nov" ,"Dec" };

	while (s.find_first_of("/") != -1) // if the ctor has / then as long as it keeps finding them
	{
		auto pos = s.find_first_of("/"); // get the pos of the / in the string
		s.replace(pos,1, " ");			// replace / with " " with a blank space
	}
	
	std::istringstream is(s);
	string strMonth,strDay,strYear;
	is >> strMonth >> strDay >> strYear;
	if(strMonth.find_first_of("abcdefghijklmnopqrstuvwxyz") != -1)
	for (auto it = 0; it != months.size(); ++it)
	{
		if (strMonth.find(months[it]) != -1) // the word we have is month since it has letters in it
		{
			_month = it + 1; // we found the month so set it to the iter plus one since vector starts at 0
		}
	}
	else
	{
		_month = stoi(strMonth);
	}
	_day = stoi(strDay);
	_year = stoi(strYear);
	
}
int main()
{
	Date date1("January 1, 1900");
	Date date2("1/1/1900");
	Date date3("Jan 1, 1900");
	cout << date1.getDate() << "\n";
	cout << date2.getDate() << "\n";
	cout << date3.getDate() << "\n";
	system("Pause");	   
	return 0;
}

