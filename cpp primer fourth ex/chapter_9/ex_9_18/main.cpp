#include <iostream>
#include <list>
#include <deque>
using std::list;using std::deque;
using std::cin;using std::cout;using std::endl;
int main()
{
	int input;
	list<int> lst;
	deque<int> e_deq,o_deq;
	list<int>::const_iterator lit;
	cout<<"请输入一串数字："<<endl;
	while(cin>>input)
	{
		lst.push_back(input);
	}
	lit=lst.begin();
	while(lit!=lst.end())
	{
		if(*lit%2==0)
			e_deq.push_back(*lit);
			else
				o_deq.push_back(*lit);
		++lit;
	}
	cout<<endl<<"偶数为："<<endl;
	for(deque<int>::const_iterator dit=e_deq.begin();dit!=e_deq.end();++dit)
	{
		cout<<*dit<<" ";
	}
	cout<<endl;
	cout<<"奇数为："<<endl;
	for(deque<int>::const_iterator dit=o_deq.begin();dit!=o_deq.end();++dit)
	{
		cout<<*dit<<" ";
	}
	cout<<endl;
	return 0;
}
