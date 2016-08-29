#ifndef __GT_cls_HPP
#define __GT_cls_HPP
#include <cstdlib>
#include <string>
using namespace std;
class GT_cls
{
public:
    GT_cls(const size_t &val1,const size_t &val2):bound1(val1),bound2(val2) {}
    bool operator() (const string &s) {return s.size()>=bound1&&s.size()<=bound2;} 
private:
    size_t bound1,bound2;
};
#endif
