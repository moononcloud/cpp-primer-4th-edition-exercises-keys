#ifndef __Disc_item_HPP
#define __Disc_item_HPP
#include "Item_base.hpp"
class Disc_item:public Item_base
{
public:
    Disc_item(const std::string &book=" ",double sales_price=0.0,std::size_t qty=0,
    double disc_rate=0.0):quantity(qty),discount(disc_rate) {}
    std::pair<std::size_t,double> discount_policy() const
    {return std::make_pair(quantity,discount);}
    double net_price(std::size_t cnt) const
    {
        if(cnt>quantity)
            return cnt*price;
            else
                return cnt*(1-discount)*price;        
    }
private:
    std::size_t quantity;
    double discount;
    
};
#endif
