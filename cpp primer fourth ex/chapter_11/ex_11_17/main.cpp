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
	istream_iterator<int> input(infile),eof;
	vector<int> vet(input,eof);
	cout<<endl<<"已初始化整数型vector"<<endl;
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
	ostream_iterator<int> output(cout," "),out_file(outfile," ");
	copy(vet.begin(),vet.end(),output);
	copy(vet.begin(),vet.end(),out_file);
	cout<<endl;
	cout<<"读取数据完成"<<endl;
	outfile.close();
	outfile.clear();
	return 0;
}