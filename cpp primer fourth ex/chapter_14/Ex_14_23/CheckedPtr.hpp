#ifndef __CheckedPtr_HPP
#define __CheckedPtr_HPP
#include <cstdlib>
class CheckedPtr
{
public:
int& operator[](const size_t);
const int& operator[](const size_t) const;
int& operator*();
const int& operator*() const;
private:
int *array;
int *ptr;
size_t size;
};
#endif
