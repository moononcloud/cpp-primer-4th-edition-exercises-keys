#include <iostream>
#include <vector>
using std::vector;
using std::cin;using std::cout;using std::endl;
double  vector_sum(vector<double>::const_iterator beg,vector<double>::const_iterator end)
{
	double sum=0;
	while(beg!=end)
	{
		sum+=*beg++;
	}
	return sum;
}


int main()
{
	double  num;
	vector<double> vVal;
	cout<<"请输入任意数字:"<<endl;
	while(cin>>num)
	vVal.push_back(num);
	cout<<"这些数字之和为:"<<vector_sum(vVal.begin(),vVal.end())<<endl;
	return 0;
}
