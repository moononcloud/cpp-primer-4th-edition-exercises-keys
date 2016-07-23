#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iterator>
using std::cin;using std::cout;using std::endl;
using std::vector;using std::list;using std::string;
using std::ofstream;using std::ifstream;
ifstream &open_file(ifstream &ifile,const string &file_name)
{
	ifile.close();
	ifile.clear();
	ifile.open(file_name.c_str());
	return  ifile;
}
ofstream &save_file(ofstream &ofile,const string &file_name)
{
	ofile.close();
	ofile.clear();
	ofile.open(file_name.c_str());
	return  ofile;
}
int main(int argc, char **argv)
{
	ifstream in_file;
	if(argc<2||!open_file(in_file,argv[1]))
	{
		cout<<"无法打开文件："<<argv[1]<<endl;
		return -1;
	}
	vector<int> vet_ints;
	int numbers;
	while(in_file>>numbers)
	{
		vet_ints.push_back(numbers);
	}
	list<int> lst_ints,lst_ints1,lst_ints2;
	replace_copy(vet_ints.begin(),vet_ints.end(),
	back_inserter(lst_ints),3,150);
	replace_copy(vet_ints.begin(),vet_ints.end(),front_inserter
	(lst_ints1),3,150);
	replace_copy(vet_ints.begin(),vet_ints.end(),inserter(lst_ints2
	,lst_ints2.begin()),3,150);
	string s;
	cout<<"请输入输出结果文件名:"<<endl;
	cin>>s;
	ofstream out_file;
	if(!save_file(out_file,s))
	{
		cout<<"创建文件失败！"<<endl;
		return -1;
	}
	out_file<<"vector容器内的数据："<<endl;
	cout<<"vector容器内的数据："<<endl;
	for(vector<int>::const_iterator vit=vet_ints.begin();
	vit!=vet_ints.end();++vit)
	{
		out_file<<*vit<<' ';
		cout<<*vit<<' ';
	}
	cout<<endl<<"list容器替换后的内容:"<<endl;
	out_file<<endl<<"llist容器替换后的内容:"<<endl;
		for(list<int>::const_iterator vit=lst_ints.begin();
	vit!=lst_ints.end();++vit)
	{
		out_file<<*vit<<' ';
		cout<<*vit<<' ';
	}
		cout<<endl<<"list1容器替换后的内容:"<<endl;
	out_file<<endl<<"llist1容器替换后的内容:"<<endl;
		for(list<int>::const_iterator vit=lst_ints1.begin();
	vit!=lst_ints1.end();++vit)
	{
		out_file<<*vit<<' ';
		cout<<*vit<<' ';
	}
		cout<<endl<<"list2容器替换后的内容:"<<endl;
	out_file<<endl<<"llist2容器替换后的内容:"<<endl;
		for(list<int>::const_iterator vit=lst_ints2.begin();
	vit!=lst_ints2.end();++vit)
	{
		out_file<<*vit<<' ';
		cout<<*vit<<' ';
	}
	cout<<endl;
	out_file.close();
	out_file.clear();
	return 0;
}
