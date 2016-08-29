#ifndef __ListItem_HPP
#define __ListItem_HPP
template <class Type> class ListItem
{
    ListItem(Type &val):item(val),next(0),pre(0) {}
    ListItem* next,pre;
    Type item;
};
#endif
