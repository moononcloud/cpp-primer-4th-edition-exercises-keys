#include <iostream>
#include <string>
using std::string;
using std::cin;using std::cout;using std::endl;

int main()
{
	string str;
	cout<<"请输入任意输入一串英文字母:"<<endl;
	cin>>str;
	for(string::iterator sit=str.begin();sit!=str.end();++sit)
	{
		if(isupper(*sit))
		{
			str.erase(sit);
			sit=str.begin();
		}
	}
	cout<<"去除大写字母后的结果:"<<str<<endl;
	return 0;
}
