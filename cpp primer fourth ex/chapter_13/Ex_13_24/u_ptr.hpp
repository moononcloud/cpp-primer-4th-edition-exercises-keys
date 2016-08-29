#ifndef __U_PTR_HPP
#define __U_PTR_HPP
class U_Ptr
{
    friend class HasPtr;
    size_t use;
    int *ptr;
    U_Ptr(int *p):ptr(p),use(1) {}
    ~U_Ptr(){delete ptr;}
};
#endif
