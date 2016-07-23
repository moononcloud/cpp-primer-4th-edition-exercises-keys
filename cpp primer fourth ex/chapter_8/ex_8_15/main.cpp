#include <iostream>
#include <string>
#include <sstream>
using std::istringstream;
using std::string;using std::istream;
using std::cin;using std::cout;using std::endl;
istream &fnc(istream &rd)
{
	string input;
	while(rd>>input)
		{
			cout<<input<<endl;
		}
	return rd;
}
int main()
{
	string line;
	istringstream istrm;
	cout<<"请输入字符："<<endl;
	cin>>line;
	istrm.str(line);
	fnc(istrm);
	return 0;
}