#include <iostream>
using namespace std;
template <typename T>
T get_large(const T val1,const T val2)
{
    return val1>val2? val1:val2;
}

int main(int argc, char **argv)
{
	int iv1(9),iv2(2);
    float fv1(-1.2),fv2(5.6);
    double dv1(2.33),dv2(3.78);
    cout<<endl;
    cout<<get_large(iv1,iv2)<<endl;
    cout<<get_large(fv1,fv2)<<endl;
    cout<<get_large(dv1,dv2)<<endl;
	return 0;
}
