#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string curword,preword;
	while(cin>>curword)
	{
		if(curword==preword&&isupper(curword[0]))
		{
			cout<<'"'<<curword<<'"'<<endl;
			break;
		}
		preword=curword;
		curword="";
	}
#ifndef NDEBUG
    cout<<"\npreword:"<<preword<<'\t'<<"curword:"\
	<<curword<<endl;
#endif
    if(curword!=preword)
		cout<<"no words repeat."<<endl;
	return 0;
}
