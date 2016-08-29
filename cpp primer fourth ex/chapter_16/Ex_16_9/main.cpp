#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
template <typename T1,typename T2>
T1 my_find(T1 iter1,T1 iter2,T2 val)
{
    for(T1 iter=iter1;iter!=iter2;++iter)
        if(*iter==val)
            return iter;
            return iter2;
}

int main()
{
    vector<int> nvet;
    list<string> slit;
    for(int i=0;i!=10;++i)
        nvet.push_back(i);
    slit.push_back("ab");
    slit.push_back("cd");
    slit.push_back("ef");
    cout<<"nvet(6):"<<*my_find(nvet.begin(),nvet.end(),int(5))<<endl;
    cout<<"slit(cd):"<<*my_find(slit.begin(),slit.end(),string("cd"))<<endl;
	return 0;
}
