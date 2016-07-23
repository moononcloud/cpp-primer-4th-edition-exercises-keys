#include <iostream>
#include <vector>
using std::cin;using std::cout;using std::endl;
using std::vector;
bool find(vector<int> &nums,int &value)
{
	vector<int>::const_iterator vit=nums.begin();
	while(vit!=nums.end())
	{
		if(*vit==value)
			return true;
			vit++;
	}
	return false;
}

int main()
{
	int value,invalue;
	vector<int> nums;
	cout<<"请输入一串数字:"<<endl;
	while(cin>>invalue)
		nums.push_back(invalue);
	cout<<"请输入在这串数字中要寻找的数字："<<endl;
	cin>>value;
	if(find(nums,value))
	cout<<"所搜寻数字存在"<<endl;
	else
		cout<<"未找到指定数字"<<endl;
	return 0;
}
