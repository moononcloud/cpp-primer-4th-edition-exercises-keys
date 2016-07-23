#include <iostream>
#include <vector>
#include <string>
#include <list>
using std::vector;using std::string;using std::list;
using std::cin;using std::cout;using std::endl;
int main()
{
	list<char*> c_lst(10,"dzc");
	vector<string> s_vet;
	s_vet.assign(c_lst.begin(),c_lst.end());
	for(vector<string>::const_iterator vit=s_vet.begin();vit!=s_vet.end();++vit)
	{
		cout<<*vit<<" ";
	}
	cout<<endl;
	return 0;
}
