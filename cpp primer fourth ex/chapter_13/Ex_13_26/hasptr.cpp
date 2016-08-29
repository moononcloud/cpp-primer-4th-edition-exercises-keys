#include "hasptr.hpp"
HasPtr& HasPtr::operator =(const HasPtr& rhs)
{
    *ptr=*rhs.ptr;
    val=rhs.val;
    return *this;
}

