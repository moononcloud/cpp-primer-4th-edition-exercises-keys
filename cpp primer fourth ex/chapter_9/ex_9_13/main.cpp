#include <iostream>
#include <vector>
using std::cin;using std::cout;using std::endl;
using std::vector;
vector<int>::const_iterator find(vector<int>::const_iterator first,vector<int>::const_iterator last,\
const int &value)
{
	while(first!=last)
	{
		if(*first==value)
			return first;
		++first;
	}
	return last;
}

int main()
{
	int value,invalue;
	vector<int> nums;
	cout<<"请输入一串数字:"<<endl;
	while(cin>>invalue)
		nums.push_back(invalue);
	cin.clear();
	cout<<endl;
	cout<<"请输入在这串数字中要寻找的数字："<<endl;
	cin>>value;
	if((find(nums.begin(),nums.end(),value))!=nums.end())
		cout<<"搜索数字存在"<<endl;
		else
			cout<<"搜索数字不存在"<<endl;
	return 0;
}
