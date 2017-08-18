// Jarye Murphy
// exercise 3.17 from c++ primer 
/*
Exercise 3.17: Read a sequence of words from cin and store the values a vector. Af-
ter you’ve read all the words, process the vector and change each word to uppercase.
Print the transformed elements, eight words to a line.
*/
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::vector;
using std::string;

template<class T>
void printVec(std::vector<T> myVec)
{
	std::cout << "Printing vector 8 words to a line" << std::endl;
	std::cout << "/////////////////////////" << "\n";
	for (int i = 0 ; i !=myVec.size(); ++i)
	{
		
		if (i+1 % 8 == 0 && i!=0) // since at vec[7] is the 8th word we got i+1 to account for that
		{						  // also since we dont want the first word having its own line add i!=0
			std::cout << myVec[i] << std::endl;
		}
		else
		{
			std::cout << myVec[i] << " ";
		}
	}
	std::cout << "/////////////////////////" << "\n";
}
void upperCaseVec(vector<string> &vec)
{
	for (int i = 0; i!=vec.size(); ++i)
	{
		string strUpper = vec[i];
		for (auto &c : strUpper)
		{
			c = toupper(c);
		}
		vec[i] = strUpper;
	}
	
}
int main()
{
	std::cout << "Enter stings and type 'q' to quit and have it all changed to uppercase! " << std::endl;
	string strInput;
	vector<string> myVec;
	while (cin >> strInput)
	{
		if (strInput == "q")
		{
			break;
		}
		myVec.emplace_back(strInput);
	}
	upperCaseVec(myVec);
	printVec(myVec);
	system("Pause");
	return 0;
}