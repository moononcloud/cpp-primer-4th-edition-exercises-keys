#include <iostream>
using std::cout;using std::endl;using std::cin;
size_t return_value()
{
	static size_t value=0;
	return value++;
}
int main()
{
	size_t i;
	cout<<"请任意输入一个数字："<<endl;
	cin>>i;
	for(size_t num=0;num!=i;num++)
		cout<<return_value()<<'\t';
	cout<<endl;
	return 0;
}
