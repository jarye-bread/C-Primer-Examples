// Jarye Murphy
// exercise 6.4 from c++ primer 
/*
Exercise 6.4: Write a function that interacts with the user, asking for a number and
generating the factorial of that number. Call this function from main.
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
void getUserFactorial()
{
	cout << "which number would you like to do a factorial on? " << std::endl;
	int res = 0;
	cin >> res;
	int answer = factorial(res);
	cout << answer << std::endl;
}
int main()
{	
	getUserFactorial();
	system("Pause");
	return 0;
}