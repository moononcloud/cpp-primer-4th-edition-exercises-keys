#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
ifstream &open_file(ifstream &ifile,const string &file_name)
{
	ifile.close();
	ifile.clear();
	ifile.open(file_name.c_str());
	return ifile;
}
ofstream &save_file(ofstream &ofile,const string &file_name)
{
	ofile.close();
	ofile.clear();
	ofile.open(file_name.c_str());
	return ofile;
}
int main(int argc, char **argv)
{
	ifstream in_file;
	if(argc<2||!open_file(in_file,argv[1]))
	{
		cout<<"无法打开文件："<<argv[1]<<endl;
		return -1;
	}
	list<string> lst;
	string str;
	while(in_file>>str)
	{
		lst.push_back(str);
	}
	cout<<endl<<"成功读入数据到list"<<endl;
	vector<string> vet;
	lst.sort();
	unique_copy(lst.begin(),lst.end(),back_inserter(vet));
	cout<<endl<<"成功复制独特字符到vector"<<endl;
	cout<<"请输入输出结果保存文件名:"<<endl;
	cin>>str;
	ofstream out_file;
	if(!save_file(out_file,str))
	{
		cout<<"创建文件失败!"<<endl;
		return -1;
	}
	out_file<<"vector容器内的内容为:"<<endl;
	cout<<"vector容器内的内容为:"<<endl;
	for(vector<string>::const_iterator vit=vet.begin()
	;vit!=vet.end();++vit)
	{
		out_file<<*vit<<' ';
		cout<<*vit<<' ';
	}
	cout<<endl;
	out_file<<endl;
	out_file.close();
	out_file.clear();
	return 0;
}
