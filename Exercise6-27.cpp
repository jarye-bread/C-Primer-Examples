// Jarye Murphy
// exercise 6.27 from c++ primer 
/*
Exercise 6.27: Write a function that takes an initializer_list<int> and pro-
duces the sum of the elements in the list.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
int sumInitList(std::initializer_list<int> ls)
{
	int sum = 0;
	for (auto &elm : ls)
	{
		sum += elm;
	}
	return sum;
}
int main(int argc, char* argv[])
{	
	
	cout << "finding the sum of initializer list! " << std::endl;
	int res = 0;
	std::initializer_list<int> myList{2,10,20,30,40,50};
	
	cout << "sum of list is: " << sumInitList(myList) << "\n";
	system("Pause");
	return 0;
}