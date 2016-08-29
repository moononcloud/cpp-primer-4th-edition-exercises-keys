#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void print_ctainer(T iter1,T iter2)
{
    for(;iter1!=iter2;++iter1)
        cout<<*iter1<<" ";
}

int main(int argc, char **argv)
{
	vector<int> nvet;
    int i;
    cout<<"请输入数字:"<<endl;
    while(cin>>i)
    {
        nvet.push_back(i);
    }
    print_ctainer(nvet.begin(),nvet.end());
    cout<<endl;
	return 0;
}
