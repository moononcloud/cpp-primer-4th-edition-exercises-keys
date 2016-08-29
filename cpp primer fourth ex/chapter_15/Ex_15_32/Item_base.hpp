#ifndef __Item_base_HPP
#define __Item_base_HPP
#include <vector>
using namespace std;
class Item_base
{
public:
    Item_base(const std::string &book=" ",double sales_price =0.0)
    :isbn(book),price(sales_price) {}
    std::string book() const {return isbn;}
    virtual double net_price(std::size_t n) const
    {return n*price;}
    virtual Item_base* clone(void) const
    {return new Item_base(*this);}
    virtual void debug(void) const
    {cout<<"\nisbn:"<<isbn<<"\nprice:"<<price<<endl;}
    virtual ~Item_base() {}
private:
    std::string isbn;
protected:
    double price;
};
#endif
