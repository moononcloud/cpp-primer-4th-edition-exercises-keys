#ifndef __Limit_item_HPP
#define __Limit_item_HPP
#include "Item_base.hpp"
class Item_base;
class Limit_item:public Item_base
{
public:
    double net_price(std::size_t) const
    Limit_item* clone() const
    {return new Limit_item(*this);}
private:
    std::size_t limit;
    double discount;
};
#endif
