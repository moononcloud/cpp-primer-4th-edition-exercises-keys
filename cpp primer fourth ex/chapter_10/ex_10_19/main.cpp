#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;
int main()
{
	map< string,vector< pair<string,string> > > family;
	string fam_nam,chi_nam,birth,que_name;
	cout<<"请输入家族姓:"<<endl;
	while(cin>>fam_nam)
	{
		cout<<"请输入孩子的姓名和生日:"<<endl;
		int cnt=0;
		cin.clear();
		while(cin>>chi_nam>>birth&&cnt!=6)
		{
			family[fam_nam].push_back(make_pair(chi_nam,birth));
			cnt++;
			cin.clear();
		}
				cout<<"请输入家族姓:"<<endl;
	}
	cout<<"请输入要查询的家族姓:"<<endl;
	cin.clear();
	cin>>que_name;
	map< string,vector< pair<string,string> > >::const_iterator 
	mit=family.find(que_name);
	cout<<"家族姓:"<<que_name<<"的检索结果为:"<<endl;
	for(vector< pair<string,string> >::const_iterator vit=mit->second.begin();
	vit!=mit->second.end();++vit)
	{
		cout<<"孩子名:"<<vit->first<<
		"\t生日:"<<vit->second<<endl;
	}
	return 0;
}
