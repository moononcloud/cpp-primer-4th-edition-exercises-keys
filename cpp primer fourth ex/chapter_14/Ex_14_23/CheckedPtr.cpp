#include "CheckedPtr.hpp"
#include <stdexcept>
int& CheckedPtr::operator [](const size_t i)
{
    if(i>=size)
        throw std::runtime_error("index out of the range");
        else
            return array[i];
}
const int& CheckedPtr::operator [](const size_t i) const
{
    if(i>=size)
        throw std::runtime_error("index out of the range");
        else
            return array[i];
}
int CheckedPtr::operator *()
{
    if(ptr>=array+size||ptr<array)
        throw std::runtime_error("dereference out of the range");
        else
            return *ptr;
}
int* CheckedPtr::operator *() const
{
    if(ptr>=array+size||ptr<array)
    throw std::runtime_error("dereference out of the range");
    else
        return *ptr;
}