#include <iostream>
#include <string>
#include <stack>
using std::string;using std::stack;
using std::cin;using std::cout;using std::endl;

int main()
{
	string input;
	stack<string> stk;
	cout<<"请输入字符:"<<endl;
	while(cin>>input)
		stk.push(input);
		cout<<"输出结果为:"<<endl;
		while(stk.empty()==false)
			{
				cout<<stk.top()<<" ";
				stk.pop();
			}
			cout<<endl;
	return 0;
}
