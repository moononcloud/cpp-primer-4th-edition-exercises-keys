#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::ifstream;using std::vector;using std::string;
using std::endl;using std::cin;using std::cout;using std::endl;
int main()
{
	string file_name;
	string file_line;
	ifstream infile;
	vector<string> line_sepel;
	cout<<"请输入要读取的文件名:"<<endl;
	cin>>file_name;
	infile.open(file_name.c_str());
	if(!infile)
	{
		cout<<"无法读取文件:"<<file_name<<endl;
		return -1;
	}
	
	while(getline(infile,file_line))
	{
		line_sepel.push_back(file_line);
	}
	infile.close();
	infile.clear();
	cout<<"文件："<<file_name<<"的内容为:"<<endl;
	for(vector<string>::const_iterator it=line_sepel.begin();it!=line_sepel.end();it++)
	{
		cout<<*it<<endl;
	}
	cout<<"文件结束"<<endl;
	return 0;
}
