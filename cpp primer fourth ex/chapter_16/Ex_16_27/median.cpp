#include <algorithm>
#include <iostream>
using namespace std;

template <typename T> 
int median(T &container)
{
    if(container.size()%2==0)
        {
            cout<<"该容器长度为偶数，不存在中间值!"<<endl;
            return 0;
        }
        else
        {
            sort(container.begin(),container.end());
            
        }
    return *(container.begin()+container.size()/2);
}

