// Jarye Murphy
// exercise 5.25 from c++ primer 
/*
Exercise 5.25: Revise your program from the previous exercise to use a try block to
catch the exception. The catch clause should print a message to the user and ask
them to supply a new number and repeat the code inside the try.
*/
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
using std::string;
using std::cout;
using std::cin;

int main()
{
	auto num = 0;
	auto denom = 0;
	cout << "Enter two numbers for a divison operation! " << "\n";
	cout << "Enter a numerator: " << std::endl;
	cin >> num;
	cout << "Enter a denominator: " << std::endl;
	cin >> denom;
	auto answer = 0;
	while (true)
	{
		try {
			if (denom != 0)
			{
				answer = num / denom;
				cout << "the anser is: " << "\t" <<  answer << std::endl;
				break;
			}
			else{ throw std::runtime_error("divide by zero error"); }
			
		}
		catch (std::runtime_error &e)
		{
			cout << e.what() << " Enter a non zero denominator " << std::endl;
		}
		cin >> denom;
	}
	
	/*
	Unhandled exception at 0x00382536 in CppPrimerEx.exe: 0xC0000094: Integer division by zero.
	*/
	system("Pause");
	return 0;
}