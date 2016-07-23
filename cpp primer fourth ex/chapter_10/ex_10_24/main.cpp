#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	string input;
	set<string> ex_word;
	ex_word.insert("success");
	ex_word.insert("class");
	cout<<"请输入复数单词:"<<endl;
	while(cin>>input)
	{
		if(input[input.size()-1]=='s')
	  {
		if((input[input.size()-2]=='s')||
		(input[input.size()-2]=='e'))
		{
			if(!ex_word.count(input))
			input.replace(input.size()-2,2," ");
		}
		else
			input.replace(input.size()-1,1," ");
	  }
	cout<<"该词单数形式为:"<<input<<endl;
		cout<<"请输入复数单词:"<<endl;
	}
	return 0;
}
