#include <iostream>
using std::cin;using std::cout;using std::endl;

void array_sum(const int *beg,const int *end)
{
	long sm=0;
	while(beg!=end)
	{
		sm+=*beg++;
	}
	cout<<"该数组的各元素之和为："<<sm<<endl;
}

int array_num()
{
	int num=0;
	cin>>num;
	return num;
}

int array_input(int *beg,int *end)
{
	while(beg!=end)
		{
			cin>>*beg++;
		}
}

int main()
{
	cout<<"请输入数组元素总个数:"<<endl;
	const int aNum=array_num();
	int array[aNum];
	cout<<"请按照您输入的元素个数输入整型值："<<endl;
	array_input(array,array+aNum);
	array_sum(array,array+aNum);
	return 0;
}
