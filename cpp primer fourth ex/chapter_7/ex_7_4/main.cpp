#include <iostream>
using std::cin;using  std::cout;using std::endl;

int abs(int val)
{
	if(val>=0)
		return val;
	else return -val;
}

int main()
{
	int val;
	cout<<"请输入一个任意的整数："<<endl;
	cin>>val;
	cout<<"这个数的绝对值为："<<abs(val)<<endl;
	return 0;
}
