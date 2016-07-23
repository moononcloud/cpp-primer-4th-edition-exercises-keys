#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using std::cin;using std::cout;using std::endl;
using std::vector;using std::list;

int main(int argc, char **argv)
{
	vector<int> vet;
	list<int> lst;
	fill_n(back_inserter(vet),10,100);
	fill_n(back_inserter(lst),12,100);
	cout<<"vector容器内的整数序列:"<<endl;
	for(vector<int>::const_iterator vit=vet.begin()
	;vit!=vet.end();++vit)
	{
		cout<<*vit<<'\t';
	}
	cout<<endl<<"list容器内的整数序列:"<<endl;
	for(list<int>::const_iterator lit=lst.begin();
	lit!=lst.end();++lit)
	{
		cout<<*lit<<'\t';
	}
	cout<<endl;
	return 0;
}
