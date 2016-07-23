#include <iostream>
#include <cmath>
using std::cin;using std::cout;
using std::endl;

long int cpow(int x,int a)
{
	return powl(a,x);
}

int main()
{
	int x,a;
	cout<<"请分别输入底数和权数："<<endl;
	cin>>a>>x;
	cout<<"底数:"<<a<<"\t"<<"权数："<<x<<"\t"\
	<<"计算结果："<<cpow(x,a)<<endl;
	return 0;
}
