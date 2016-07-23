#include <iostream>
#include <map>
#include <string>
#include <vector>
using std::string;using std::vector;using std::map;
using std::cin;using std::cout;using std::endl;
int main()
{
	string ch_name,fa_name,que_name;
	int cnt=0;
	vector<string> vet_child;
	map< string,vector<string> > fam_store;
	cout<<"请输入家族姓:"<<endl;
	while(cin>>fa_name)
	{
		cin.clear();
		cout<<"请输入孩子名字:"<<endl;
			while(cin>>ch_name&&cnt!=6)
			{
				vet_child.push_back(ch_name);
				++cnt;
			}
			fam_store.insert(make_pair(fa_name,vet_child));
			vet_child.clear();
			cnt=0;
			cout<<"请输入家族姓:"<<endl;
	}
	cout<<"请输入要查寻的家族姓:"<<endl;
	cin.clear();
	cin>>que_name;
	cout<<"字长:"<<fam_store.find(que_name)->second.size()<<endl;
	for(vector<string>::const_iterator vit=
	fam_store.find(que_name)->second.begin();
	vit!=fam_store.find(que_name)->second.end();vit++)
	{
		cout<<*vit<<'\t';
	}
	cout<<endl;
	return 0;
}
