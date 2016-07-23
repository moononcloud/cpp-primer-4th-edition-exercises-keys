#include <iostream>
#include <string>
#include <fstream>

using std::ifstream;
using std::string;using std::istream;
using std::cin;using std::cout;using std::endl;
istream &fnc(istream &rd)
{
	string input;
	while(rd>>input)
		{
			cout<<input;
		}
	rd.clear();
	return rd;
}


int main()
{
	ifstream fin("README");
	if(fin)
	{
		fnc(fin);
		fin.close();
	}
	else
	{
		cout<<"can't open file 'README"<<endl;
		return -1;
	}
	
	return 0;
}