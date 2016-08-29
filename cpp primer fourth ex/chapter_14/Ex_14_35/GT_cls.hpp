#ifndef __GT_cls_HPP
#define __GT_cls_HPP
#include <cstdlib>
#include <string>
using namespace std;
class GT_cls
{
public:
    GT_cls(const size_t &val):bound(val) {}
    bool operator() (const string &s) {return s.size()>=bound;} 
private:
    size_t bound;
};
#endif
