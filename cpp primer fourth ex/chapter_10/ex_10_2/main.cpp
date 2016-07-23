#include <iostream>
#include <utility>
#include <string>
#include <vector>
using std::string;using std::vector;using std::pair;
using std::cin;using std::cout;using std::endl;
int main()
{
	string fist;
	int sed;
	pair<string,int> par;
	vector< pair<string,int> > vet;
	cout<<"用三种方式创建pair:"<<endl;
	cout<<"输入字符和数字:"<<endl;
	while(cin>>par.first>>par.second)
	{
		vet.push_back(par);
	}
	while(cin>>fist>>sed)
	{
		par=make_pair(fist,sed);
		vet.push_back(par);
	}
	while(cin>>fist>>sed)
	{
		par=pair<string,int> (fist,sed);
		vet.push_back(par);
	}
	cout<<"结果:"<<endl;
	for(vector< pair<string,int> >::const_iterator vit
	=vet.begin();vit!=vet.end();++vit)
		cout<<(*vit).first<<'\t'<<(*vit).second<<endl;
	return 0;
}