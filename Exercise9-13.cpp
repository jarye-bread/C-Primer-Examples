// Jarye Murphy
// exercise 9.13 from c++ primer 
/*
Exercise 9.13: How would you initialize a vector<double> from a list<int>?
From a vector<int>? Write code to check your answers.
*/
#include <iostream>
#include <vector>
#include <list>
using std::cout;
using std::cin;
using std::vector;
using std::list;
template<class T>
void printVec(vector<T> &v)
{
	for (auto elm : v)
	{
		cout << elm << std::endl;
	}
}
int main()
{	
	list<int> ls{ 1,2,3,4,5 };
	vector<double> vDoub1(ls.begin(),ls.end());
	printVec(vDoub1);

	vector<int> vInt1{ 1,2,3,4,5 };
	list<int> lsInt(vInt1.begin(), vInt1.end());
	vector<double> vDoubl2(lsInt.begin(),lsInt.end());
	printVec(vDoubl2);
	
	system("Pause");
	return 0;
}

