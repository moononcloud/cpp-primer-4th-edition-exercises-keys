#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item
{
public:
	double avg_price() const
	{
		return revenue/units_sold;
	}
	void read(std::string &rhs_in,unsigned &rhs_us,double &rhs_rev)
	{
		isbn=rhs_in;
		units_sold=rhs_us;
		revenue=rhs_rev;
	}
	void write()
	{
		std::cout<<"ISBN:"<<isbn<<"\t销售量:"<<units_sold\
		<<"\t总收入:"<<revenue<<std::endl;
	}
	void add(Sales_item &rhs)
	{
		isbn=rhs.isbn;
		units_sold+=rhs.units_sold;
		revenue+=rhs.revenue;
	}
	bool same_isbn(const Sales_item &rhs) const
	{return isbn == rhs.isbn;}
	Sales_item():units_sold(0),revenue(0.0) {}
private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

#endif