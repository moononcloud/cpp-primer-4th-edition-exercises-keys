#include <iostream>
#include "Item_base.hpp"
#include "limit_item.hpp"
class Item_base;
class Limit_item;
using namespace std;
int main(int argc, char **argv)
{
	Item_base ib;
    Limit_item lib;
    cout<<"除错程序置关"<<endl;
    ib.debug_on(false);
    lib.debug_on(false);
    cout<<"运行ib除错程序"<<endl;
    ib.debug();
    cout<<"运行lib除错程序"<<endl;
    lib.debug();
    cout<<"除错程序置开"<<endl;
    ib.debug_on(true);
    lib.debug_on(true);
    cout<<"运行ib除错程序"<<endl;
    ib.debug();
    cout<<"运行lib除错程序"<<endl;
    lib.debug();
    
	return 0;
}
