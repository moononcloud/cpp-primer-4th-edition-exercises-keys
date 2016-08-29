#include "queue.hpp"

Queue& Queue::operator =(const Queue& rhs)
{
    destroy();
    copy_elems(rhs);
    return *this;
}

void Queue::push(const Type &val)
{
    QueueItem<Type> *pt= new QueueItem<Type>(val);
    if(empty())
        head=tail=pt;
        else
        {
            tail->next=pt;
            tail=pt;
        }
}

void Queue::pop()
{
        QueueItem<Type> *ptr=head;
        head=head->next;
        delete head;
}

void Queue::destroy()
{
    while(!empty())
        pop();
}

void Queue::copy_elems(const Queue &orig)
{
    for(QueueItem<Type> *ptr=orig.head;ptr;ptr=ptr->next)
    {
        push(ptr->item);
    }
}