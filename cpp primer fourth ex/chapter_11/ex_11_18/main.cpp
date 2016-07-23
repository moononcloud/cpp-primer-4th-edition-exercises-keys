#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>
#include <iterator>
using namespace std;
ofstream &save_file(ofstream &ofile,const string &file_name)
{
	ofile.close();
	ofile.clear();
	ofile.open(file_name.c_str());
	return ofile;
}
int main(int argc, char **argv)
{
	ofstream outfile,outfile1;
	string s,s1;
	cout<<"请分别对应输入保存偶数和奇数的文件名:"<<endl;
	cin>>s>>s1;
	cin.clear();
	if(!save_file(outfile,s)||!save_file(outfile1,s1))
	{
		cout<<"创建文件失败"<<endl;
		return -1;
	}
	cin.clear();
		cout<<"请输入数字:"<<endl;
	istream_iterator<int> input(cin),eof;
	ostream_iterator<int> out_file1(outfile1," "),out_file(outfile," ");
	while(input!=eof)
	{
		if(*input%2==0)
			*out_file++=*input++;
			else
				*out_file1++=*input++;
	}
	outfile.close();
	outfile.clear();
	outfile1.close();
	outfile1.clear();
	return 0;
}