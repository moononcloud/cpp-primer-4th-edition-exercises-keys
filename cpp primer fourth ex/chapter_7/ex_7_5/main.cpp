#include <iostream>
using std::cin;using std::cout;using std::endl;

int larger(int val,int *pt)
{
	return val>=*pt ? val:*pt;
}

int main()
{
	int val1,val2;
	cin>>val1>>val2;
	cout<<larger(val1,&val2)<<endl;
	return 0;
}
