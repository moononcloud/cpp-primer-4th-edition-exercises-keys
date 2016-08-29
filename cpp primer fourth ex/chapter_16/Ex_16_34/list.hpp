#ifndef __List_HPP
#define __List_HPP
#include "listitem.hpp"
template <class type> class List
{
public:
    List():head(0),tail(0) {}
    List(const List &L):head(0),tail(0) {copy_elems(L);}
    List& operator=(const List&);
    Type& front() {return head->item;}
    const Type& front() const {return head->item;}
    Type& back() {return tail->item;}
    const Type& front() const {return tail->item;}
    void push_back(const Type &);
    void push_front(const Type &);
    void pop_back();
    void pop_front();
    bool empty() const {return head==0;}
    ~List() {destroy;}
private:
    ListItem *head,tail;
    void destroy();
    void copy_elems(const List &);
};
#endif
