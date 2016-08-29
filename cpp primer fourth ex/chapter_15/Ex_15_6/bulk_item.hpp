#ifndef __Bulk_item_HPP
#define __Bulk_item_HPP
#include "Item_base.hpp"
class Item_base;
class Bulk_item:public Item_base
{
public:
    double net_price(std::size_t) const;
private:
    std::size_t min_qty;
    double discount;
};
#endif
