#include <iostream>
#include <list>
#include <string>

using std::string;using std::list;
using std::cin;using std::cout;using std::endl;

int main()
{
	string str;
	list<string> lst;
	cout<<"请输入字符串:"<<endl;
	while(cin>>str)
	{
		lst.push_back(str);
	}
	cout<<"打印字符串:"<<endl;
	for(list<string>::const_iterator vit=lst.begin();vit!=lst.end();++vit)
	{
		cout<<*vit<<" ";
	}
	cout<<endl;
	return 0;
}