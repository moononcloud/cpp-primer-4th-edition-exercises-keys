#include "screenptr.h"
ScreenPtr& ScreenPtr::operator =(const ScreenPtr &rhs)
{
    ptr=rhs.ptr;
}

