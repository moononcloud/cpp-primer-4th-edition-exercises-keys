#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using std::cin;using std::cout;using std::endl;
using std::string;using std::vector;
using std::istringstream;
using std::ifstream;
ifstream &op_ifile(ifstream &infile,const string &filename)
{
	infile.close();
	infile.clear();
	infile.open(filename.c_str());
	return infile;
}

int main()
{
	string filename,line,word;
	ifstream infile;
	istringstream instrm;
	vector<string> all_line;
	cout<<"请输入文件名:"<<endl;
	cin>>filename;
	op_ifile(infile,filename);
	if(!infile)
	{
		cout<<"无法打开文件:"<<filename<<endl;
		return -1;
	}
	while(getline(infile,line))
	{
		all_line.push_back(line);
	}
	infile.close();
	infile.clear();
	cout<<"文件:"<<filename<<"的内容是:"<<endl;
	for(vector<string>::const_iterator cvit=\
	all_line.begin();cvit!=all_line.end();++cvit
	)
	{
	instrm.str(*cvit);
	while(instrm>>word)
	{
		cout<<word<<" ";
	}
	instrm.clear();
	cout<<endl;
	}
	
	return 0;
}
