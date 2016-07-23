#include <iostream>
#include <algorithm>
#include <list>
#include <fstream>
#include <string>
#include <stdexcept>
using std::cout;using std::cin;using std::endl;
using std::ifstream;using std::ofstream;using std::string;using std::list;

ifstream &open_file(ifstream &ifile,const string &file_name)
{
	ifile.close();
	ifile.clear();
	ifile.open(file_name.c_str());
	return ifile;
}
ofstream &save_file(ofstream &ofile,const string &file_name)
{
	ofile.clear();
	ofile.close();
	ofile.open(file_name.c_str());
	return ofile;
}
int main(int argc, char **argv)
{
	ifstream in_file;
	if(argc<2||!open_file(in_file,argv[1]))
	{
		cout<<"未指定文件名或文件打开失败!"<<endl;
		return EXIT_FAILURE;
	}
	else
		cout<<"已读入输入数据。"<<endl;
		string str;
		list<string> lst_strs_seq;
		while(in_file>>str)
		{
			lst_strs_seq.push_back(str);
		}
		cout<<"成功将数据导入到list容器。"<<endl;
		ofstream out_file;
		cout<<"请输入文件名以保存输出结果:"<<endl;
		cin.clear();
		cin>>str;
		if(!save_file(out_file,str))
		{
			cout<<"输入文件名无效！"<<endl;
			return EXIT_FAILURE;
		}
		cout<<"请输入一个字符串来查询该字符串在该文件出现的次数："<<endl;
		while(cin>>str)
		{
			cout<<str<<"\t共出现："<<count(lst_strs_seq.begin(),
			lst_strs_seq.end(),str)<<"次。"<<endl;
			out_file<<str<<"\t共出现："<<count(lst_strs_seq.begin(),
			lst_strs_seq.end(),str)<<"次。"<<endl;
		}
		out_file.clear();
		out_file.close();
		return EXIT_SUCCESS;
}
