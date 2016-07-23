#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::vector;using std::ifstream;using std::string;
using std::cout;using std::cin;using std::endl;
int main()
{
	string word;
	string file_name;
	vector<string> word_ele;
	ifstream ifile;
	cout<<"请输入要读取的文件名称:"<<endl;
	cin>>file_name;
	ifile.open(file_name.c_str());
	if(!ifile)
	{
		cout<<"无法读取文件:"<<endl;
		return -1;
	}
	while(ifile>>word)
	{
		word_ele.push_back(word);
	}
	ifile.close();
	ifile.clear();
	cout<<"文件："<<file_name<<"的内容为:"<<endl;
	for(vector<string>::const_iterator it=word_ele.begin();it!=word_ele.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"文件读取结束"<<endl;
	return 0;
}
