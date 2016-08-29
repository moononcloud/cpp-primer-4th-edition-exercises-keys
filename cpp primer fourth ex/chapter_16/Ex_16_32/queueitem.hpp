#ifndef __QueueItem_HPP
#define __QueueItem_HPP
template <class Type> class QueueItem
{

    QueueItem(const Type &t):item(t),next(0) {}
    Type item;
    QueueItem *next;
};
#endif
