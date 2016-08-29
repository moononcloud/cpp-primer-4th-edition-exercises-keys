#include "Screen.hpp"

Screen& Screen::set(char c)
{
	content[cursor]=c;
	return *this;
}
Screen& Screen::move(index r,index c)
{
	index row= r*width;
	cursor=row+c;
	return *this;
}
	Screen::index Screen::get_cursor() const 
 { 
 return cursor; 
 }
