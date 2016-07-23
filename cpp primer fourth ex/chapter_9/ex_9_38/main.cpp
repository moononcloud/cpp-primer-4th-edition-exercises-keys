#include <iostream>
#include <string>
using std::string;
using std::cin;using std::cout;using std::endl;
void num_find(string &str,string::size_type pos)
{
	string fin_num="0123456789";
	while((pos=str.find_first_of(fin_num,pos))!=string::npos)
	{
		cout<<"在索引:"<<pos<<"上找到数字:"<<str[pos]<<endl;
		pos++;
	}
}
void alp_find(string &str,string::size_type pos)
{
	string fin_alp="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while((pos=str.find_first_of(fin_alp,pos))!=string::npos)
	{
		cout<<"在索引:"<<pos<<"上找到字母:"<<str[pos]<<endl;
		pos++;
	}
}
void num_find_not(string &str,string::size_type pos)
{
	string fin_num="0123456789";
	while((pos=str.find_first_not_of(fin_num,pos))!=string::npos)
	{
		cout<<"在索引:"<<pos<<"上未找到数字"<<endl;
		pos++;
	}
}
void alp_find_not(string &str,string::size_type pos)
{
	string fin_alp="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while((pos=str.find_first_not_of(fin_alp,pos))!=string::npos)
	{
		cout<<"在索引:"<<pos<<"上未找到字母"<<endl;
		pos++;
	}
}
int main()
{
	string str="ab2c3d7R4E6";
	string::size_type pos=0;
	num_find(str,pos);
	alp_find(str,pos);
	num_find_not(str,pos);
	alp_find_not(str,pos);
	return 0;
}
