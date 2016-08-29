#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void print_ctainer(T &container)
{
    for(typename T::size_type ix=0;
    ix!=container.size();++ix)
    {
        cout<<container[ix]<<' ';
    }
}

int main(int argc, char **argv)
{
	vector<int> nvet;
    int i;
    cout<<"请输入数字:"<<endl;
    while(cin>>i)
        nvet.push_back(i);
        print_ctainer(nvet);
        cout<<endl;
	return 0;
}
