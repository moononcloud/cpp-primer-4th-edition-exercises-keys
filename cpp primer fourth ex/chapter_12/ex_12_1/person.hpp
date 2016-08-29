#ifndef _PERSON_H
#define _PERSON_H
#include <string>
#include <iostream>
using std::string;
class person
{
public:
	person(const string &na,const string &addr):name(na),addrss(addr){}
	string name_info() const {return name;}
	string address_info() const {return address;}
private:
	string name,address;
};
#endif