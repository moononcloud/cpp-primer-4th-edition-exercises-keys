#ifndef __SCRPTR_H
#define __SCRPTR_H
#include "Screen.hpp"
class ScrPtr
{
    friend class ScreenPtr;
    Screen *sp;
    size_t use;
    ScrPtr(Screen *p):sp(p),use(1) {}
    ~ScrPtr(){delete sp;}
};
#endif
