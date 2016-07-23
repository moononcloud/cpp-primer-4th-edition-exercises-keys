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
	vector<int>::const_iterator vit=vet_num.end()-1;
	while(vit!=vet_num.begin()-1)
	{
		cout<<*vit<<' ';
		--vit;
	}
	cout<<endl;
	return 0;
}