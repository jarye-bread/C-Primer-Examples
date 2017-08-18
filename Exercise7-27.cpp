// Jarye Murphy
// exercise 7.27 from c++ primer 
/*
Exercise 7.27: Add the move, set, and display operations to your version of
Screen. Test your class by executing the following code:
Screen myScreen(5, 5, ’X’);
myScreen.move(4,0).set(’#’).display(cout);
cout << "\n";
myScreen.display(cout);
cout << "\n";
*/
#include <iostream>
#include <string>

using std::cout;
using std::cin;

struct Screen {
	typedef std::string::size_type pos;
public:
	Screen() = default;
	Screen(pos ht, pos wd) : _height(ht), _width(wd) {};
	Screen(pos ht, pos wd, char c) : _height(ht), _width(wd),
		contents(ht*wd, c) {};
	inline char get(pos ht, pos wd) const; 
	Screen &move(pos r, pos c);
	inline Screen &Screen::set(char c)
	{
		contents[_cursor] = c; // set the new value at the current cursor location
		return
			*this;
		// return this object as an lvalue
	}
	inline Screen &Screen::set(pos r, pos col, char ch)
	{
		contents[r * _width + col] = ch; // set specified location to given value
		return
			*this;
		// return this object as an lvalue
	}
	Screen &display(std::ostream &os)
	{
		do_display(os); return
			*this;
	}
	const Screen &display(std::ostream &os) const
	{
		do_display(os); return
			*this;
	}
	pos getCursor() const { return _cursor; }
	pos getHeight() const { return _height; }
	pos getWidth() const { return _width; }
private:
	pos _cursor = 0;
	pos _height = 0;
	pos _width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};
inline // we can specify inline on the definition
Screen &Screen::move(pos r, pos c)
{
	pos row = r*_width; 
	_cursor = row + c; 
	return
		*this;
}
char Screen::get(pos r, pos c) const // declared as inline in the class
{
	pos row = r*_width; // compute row location
	return contents[row + c]; // return character at the given column
}
int main()
{	
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
	system("Pause");
	return 0;
}

