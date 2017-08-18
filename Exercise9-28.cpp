// Jarye Murphy
// exercise 9.28 from c++ primer 
/*
Exercise 9.28: Write a function that takes a forward_list<string> and two addi-
tional string arguments. The function should find the first string and insert the
second immediately following the first. If the first string is not found, then insert the
second string at the end of the list.
*/
#include <iostream>
#include <forward_list>
#include <string>
using std::forward_list;
using std::string;
using std::cout;
using std::cin;
void insertToList(forward_list<string> &fls,string str1, string str2)
{
	auto curr = fls.begin();
	auto prev = fls.before_begin();
	while (curr != fls.end())
	{
		if (*curr == str1) // if we found the first string add the second string after it
		{
			fls.insert_after(curr, str2);
			return;
		}
		prev = curr;
		++curr;
	}
	fls.insert_after(prev, str2); // prev is actually the last iterator since fls.end() is off the end of forward list iterators
}
void printList(const forward_list<string> &fls)
{
	auto it = fls.begin();
	while (it != fls.end())
	{
		cout << *it << std::endl;
		++it;
	}
}
int main()
{

	forward_list<string> fls{ "hey","whats", "up", "lets", "see", "in", "here"};
	printList(fls);
	string findStr, insStr;
	cout << "what string do you want to find to put the string after? " << std::endl;
	cin >> findStr;
	cout << "what string do you want to add into the list" << std::endl;
	cin >> insStr;
	
	insertToList(fls, findStr, insStr);
	printList(fls);
	system("Pause");
	return 0;
}

