// Jarye Murphy
// exercise 7.24 from c++ primer 
/*
Exercise 7.24: Give yourScreenclassthreeconstructors: adefaultconstructor; acon-
structor that takes values for height and width and initializes the contents to hold the
given number of blanks; and a constructor that takes values for height, width, and a
character to use as the contents of the screen.
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
	pos getCursor() const { return _cursor; }
	pos getHeight() const { return _height; }
	pos getWidth() const { return _width; }
private:
	pos _cursor = 0;
	pos _height = 0;
	pos _width = 0;
	std::string contents;
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
	
	system("Pause");
	return 0;
}

