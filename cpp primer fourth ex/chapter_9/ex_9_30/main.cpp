#include <iostream>
#include <vector>
using std::vector;
using std::cin;using std::cout;using std::endl;

int main()
{
	vector<int> ivet;
	cout<<"ivet: size"<<ivet.size()<<"\tcapacity:"<<\
	ivet.capacity()<<endl;
	for(vector<int>::size_type vix=0;vix!=24;++vix)
	{
		ivet.push_back(vix);
	}
	cout<<"ivet: size"<<ivet.size()<<"\tcapacity:"<<\
	ivet.capacity()<<endl;
	ivet.reserve(50);
	cout<<"ivet: size"<<ivet.size()<<"\tcapacity:"<<\
	ivet.capacity()<<endl;
	while(ivet.size()!=ivet.capacity())
		ivet.push_back(0);
	cout<<"ivet: size"<<ivet.size()<<"\tcapacity:"<<\
	ivet.capacity()<<endl;
	ivet.push_back(42);
	cout<<"ivet: size"<<ivet.size()<<"\tcapacity:"<<\
	ivet.capacity()<<endl;
	return 0;
}
