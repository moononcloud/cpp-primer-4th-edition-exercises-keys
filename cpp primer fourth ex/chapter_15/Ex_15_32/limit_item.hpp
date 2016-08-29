#ifndef __Limit_item_HPP
#define __Limit_item_HPP
#include "Item_base.hpp"
class Item_base;
class Limit_item:public Item_base
{
public:
    double net_price(std::size_t) const
    Limit_item* clone(void) const
    {return new Limit_item(*this);}
    void debug(void) const
    {cout<<"\nlimit:"<<limit<<"\ndiscount:"<<discount<<endl;}
private:
    std::size_t limit;
    double discount;
};
#endif
