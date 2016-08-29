#ifndef __Queue_HPP
#define __Queue_HPP
#include "queueitem.hpp"
template <class Type> class Queue
{
public:
    Queue():head(0),tail(0) {}
    Queue(const Queue&Q):head(0),tail(0) {copy_elems(Q);}
    Queue& operator=(const Queue&);
    ~Queue(){destroy();}
    Type& front() {return head->item;}
    const Type& front() const {return head->item;}
    void push (const Type &);
    void pop();
    bool empty() const {
        return head==0;
    }
private:
    QueueItem<Type> *head;
    QueueItem<Type> *tail;
    void destroy();
    void copy_elems(const Queue&);
};
#endif
