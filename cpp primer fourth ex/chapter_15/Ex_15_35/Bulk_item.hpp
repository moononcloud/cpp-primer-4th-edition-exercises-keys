#ifndef __Bulk_item_HPP
#define __Bulk_item_HPP
#include "Item_base.hpp"
#include <iostream>
using namespace std;
class Bulk_item:public Item_base
{
public:
    Bulk_item(const std::string &book=" ",double sales_price=0.0,std::size_t qty=0
    ,double disc_rate=0.0):Item_base(book,sales_price),min_qty(qty),discount(disc_rate) {cout<<
    "这是派生类构造符" <<endl;}
    Bulk_item(const Bulk_item &bitem):min_qty(bitem.min_qty),discount(bitem.discount)  
    {
        cout<<"这是拷贝构造符"<<endl;
        }
    Bulk_item& operator=(const Bulk_item &bitem) 
    {
        min_qty=bitem.min_qty;
        discount=bitem.discount;
        cout<<"这是重载赋值操作符"<<endl;
        return *this;
        }
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
