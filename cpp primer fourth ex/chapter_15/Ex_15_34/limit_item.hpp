#ifndef __Limit_item_HPP
#define __Limit_item_HPP
#include "Item_base.hpp"
class Item_base;
class Limit_item:public Item_base
{
public:
    Limit_item(const string &book=" ",double sales_price=0.0,std::size_t lt=0,double dis=0.0)
    :Item_base(book,sales_price),limit(lt),discount(dis) {}
    double net_price(std::size_t) const;
    Limit_item* clone(void) const
    {return new Limit_item(*this);}
    void debug(void) const
    {
        if(debug_on_off==1)
        cout<<"\nlimit:"<<limit<<"\ndiscount:"<<discount<<endl;}
private:
    std::size_t limit;
    double discount;
};
#endif
