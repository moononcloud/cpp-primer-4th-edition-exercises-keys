#include <iostream>
#include <bitset>
#include <stdexcept>
using std::bitset;using std::cin;using std::cout;using std::endl;

int main()
{
	bitset<33> b;
	b.set();
	try 
	{
		unsigned long ulval=b.to_ulong();
	}
	catch(std::runtime_error err)
	{
		cout<<err.what()<<endl;
	}
	return 0;
}
