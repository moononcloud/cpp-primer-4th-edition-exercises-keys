#ifndef __HASPTR_HPP
#define __HASPTR_HPP
class HasPtr
{
public:
    HasPtr(const int &p,int i):ptr(new int(p)),val(i){}
    HasPtr(HasPtr&orig):ptr(new int (*orig.ptr)),val(orig.val){}
    HasPtr& operator=(const HasPtr&);
    ~HasPtr(){delete ptr;}
private:
    int *ptr;
    int val;
};
#endif
