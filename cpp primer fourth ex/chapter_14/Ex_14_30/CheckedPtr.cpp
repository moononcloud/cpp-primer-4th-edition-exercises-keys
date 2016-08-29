#include "CheckedPtr.hpp"
#include <stdexcept>
CheckedPtr& CheckedPtr::operator ++()
{
    if(curr==end)
        throw std::out_of_range("incresement past the end of CheckedPtr");
        else
            return *this;
}
CheckedPtr& CheckedPtr::operator --()
{
    if(curr==beg)
        throw std::out_of_range("decreaseing past the beginning of CheckedPtr");
        else
            return *this;
}