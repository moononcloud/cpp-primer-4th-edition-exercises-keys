#ifndef __Bulk_limit_HPP
#define __Bulk_limit_HPP
#include "disc_item.hpp"
class Bulk_limit:public Disc_item
{
public:
    Bulk_limit(const std::string &book= " ",double sales_price=0.0
    ,std::size_t qty=0,double disc_rate=0.0):
    Disc_item(book,sales_price,qty,disc_rate) {}
    double net_price(std::size_t ) const;
private:
    std::size_t limit;
};
#endif
