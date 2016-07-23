#include <iostream>
using std::cin;using std::cout;using std::endl;

void swap(int *iptr1,int *iptr2)
{
	int tmp=*iptr1;
	*iptr1=*iptr2;
	*iptr2=tmp;
}

int main()
{
	int val1,val2;
	cout<<"请分别输入两个整数："<<endl;
	cin>>val1>>val2;
	swap(&val1,&val2);
	cout<<val1<<'\t'<<val2<<endl;
	return 0;
}
