// Jarye Murphy
// exercise 3.25 from c++ primer 
/*
Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104) using itera-
tors instead of subscripts.
*/
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::vector;
using std::string;

template<class T>
void printVec(std::vector<T> &myVec)
{
	
	std::cout << "Printing vector" << std::endl;
	std::cout << "/////////////////////////" << "\n";
	for (auto it = myVec.begin(); it!=myVec.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << "/////////////////////////" << "\n";
}

int main()
{
	std::cout << "enter some grades for grade cluster" << std::endl;
	int grade;
	vector<unsigned> vec(11,0);
	auto it = vec.begin();
	while (cin >> grade)
	{
		auto itCounter = vec.begin(); // start at the where the vector begins at
		int countInPos = 0;
		if (grade <= '100' && it!=vec.end()-1)
		{
			int iterationsCount = grade / 10;
			for (int i = 0; i != iterationsCount; ++i) // increment the it to correct position of the vector
			{
				++itCounter; 
			}
			*itCounter= ++(*itCounter);// increment the count at the current spot in iter
			++it;					   // increment the it iter which keeps track so we don't go over end of vector
		}
		else
		{
			break;
		}
		
	}
	printVec(vec);
	system("Pause");
	return 0;
}