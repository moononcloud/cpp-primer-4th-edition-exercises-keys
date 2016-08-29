#ifndef __List_HPP
#define __List_HPP
template <class type> class List
{
public:
    List();
    Type &front();
    const Type &front()const;
    void push_back(const Type &);
    void push_front(const Type &);
    bool empty()const;
    ~List();
};
#endif
