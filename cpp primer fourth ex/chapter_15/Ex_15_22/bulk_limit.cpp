#include "bulk_limit.hpp"

double Bulk_limit::net_price(std::size_t cnt) const
{
    if(cnt>limit)
        return limit*(1-discount)*price+(cnt-limit)*price;
        else
            return cnt*(1-discount)*price;
}