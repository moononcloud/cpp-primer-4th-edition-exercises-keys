#include <iostream>
#include <list>
#include <deque>
#include <string>
#include <algorithm>
using std::find;
using std::list;using std::string;using std::deque;
using std::cin;using std::cout;using std::endl;
void rm_slist(list<string> &lst,const string &rmstr)
{
	list<string>::iterator lit=find(lst.begin(),lst.end(),rmstr);
	lst.erase(lit);
}
void rm_sdequ(deque<string> &deq,const string &rmstr)
{
	deque<string>::iterator dit=find(deq.begin(),deq.end(),rmstr);
	deq.erase(dit);
}
int main()
{
	string input,sch_str;
	list<string> lst_str;
	deque<string> deq_str;
	cout<<"请输入任意字符串:"<<endl;
	while(cin>>input)
	{
		lst_str.push_back(input);
		deq_str.push_back(input);
	}
	cin.clear();
	cout<<"请输入要查找的字符:"<<endl;
	cin>>sch_str;
	rm_slist(lst_str,sch_str);
	rm_sdequ(deq_str,sch_str);
	cout<<"在list内去除搜索值后的结果:"<<endl;
	for(list<string>::const_iterator lit=lst_str.begin();lit!=lst_str.end();++lit)
	{
		cout<<*lit<<" ";
	}
	cout<<endl;	
	cout<<"在deque内去除搜索值后的结果:"<<endl;
	for(deque<string>::const_iterator lit=deq_str.begin();lit!=deq_str.end();++lit)
	{
		cout<<*lit<<" ";
	}
	cout<<endl;
	return 0;
}
