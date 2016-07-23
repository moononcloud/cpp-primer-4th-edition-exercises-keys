#include <iostream>
#include <fstream>
#include <string>
using std::cin;using std::cout;using std::endl;
using std::string;using std::istream;
using std::ifstream;using std::ofstream;
istream &get(istream &file)
{
	string message;
	while(file>>message)
	{
		cout<<message<<endl;
	}
	return file;
}
ofstream &open_file(ofstream &ofile,const string &file_name)
{
	ofile.close();
	ofile.clear();
	ofile.open(file_name.c_str());
	return ofile;
}
ifstream &open_file(ifstream &ifile,const string &file_name)
{
	ifile.close();
	ifile.clear();
	ifile.open(file_name.c_str());
	return ifile;
}

int main()
{
	ifstream io_file;
	string file_name;
	cout<<"请输入要编辑的文件名:"<<endl;
	cin>>file_name;
	if(!open_file(io_file,file_name))
	{
		cout<<"无法打开文件:"<<file_name<<endl;
		return -1;
	}
	get(io_file);
	io_file.close();
	io_file.clear();
	cout<<"文件编辑结束"<<endl;
	return 0;
}
