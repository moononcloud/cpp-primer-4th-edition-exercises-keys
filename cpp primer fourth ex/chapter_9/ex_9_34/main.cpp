#include <iostream>
#include <string>
using std::cin;using std::cout;using std::endl;
using std::string;

int main()
{
	string str;
	cout<<"请输入一个单词："<<endl;
	cin>>str;
	for(string::iterator sit=str.begin();sit!=str.end();++sit)
	{
		*sit=toupper(*sit);
	}
	cout<<"结果:"<<str<<endl;
	return 0;
}
