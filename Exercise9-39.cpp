// Jarye Murphy
// exercise 9.39 from c++ primer 
/*
Exercise 9.39: Explain what the following program fragment does:
vector<string> svec;
svec.reserve(1024);
string word;
while (cin >> word)
svec.push_back(word);
svec.resize(svec.size()+svec.size()/2);
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
	vector<string> svec;
	svec.reserve(1024);
	string word;
	while (cin >> word)
	{
		svec.push_back(word);
		
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

