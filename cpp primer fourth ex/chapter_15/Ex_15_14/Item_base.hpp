#ifndef __Item_base_HPP
#define __Item_base_HPP
class Item_base
{
public:
    Item_base(const std::string &book=" ",double sales_price=0.0)
    :isbn(book),price(sales_price) {}
    virtual net_price(const std::size_t n) const
    {return n*price;}
    std::string book() {return isbn;}
    virtual ~Item_base() {}
protected:
    double price;
private:
    std::string  isbn;
};
#endif
