#include <iostream>
#include <map>
#include <vector>
using namespace std;
template <typename T,typename T1>
typename T::value_type find_fre(T iter1,T iter2,T1)
{
    
    map<T1,int> count_fre;
    T max_itr;
    int max_count(0);
    while(iter1!=iter2)
    {
        if(max_count<++count_fre[*iter1])
        {
            max_itr=iter1;
            max_count=count_fre[*iter1];
        }
        ++iter1;
    }
    return *max_itr;
}

int main(int argc, char **argv)
{
	vector<int> nvet;
    int i;
    cout<<"输入一串数字:"<<endl;
    while(cin>>i)
    {
        nvet.push_back(i);
    }
    cout<<"最高频次数字:"<<find_fre(nvet.begin(),nvet.end(),int(0))<<endl;
	return 0;
}
