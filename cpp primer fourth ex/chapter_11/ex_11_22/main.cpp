#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
using std::list;using std::vector;
using std::cin;using std::cout;using std::endl;

int main(int argc, char **argv)
{
	const int cnt=10;
	vector<int> vet;
	for(int ix=0;ix!=cnt;++ix)
		vet.push_back(ix);
	list<int> lst(vet.rbegin()+2,vet.rend()-3);
	cout<<"在位置3至位置7中倒序排列为:"<<endl;
	for(list<int>::const_iterator lcit=lst.begin();
	lcit!=lst.end();++lcit)
	{
		cout<<*lcit<<' ';
	}
	cout<<endl;
	return 0;
}
