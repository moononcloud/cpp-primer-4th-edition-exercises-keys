#ifndef C_HPP
#define C_HPP
#include "NoDefault.hpp"
class C
{
public:
	C(int &n):Notype(n) {}
private:
	NoDefault Notype;

};

#endif // C_HPP
