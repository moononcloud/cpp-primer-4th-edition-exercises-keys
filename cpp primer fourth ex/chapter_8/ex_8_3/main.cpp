#include <iostream>
#include <string>
using std::string;using std::istream;
using std::cin;using std::cout;using std::endl;
istream &fnc(istream &rd)
{
	string input;
	while(rd>>input,!rd.eof())
		{
			cout<<input<<endl;
		}
	rd.clear();
	return rd;
}


int main()
{
	fnc(cin);
	return 0;
}
