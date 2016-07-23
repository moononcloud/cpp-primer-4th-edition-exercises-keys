#include <iostream>
#include <list>
#include <vector>
using std::vector;using std::list;
using std::cin;using std::cout;using std::endl;
void rm_vet(vector<int> &vet)
{
	vector<int>::iterator vit=vet.begin();
	while(vit!=vet.end())
	{
		if(*vit%2==0)
			vit=vet.erase(vit);
			else ++vit;
	}
}
void rm_lst(list<int> &lst)
{
	list<int>::iterator lit=lst.begin();
	while(lit!=lst.end())
	{
		if(*lit%2!=0)
			lit=lst.erase(lit);
			else ++lit;
	}
}
int main()
{
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vet;
	list<int> lst;
	for(size_t ix=0;ix!=((sizeof ia)/(sizeof *ia));++ix)
	{
		vet.push_back(ia[ix]);
		lst.push_back(ia[ix]);
	}
	rm_vet(vet);
	rm_lst(lst);
	cout<<"在vector内去除偶数后的结果:"<<endl;
	for(vector<int>::const_iterator vix=vet.begin();vix!=vet.end();++vix)
	{
		cout<<*vix<<" ";
	}
	cout<<endl;
	cout<<"在list内去除奇数后的结果:"<<endl;
	for(list<int>::const_iterator lix=lst.begin();lix!=lst.end();++lix)
	{
		cout<<*lix<<" ";
	}
	cout<<endl;
	return 0;
}
