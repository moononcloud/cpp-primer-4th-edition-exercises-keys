#include <iostream>
#include "GT_cls.hpp"
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, char **argv)
{
    vector<int> vet;
    int num,i;
    cout<<"请输入序列:"<<endl;
    while(cin>>num)
    {
        vet.push_back(num);
    }
    cin.clear();
    cout<<"请输入限定值:"<<endl;
    cin>>i;
    vector<int>::const_iterator vit=find_if(vet.begin(),vet.end(),GT_cls(i));
    cout<<"在序列中，比限定值:"<<i<<"大的第一个元素值为:"<<*vit<<endl;
	return 0;
}
