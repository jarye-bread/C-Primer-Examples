// Jarye Murphy
// exercise 7.53 from c++ primer 
/*
Exercise 7.53: Define your own version of Debug.
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct Debug {
public:
	constexpr Debug(bool b = true) : _hw(b), _io(b), _other(b) { }
	constexpr Debug(bool h, bool i, bool o) :
		_hw(h), _io(i), _other(o) { }
		constexpr bool any() { return _hw || _io || _other; }
	void set_io(bool b) { _io = b; }
	void set_hw(bool b) { _hw = b; }
	void set_other(bool b) { _other = b; } 
private:
	bool _hw; // hardware errors other than IO errors
	bool _io; // IO errors
	bool _other; // other errors
};
int main()
{	
	
	system("Pause");
	return 0;
}

