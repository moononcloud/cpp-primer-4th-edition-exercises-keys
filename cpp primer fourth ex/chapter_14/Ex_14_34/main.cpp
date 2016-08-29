#include <iostream>
#include "GT_cls.hpp"
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	cout<<"请输入一串序列:"<<endl;
    int num;
    vector<int> vet_N;
    while(cin>>num)
    {
        vet_N.push_back(num);
    }
    cin.clear();
    cout<<"请输入限定值:"<<endl;
    cin>>num;
    replace_if(vet_N.begin(),vet_N.end(),GT_cls(num),1000);
    cout<<"被替换后的序列为:"<<endl;
    for(vector<int>::const_iterator vit=vet_N.begin();vit!=vet_N.end();++vit)
    {
        cout<<*vit<<" ";
    }
    cout<<endl;
	return 0;
}
