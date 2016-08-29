#include "checkoutrecord.hpp"
ostream& operator<<(ostream& os,const CheckoutRecord &rhs)
{
    os<<"book_id:"<<rhs.book_id<<"\t"<<
    "title:"<<rhs.title<<"\t"<<std::endl;
}

