#ifndef __CHECKOUTRECORD_HPP
#define __CHECKOUTRECORD_HPP
#include <utility>
#include <string>
#include <vector>
#include <iostream>
using std::pair;using std::string;using std::vector;using std::ostream;
class CheckoutRecord
{
public:
    friend ostream& operator<<(ostream& os,const CheckoutRecord&);
    Template();
    ~Template();
private:
    double book_id;
    string title;
    Date date_borrowed;
    Date date_due;
    pair<string,string> borrower;
    vector< pair<string,string>* > wait_list;
};
#endif
