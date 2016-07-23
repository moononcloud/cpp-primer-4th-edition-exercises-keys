#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
	vector<string> vet_exclude;
	string str_exclude,input;
	map<string,int> word_count;
	cout<<"请输入排除单词列表:"<<endl;
	while(cin>>str_exclude)
	{
		vet_exclude.push_back(str_exclude);
	}
	cin.clear();
	cout<<"请输入一串字符，以便设置map:"<<endl;
	while(cin>>input)
	word_count[input]=1;
	cin.clear();
	cout<<"请输入一串字符，进行查询:"<<endl;
	while(cin>>input)
	{
		bool find_word=false;
		for(vector<string>::const_iterator vit=
		vet_exclude.begin();vit!=vet_exclude.end();++vit)
		{
			if(input==*vit)
			{
				find_word=true;
				break;
			}
		}
		if(find_word==false)
			++word_count[input];
	}
	for(map<string,int>::const_iterator mit=word_count.begin();
	mit!=word_count.end();++mit)
	{
		cout<<"查询字符:"<<mit->first<<"\t已找到"<<mit->second<<
		"个"<<endl;
	}
	return 0;
}
