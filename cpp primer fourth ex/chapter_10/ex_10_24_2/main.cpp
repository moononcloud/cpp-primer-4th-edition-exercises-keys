#include <iostream>
#include <string>
#include <set>
#include <fstream>
using namespace std;
string &strip_word(set<string> &exclude_lst,string &words)
{
	if(exclude_lst.count(words))
		return words;
		else if(words[words.size()-1]=='s')
		{
			if((words[words.size()-2]=='e')||
			(words[words.size()-2]=='s'))
				return words=words.substr(0,words.size()-2);
				else
					return words=words.substr(0,words.size()-1);
		}
		return words;
}
int main()
{
	string word,words,exfile_name,chfile_name;
	set<string> exclude_lst;
	cout<<"请输入特例单词所在文件名:"<<endl;
	cin>>exfile_name;
	cin.clear();
	ifstream ex_file(exfile_name.c_str());
		if(!ex_file)
		{
			cout<<"无法打开文件:"<<exfile_name<<endl;
			return -1;
		}
		while(ex_file>>word)
		{
			exclude_lst.insert(word);
		}
		ex_file.close();
		word.clear();
	cout<<"输入包含单词的文件名:"<<endl;
	cin>>chfile_name;
	ifstream ch_file(chfile_name.c_str());
	if(!ch_file)
	{
		cout<<"无法打开文件:"<<chfile_name<<endl;
		return -1;
	}
	cout<<"转换结果:"<<endl;
	while(ch_file>>words)
	{
		cout<<words;
		word=strip_word(exclude_lst,words);
		cout<<"的单数形式为:"<<word<<endl;
	}
	ch_file.close();
	return 0;
}
