#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <fstream>
using namespace std;
void  choosebook(vector<string> &books,set<string> &read_title,string &nextbook)
{
	for(vector<string>::const_iterator vit=books.begin();
	vit!=books.end();++vit)
	{
		if(nextbook==*vit)
		{
			char flag;
			cout<<"这本书读完了吗？Y/N:";
			cin>>flag;
			cout<<flag<<endl;
			if(flag=='y'||flag=='Y')
			{
				read_title.insert(nextbook);
			}
			else if(flag=='n'||flag=='N')
			{
				read_title.erase(nextbook);
			}
			break;
		}
	}
}
int main()
{
	int Time;
	string booktitle,infilename,select_book;
	vector<string> books;
	set<string> read_title;
	cout<<"请输入书单文件名:"<<endl;
	cin>>infilename;
	cin.clear();
	ifstream in_file(infilename.c_str());
	if(!in_file)
	{
		cout<<"无法打开文件:"<<infilename<<endl;
		return -1;
	}
	while(in_file>>booktitle)
	{
		books.push_back(booktitle);
	}
	in_file.close();
	in_file.clear();
	cout<<"请输入你要读的书籍名称:"<<endl;
	while(cin>>select_book)
	{
		choosebook(books,read_title,select_book);
			cout<<"请输入你要读的书籍名称:"<<endl;
	}
	cin.clear();
	cout<<"请输入你的阅读时间：";
	cin>>Time;
	cout<<Time<<"个月"<<endl;
	if(Time>=6)
	{
		for(vector<string>::const_iterator vit=books.begin();
		vit!=books.end();++vit)
			if(read_title.count(*vit))
				cout<<"已读书籍标题:"<<*vit<<endl;
				else 
					cout<<"未读书籍标题:"<<*vit<<endl;
	}
	cout<<endl;
	return 0;
}
