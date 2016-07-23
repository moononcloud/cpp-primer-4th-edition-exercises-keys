#include <iostream>
#include <vector>
#include <string>
using std::vector;using std::string;
using std::cin;using std::cout;using std::endl;
int main()
{
	char input;
	string str;
	vector<char> cvet;
	cout<<"请输入一串字母:"<<endl;
	while(cin>>input)
	{
		cvet.push_back(input);
	}
	for(vector<char>::const_iterator cit=cvet.begin();\
	cit!=cvet.end();++cit)
	{
		str.push_back(*cit);
	}
	cout<<"结果:"<<str<<endl;
	return 0;
}
