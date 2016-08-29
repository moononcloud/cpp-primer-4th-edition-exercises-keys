#ifndef __PTRSRC_H
#define __PTRSRC_H
#include "screenptr.h"
class PtrScr
{
public:
    PtrScr(ScreenPtr *p): Pptr(p) {}
    ScreenPtr *operator->() {return Pptr;}
    const ScreenPtr *operator->() const {return Pptr;}
    
private:
    ScreenPtr *Pptr;
};
#endif
