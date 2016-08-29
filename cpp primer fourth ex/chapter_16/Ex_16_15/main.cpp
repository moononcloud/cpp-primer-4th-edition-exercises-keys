#include <iostream>
using namespace std;
template <typename T,size_t N>
void array_init(T (&parm)[N])
{
    for(size_t ix=0;ix!=N;++ix)
    {
        parm[ix]=0;
    }
}

int main(int argc, char **argv)
{
	int arryi[10];
    double arryd[20];
    array_init(arryi);
    array_init(arryd);
    for(size_t ix=0;ix!=sizeof(arryi)/sizeof(arryi[0]);
    ++ix)
        cout<<arryi[ix]<<" ";
        cout<<endl;
    for(size_t ix=0;ix!=sizeof(arryd)/sizeof(arryd[0]);
    ++ix)
        cout<<arryd[ix]<<" ";
        cout<<endl;

	return 0;
}
