#ifndef NONAME_HPP
#define NONAME_HPP
#include <string>
class NoName
{
public:
	NoName();
	NoName(std::string *);
	NoName(int &);
	NoName(double &);

private: 
 std::string *pstring; 
 int ival; 
 double dval;
};

#endif // NONAME_HPP
