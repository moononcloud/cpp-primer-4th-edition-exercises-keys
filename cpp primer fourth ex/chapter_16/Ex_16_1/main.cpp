#include <iostream>
using namespace std;
	template <typename T>
    T abs(T &val)
    {
        return val<0? -val:val;
    }
int main(int argc, char **argv)
{
    int i(-5);
    double j(-5.55);
    float k(-5.5);
    cout<<endl;
    cout<<"int(-5):"<<abs(i)<<endl;
    cout<<"double(-5.5):"<<abs(j)<<endl;
    cout<<"float(-5.5):"<<abs(k)<<endl;
	return 0;
}
