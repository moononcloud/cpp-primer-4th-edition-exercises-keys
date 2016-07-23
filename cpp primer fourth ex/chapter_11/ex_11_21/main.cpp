#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iterator>
#include <string>
using std::cin;using std::cout;using std::endl;using std::string;
using std::list;using std::ifstream;using std::istream;
using std::istream_iterator;
ifstream &open_file(ifstream &ifile,const string &file_name)
{
	ifile.close();
	ifile.clear();
	ifile.open(file_name.c_str());
	return ifile;
}
int main(int argc, char **argv)
{
	ifstream infile;
	if(argc<2||!open_file(infile,argv[1]))
	{
		cout<<"无法打开文件"<<endl;
		return -1;
	}
	istream_iterator<int> input(infile),eof;
	list<int> lst(input,eof);
	list<int>::const_reverse_iterator rlcit=find(lst.rbegin(),lst.
	rend(),0);
	list<int>::const_iterator lcit=rlcit.base();
	cout<<"最后一个0后面的数字为:"<<endl;
	while(lcit!=lst.end())
	{
		cout<<*lcit<<' ';
		++lcit;
	}
	cout<<endl;
	return 0;
}
