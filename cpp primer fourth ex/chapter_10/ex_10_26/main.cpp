#include <iostream>
#include <map>
#include <string>
#include <fstream>
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
		multimap<string,string>::iterator authors_it=authors.find(
		author_name);
		typedef multimap<string,string>::size_type sz_type;
		sz_type entries=authors.count(author_name);
		cout<<author_name<<"的作品清单:"<<endl;
		for(sz_type cnt=0;cnt!=entries;++cnt,++authors_it )
		{
			cout<<authors_it->second<<'\t';
		}
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
		authors.erase(author_name);
		cout<<"清除后:"<<endl;
				for(multimap<string,string>::const_iterator mit=
		authors.begin();mit!=authors.end();++mit)
		{
			cout<<mit->first<<':'<<mit->second<<endl;
		}
		return 0;
}
