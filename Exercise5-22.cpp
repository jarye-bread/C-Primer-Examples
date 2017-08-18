// Jarye Murphy
// exercise 5.22 from c++ primer 
/*
Exercise 5.22: The last example in this section that jumped back to begin could be
better written using a loop. Rewrite the code to eliminate the goto.
*/
#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cout;
using std::cin;

int main()
{
	/*
	begin:
	int sz = std::get_size();
	if (sz <= 0) {
	goto begin;
	}
	*/
	auto sz = 0;
	while (sz <= 0)
	{
		cout << "size is? " << std::endl;
		cin >> sz;
	}
	system("Pause");
	return 0;
}