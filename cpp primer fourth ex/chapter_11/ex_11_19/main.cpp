#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>
using namespace std;
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
	if(!open_file(infile,argv[1]))
	{
		cout<<"无法打开文件"<<endl;
		return -1;
	}
	istream_iterator<int> input(infile),eof;
	vector<int>  vet_num(input,eof);
	cout<<"已载入数据到vector容器"<<endl;
	cout<<"输出结果:"<<endl;
	ostream_iterator<int> output(cout," ");
	copy(vet_num.rbegin(),vet_num.rend(),output);
	cout<<endl;
	return 0;
}
