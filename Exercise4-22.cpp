// Jarye Murphy
// exercise 4.22 from c++ primer 
/*
Exercise 4.22: Extend the program that assigned high pass, pass, and fail grades to
also assign low pass for grades between 60 and 75 inclusive. Write two versions: One
version that uses only conditional operators; the other should use one or more if
statements. Which version do you think is easier to understand and why?
*/
#include <iostream>
#include <vector>
#include <string>
using std::cout;
int main()
{
	int num = 0;
	std::cout << " add grades type -1 to end" << "\n";
	std::vector<int> vec;
	while (std::cin >> num)
	{
		if (num == -1)
		{
			break;
		}
		vec.emplace_back(num);
	}
	std::string finalGrade;
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		finalGrade = *it > 90 ? "high pass" : (*it < 60) ? "fail" : (*it > 75) ? "pass" : "low pass";
		cout << *it << " " << finalGrade << "\n";
	}
	// the if statments take up more lines of code but a quick glance and its much easier
	// to decipher what is going on
	for (auto it = vec.begin(); it != vec.end(); ++it)
	{
		if (*it > 90)
		{
			finalGrade = "high pass";
		}
		else if (*it > 75)
		{
			finalGrade = "pass";
		}
		else if (*it < 60)
		{
			finalGrade = "fail";
		}
		else
		{
			finalGrade = "low pass";
		}

		cout << *it << " " << finalGrade << "\n";
	}
	system("Pause");
	return 0;
}