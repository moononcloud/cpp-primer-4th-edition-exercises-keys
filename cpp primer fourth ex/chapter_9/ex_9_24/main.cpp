#include <iostream>
#include <vector>
using std::vector;
using std::cin;using std::cout;using std::endl;
vector<int>::const_reference fetch_at(const vector<int> &vet)
{
	return vet.at(0);
}
vector<int>::const_reference fetch_sub(const vector<int> &vet)
{
	return vet[0];
}
vector<int>::const_reference fetch_fro(const vector<int> &vet)
{
	return vet.front();
}
vector<int>::const_reference fetch_beg(const vector<int> &vet)
{
	return *vet.begin();
}
int main()
{
	int input;
	vector<int> vet;
	cout<<"请输入一串整数:"<<endl;
	while(cin>>input)
	{
		vet.push_back(input);
	}
	cout<<"以at方式输出第一个数字:"<<fetch_at(vet)<<endl;
	cout<<"以sub方式输出第一个数字:"<<fetch_sub(vet)<<endl;
	cout<<"以fro方式输出第一个数字:"<<fetch_fro(vet)<<endl;
	cout<<"以beg方式输出第一个数字:"<<fetch_beg(vet)<<endl;
	return 0;
}
