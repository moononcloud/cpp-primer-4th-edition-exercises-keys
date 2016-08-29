#include <iostream>
#include "Bulk_item.hpp"
#include "Item_base.hpp"
using namespace std;
int main(int argc, char **argv)
{
    Bulk_item bitem,bitem1(bitem);
        bitem=bitem1;
	return 0;
}
