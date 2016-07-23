#include <iostream>
#include <string>
using std::string;using std::cin;using std::cout;using std::endl;
inline const string &shortString(const string &s1,const string &s2)
{
	return s1.size()<s2.size() ? s1:s2;
}

int main()
{
	string s1,s2;
	cout<<"请分别输入两个字符串:"<<endl;
	cin>>s1>>s2;
	cout<<"两者中最短的字符串是:"<<shortString(s1,s2)<<endl;
	return 0;
}
