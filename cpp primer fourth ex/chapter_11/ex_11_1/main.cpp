#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <stdexcept>
using std::cout;using std::cin;using std::endl;
using std::ifstream;using std::ofstream;using std::string;using std::vector;

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
		int numbers;
		vector<int> vet_ints_seq;
		while(in_file>>numbers)
		{
			vet_ints_seq.push_back(numbers);
		}
		cout<<"成功将数据导入到vector容器。"<<endl;
		ofstream out_file;
		cout<<"请输入文件名以保存输出结果:"<<endl;
		string s;
		cin.clear();
		cin>>s;
		if(!save_file(out_file,s))
		{
			cout<<"输入文件名无效！"<<endl;
			return EXIT_FAILURE;
		}
		cout<<"请输入一个数字来查询该数字在该文件出现的次数："<<endl;
		while(cin>>numbers)
		{
			cout<<numbers<<"\t共出现："<<count(vet_ints_seq.begin(),
			vet_ints_seq.end(),numbers)<<"次。"<<endl;
			out_file<<numbers<<"\t共出现："<<count(vet_ints_seq.begin(),
			vet_ints_seq.end(),numbers)<<"次。"<<endl;
		}
		out_file.clear();
		out_file.close();
		return EXIT_SUCCESS;
}
