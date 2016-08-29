#ifndef __SALES_ITEM_H
#define __SALES_ITEM_H
#include <iostream>
class Sales_item
{
    Sales_item();
    std::istream& operator>>(Sales_item&);
    std::ostream& operator<<(const Sales_item&);
    Sales_item& operator+=(const Sales_item&);
    ~Sales_item();
};
#endif
