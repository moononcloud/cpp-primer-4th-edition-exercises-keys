#ifndef EXERICSE_HPP
#define EXERICSE_HPP
#include <string>
#include <istream>

class exericse
{
public:
	exericse(std::string&):num(0){}
	exericse(std::istream&):num(0){}
private:
	int num;



};

#endif // EXERICSE_HPP
