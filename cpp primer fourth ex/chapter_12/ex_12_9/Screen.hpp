#ifndef SCREEN_HPP
#define SCREEN_HPP
#include <string>
class Screen
{
public:typedef std::string::size_t index;
	Screen(const index &hith,const index &with,const std::string &str):
	height(hith),width(with),content(str),cursor(0) {}
	
private:
	index cursor,height,width;
	std::string content;
};

#endif // SCREEN_HPP
