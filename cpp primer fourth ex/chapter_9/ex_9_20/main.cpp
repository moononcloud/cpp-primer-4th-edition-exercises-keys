#include <iostream>
#include <list>
#include <vector>
using std::list;using std::vector;
using std::cin;using std::cout;using std::endl;
bool compare(vector<int> &ivet,list<int> &ilst)
{
	if(ivet.size()==ilst.size())
	{
		vector<int>::const_iterator vit=ivet.begin();
		list<int>::const_iterator lit=ilst.begin();
		while(vit!=ivet.end())
		{
			if(*vit==*lit)
				return true;
				else
					return false;
				++vit;
				++lit;
		}
	}
	return false;
}
int main()
{
	int input;
	list<int> clst;
	vector<int> cvet;
	cout<<"請給向量輸入一串數值:"<<endl;
	while(cin>>input)
	{
		cvet.push_back(input);
	}
	cin.clear();
	cout<<"請給鏈表輸入一串數值:"<<endl;
	while(cin>>input)
	{
		clst.push_back(input);
	}
	if(compare(cvet,clst))
		cout<<"向量與鏈表相等"<<endl;
		else cout<<"向量與鏈表不相等"<<endl;
	return 0;
}
