#include <iostream>
#include <string>
using std::string;
using std::cin;using std::cout;using std::endl;

string make_plural(size_t ix,const string &word,const string &end)
{
		return ix>1 ? word+end:word;
}

int main()
{
	string s1="succcess",s2="failure";
	cout<<"success的单数形式为："<<make_plural(1,s1," ")\
	<<endl<<"success的复数形式为："<<make_plural(2,s1,"es")\
	<<endl<<"failure的单数形式为："<<make_plural(1,s2," ")\
	<<endl<<"failure的复数形式为："<<make_plural(2,s2,"s")<<endl;
	return 0;
}
