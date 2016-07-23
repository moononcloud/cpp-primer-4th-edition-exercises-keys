#include <iostream>
using std::cin;using std::cout;using std::endl;
int factorical(int val)
{
	int result(1);
	while(val>0)
	{
		result*=val--;
	}
	return result;
}

int main()
{
	int val;
	cout<<"请输入要进行阶乘运算的数值:"<<endl;
	cin>>val;
	cout<<val<<"的阶乘结果为："<<factorical(val)<<endl;
	return 0;
}
