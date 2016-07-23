
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <utility>
using namespace std;

int main()
{
	multimap<string,string> authors;
	string author_name,author_works,listname;
	cout<<"请输入列表文件名:";
	cin>>listname;
	cout<<listname<<endl;
	ifstream op_file(listname.c_str());
	if(!op_file)
	{
		cout<<"无法打开该列表:"<<listname<<endl;
		return -1;
	}
	while(op_file>>author_name>>author_works)
	{
		authors.insert(make_pair(author_name,author_works));
	}
		cin.clear();
		author_name.clear();
		cout<<"请输入所要搜寻的作者姓名:";
		cin>>author_name;
		pair< multimap<string,string>::iterator,multimap<
		string,string>::iterator > mpit=authors.equal_range(author_name);
		cout<<author_name<<"的作品清单:"<<endl;
		while(mpit.first!=mpit.second)
		{
			cout<<mpit.first->second<<'\t';
			++mpit.first;
		}
		op_file.close();
		op_file.clear();
		cin.clear();
		cout<<endl;
		cout<<"清除前:"<<endl;
				for(multimap<string,string>::const_iterator mit=
		authors.begin();mit!=authors.end();++mit)
		{
			cout<<mit->first<<':'<<mit->second<<endl;
		}
		cout<<"请输入要清除记录的作者姓名:";
		cin>>author_name;
		mpit=authors.equal_range(author_name);
		authors.erase(mpit.first,mpit.second);
		cout<<endl;
		cout<<"清除后:"<<endl;
				for(multimap<string,string>::const_iterator mit=
		authors.begin();mit!=authors.end();++mit)
		{
			cout<<mit->first<<':'<<mit->second<<endl;
		}
		cout<<"请输入输出结果的目标文件名:"<<endl;
		cin>>listname;
		ofstream out_file(listname.c_str());
		if(!out_file)
		{
			cout<<"无法打开:"<<listname<<"请重新输入:"<<endl;
		}
				for(multimap<string,string>::const_iterator mit=
		authors.begin();mit!=authors.end();++mit)
		{
			out_file<<mit->first<<':'<<mit->second<<endl;
		}
		out_file.close();
		out_file.clear();
		return 0;
}