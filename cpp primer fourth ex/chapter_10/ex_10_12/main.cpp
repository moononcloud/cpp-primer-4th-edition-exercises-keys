#include <iostream>
#include <map>
#include <string>
#include <utility>
using std::string;using std::map;using std::pair;
using std::cin;using std::cout;using std::endl;

int main()
{
	map<string,int> word_count;
	string input;
		cout<<"请输入字符串："<<endl;
	while(cin>>input)
	{
		pair<map<string,int>::iterator,bool> rmp=
		word_count.insert(make_pair(input,1));
		if(!rmp.second)
			++rmp.first->second;
	}
	for(map<string,int>::iterator mit=word_count.begin()
	;mit!=word_count.end();mit++)
		cout<<"单词:"<<(*mit).first<<
		'\t'<<"出现次数为:"<<(*mit).second<<endl;
	return 0;
}