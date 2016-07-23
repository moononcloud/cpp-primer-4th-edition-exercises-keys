#include <iostream>
#include <map>
#include <string>
using std::string;using std::map;
using std::cin;using std::cout;using std::endl;

int main()
{
	map<string,int> word_count;
	string input;
	cout<<"请输入字符串："<<endl;
	while(cin>>input)
		++word_count[input];
	for(map<string,int>::iterator mit=word_count.begin()
	;mit!=word_count.end();mit++)
		cout<<"单词:"<<(*mit).first<<
		'\t'<<"出现次数为:"<<(*mit).second<<endl;
	return 0;
}
