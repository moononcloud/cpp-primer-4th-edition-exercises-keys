#include "list.hpp"
List& List::operator =(const List& orig)
{
    destroy();
    copy_elems(orig);
    return *this;
}

void List::push_back(const Type &val)
{
    ListItem<Type> *pt=new ListItem<Type>(val);
    if(empty())
        head=tail=pt;
        else
        {
            tail->next=pt;
            pt->pre=tail;
            tail=pt;
        }
}

void List::push_front(const Type &val)
{
    ListItem<Type> *pt=new ListItem<Type>(val);
    if(empty())
        head=tail=pt;
        else
        {
            head->pre=pt;
            pt->next=head;
            head=pt;
        }
}

void List::pop_back()
{
    ListItem *p=tail;
    tail=p->pre;
    tail->next=0;
    delete p;    
}

void List::pop_front()
{
    ListItem *p=head;
    head=p->next;
    head->pre=0;
    delete p;
}

void List::destroy()
{
    while(!empty())
    {
        pop_back();
    }
}

void List::copy_elems(const List &orig)
{
    for(ListItem<Type> *pt=orig.head;pt;pt=pt->next)
    {
        push_back(pt->item);
    }
}