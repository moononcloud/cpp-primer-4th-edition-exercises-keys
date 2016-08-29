#ifndef __SCREENPTR_H
#define __SCREENPTR_H
#include "Screen.hpp"
#include "scrptr.h"
class ScreenPtr
{
public:
    ScreenPtr(Screen *p):ptr(new ScrPtr(p)) {}
    ScreenPtr(const ScreenPtr &orig):ptr(orig.ptr) {++ptr->use;}
    ScreenPtr& operator=(const ScreenPtr&);
    Screen &operator*() {return *ptr->sp;}
    Screen *operator->(){return ptr->sp;}
    const Screen &operator*() const {return *ptr->sp;}
    const Screen *operator->() const {return ptr->sp;}
    ~ScreenPtr(){if(--ptr->use==0) delete ptr;}
      void test(void) { std::cout << "this is a test function for PtrScr class"
			      << std::endl;}
private:
    ScrPtr *ptr;
};
#endif
