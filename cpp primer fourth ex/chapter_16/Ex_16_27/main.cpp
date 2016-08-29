#include <iostream>
#include "median.h"
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	int num;
    vector<int> nvet;
    cout<<"请输入一串整型数字:"<<endl;
    while(cin>>num)
    {
        nvet.push_back(num);
    }
    cout<<"中间指为："<<median(nvet)<<endl;
    return 0;
}
