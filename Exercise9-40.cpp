// Jarye Murphy
// exercise 9.40 from c++ primer 
/*
Exercise 9.40: If the program in the previous exercise reads 256 words, what is its
likely capacity after it is resized? What if it reads 512? 1,000? 1,048?

// likely will crash because it will ask for an absurd amount of memory at even 256
since its compounding each iteration its grabbing its current size and asking for that size 
plus half of that number and that its new size
*/
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::cin;

int main()
{
	vector<int> svec;
	svec.reserve(1024);
	int i = 1;
	while (i != 256)
	{
		svec.push_back(i);
		
		// everytime you enter a result it goes into the vector
		// svec resizes after every entry to the current size + 1/2 of size
		// once the size gets to high and reaches pase the reserve of 1024 it starts allocating
		// more and more space
		svec.resize(svec.size() + svec.size() / 2);
		cout << "size is " << svec.size() << " capacity " << svec.capacity() << "\n";
	}
		
	
	system("Pause");
	return 0;
}

