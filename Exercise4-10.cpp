// Jarye Murphy
// exercise 4.10 from c++ primer 
/*
Exercise 4.10: Write the condition for a while loop that would read ints from the
standard input and stop when the value read is equal to 42.
*/
#include <iostream>



int main()
{
	
	auto num = 0;
	std::cout << "input a num enter 42 when done" << "\n";
	while (std::cin >> num) // keep getting input
	{
		if (num == 42)		// if num is == to 42 then stop and exit
		{
			exit(1);		// exit(1) leaves the whole program 
		//  break;			// this would also work
		}
		std::cout << num << "\n";
	}
	system("Pause");
	return 0;
}