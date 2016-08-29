#include "limit_item.hpp"
double Limit_item::net_price(std::size_t cnt) const
{
    if(cnt<=limit)
    {
        return cnt*(1-discount)*price;
    }
    else 
        return cnt*price;
}
