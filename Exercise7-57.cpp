// Jarye Murphy
// exercise 7.57 from c++ primer 
/*
Exercise 7.57: Write your own version of the Account class.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

class Account {
public:
	void calculate() {
		amount += amount
			*
			interestRate;
	}
	double getAmount()const { return amount; }
	static double getRate() { return interestRate; }
	static void setRate(double r) {}
private:
	std::string owner;
	double amount;
	static double interestRate;
};
int main()
{	
	
	system("Pause");
	return 0;
}

