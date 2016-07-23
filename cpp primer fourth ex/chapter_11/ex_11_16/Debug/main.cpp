//chapter 8 exercise 8.16 with version copy
//and iostream iterator.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
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
ofstream &save_file(ofstream &ofile,const string &file_name)
{
	ofile.close();
	ofile.clear();
	ofile.open(file_name.c_str());
	return ofile;
}
int main(int argc, char **argv)
{
	ifstream infile;
	if(argc<2||!open_file(infile,argv[1]))
	{
		cout<<"无法打开文件！"<<endl;
		return -1;
	}
	istream_iterator<string> input(infile),eof;
	vector<string> vet(input,eof);
	cout<<endl<<"成功读入文本"<<endl;
	ofstream outfile;
	string s;
	cout<<"请输入保存文件名:"<<endl;
	cin>>s;
	cin.clear();
	if(!save_file(outfile,s))
	{
		cout<<"创建文件失败"<<endl;
		return -1;
	}
	ostream_iterator<string> output(cout,"\n"),out_file(outfile,"\n");
	copy(vet.begin(),vet.end(),output);
	copy(vet.begin(),vet.end(),out_file);
	cout<<endl;
	cout<<"读取文本完成"<<endl;
	outfile.close();
	outfile.clear();
	return 0;
}
