#ifndef __Basket_HPP
#define __Basket_HPP
#include <set>
#include "sales_item.hpp"

bool compare(const Sales_item &i,const Sales_item &j)
{return i->book()<j->book();}
class Basket
{
    typedef bool *Comp(const Sales_item &lhs,const Sales_item &rhs);
public:
typedef multiset<Sales_item,Comp> set_type;
typedef set_type::size_type size_type;
typedef set_type::const_iterator const_iter;
    Basket():items(compare);
    void add_item(const Sales_item &item)
    {items.insert(item);}
    size_type size(const Sales_item &i) const
    {return items.count(i);}
    double total() const;
private:
    multiset<Sales_item,Comp> items;
};
#endif
