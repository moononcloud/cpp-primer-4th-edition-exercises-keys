#include <iostream>
using namespace std;
template <typename T,size_t N>
void printValues(T (&arr)[N])
{
    for(size_t i=0;i!=N;++i)
    {
        cout<<arr[i]<<' ';
    }
}

int main(int argc, char **argv)
{
	int j[]={0,1,2,3,4,5,6,7,8,9,10,11,12};
    double k[]={0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
    printValues(j);
    cout<<endl;
    printValues(k);
    cout<<endl;
	return 0;
}
