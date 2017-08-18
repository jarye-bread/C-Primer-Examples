// Jarye Murphy
// exercise 9.32 from c++ primer 
/*
Exercise 9.32: In the program onpage 354 would it be legal to write the call to insert
as follows? If not, why not?
iter = vi.insert(iter,
* iter++);

vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
auto iter = vi.begin(); // call begin , not cbegin because we’re changing vi
while (iter != vi.end()) {
if ( * iter % 2) {
iter = vi.insert(iter, * iter); // duplicate the current element
iter += 2; // advance past this element and the one inserted before it
} else
iter = vi.erase(iter); // remove even elements
// don’t advance the iterator; iter denotes the element after the one we erased
}
*/
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;

int main()
{
	//iter = vi.insert(iter,*iter++); no this gives you an error also you are derefrencing the pointer and incrementing it
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin(); // call begin , not cbegin because we’re changing vi
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter); 
			
			iter += 2; // advance past this element and the one inserted before it
		}
		else
			iter = vi.erase(iter); // remove even elements
								   // don’t advance the iterator; iter denotes the element after the one we erased
	}
	for (auto &elm : vi)
	{
		cout << elm << "\n";
	}
	system("Pause");
	return 0;
}

