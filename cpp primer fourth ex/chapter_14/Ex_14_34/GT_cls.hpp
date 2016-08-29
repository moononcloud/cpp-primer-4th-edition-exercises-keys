#ifndef __GT_cls_HPP
#define __GT_cls_HPP
class GT_cls
{
public:
    GT_cls(const int &val):bound(val) {}
    bool operator() (const int &i) {return  i==bound;}
private:
    int bound;
};
#endif
