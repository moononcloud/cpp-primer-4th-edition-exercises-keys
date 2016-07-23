#include <iostream>
#include <vector>
#include <string>
using std::string;using std::vector;
using std::cin;using std::cout;using std::endl;

int main()
{
	string str;
	vector<string> vet;
	cout<<"请输入字符串:"<<endl;
	while(cin>>str)
	{
		vet.push_back(str);
	}
	cout<<"打印字符串:"<<endl;
	for(vector<string>::const_iterator vit=vet.begin();vit!=vet.end();++vit)
	{
		cout<<*vit<<" ";
	}
	cout<<endl;
	return 0;
}
