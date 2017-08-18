// Jarye Murphy
// exercise 6.3 from c++ primer 
/*
Exercise 6.3: Write and test your own version of fact.
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
int factorial(int num)
{
	int ans = 1;
	while (num > 1)
	{
		ans *= num--;
	}
	return ans;
}
int main()
{
	cout << "which number would you like to do a factorial on? " << std::endl;
	int res = 0;
	cin >> res;
	int answer = factorial(res);
	cout << answer << std::endl;
	system("Pause");
	return 0;
}