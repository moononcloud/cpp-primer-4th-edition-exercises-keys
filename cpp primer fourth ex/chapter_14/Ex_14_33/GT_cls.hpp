#ifndef __GT_cls_HPP
#define __GT_cls_HPP
#include <cstdlib>
using namespace std;
class GT_cls
{
public:
    GT_cls(int val=0): bound(val) {}
    bool operator() (const int &i) {return i>=bound;}    
private:
    size_t bound;
};
#endif
