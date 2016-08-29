#include <iostream>
#include "Bulk_item.hpp"
#include "Item_base.hpp"
#include <vector>
using namespace std;
class Bulk_item;
class Item_base;
int main(int argc, char **argv)
{
	vector<Item_base*> ibvet;
    Bulk_item biobj("mybook",6.0,5,0.3);
    cout<<"\nbiobj:"<<"\n4:"<<biobj.net_price(4)
    <<"\n8:"<<biobj.net_price(8)<<endl;
    ibvet.push_back(&biobj);
    cout<<"\nitobj:"<<"\n4:"<<(*ibvet.begin())->net_price(4)
    <<"\n8:"<<(*ibvet.begin())->net_price(8)<<endl;
	return 0;
}
