#ifndef __Bulk_item_HPP
#define __Bulk_item_HPP
#include "Item_base.hpp"
class Item_base;
class Bulk_item:public Item_base
{
public:
    Bulk_item(const std::string &book,double sales_price,std::size_t qty=0
    ,double disc_rate=0.0):Item_base(book,sales_price),min_qty(qty),discount(disc_rate) {}
    double net_price(std::size_t cnt) const
    {
        if(cnt>=min_qty)
            return cnt*(1-discount)*price;
            else
                return cnt*price;
    }    
private:
    std::size_t min_qty;
    double  discount;
    
};
#endif
