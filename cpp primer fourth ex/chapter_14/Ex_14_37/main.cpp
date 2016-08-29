#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>
using namespace std;

int main()
{
	vector<int> nvet;
    vector<string> svet;
    int num;
    string str;
    cout<<"请输入一串数字:"<<endl;
    while(cin>>num)
    {
        nvet.push_back(num);
    }
    cin.clear();
    cout<<"请输入字符串:"<<endl;
    while(cin>>str)
    {
        svet.push_back(str);
    }
    cin.clear();
    vector<int>::iterator vit=nvet.begin();
    cout<<"比1024大的数有:"<<endl;
    while(( vit=find_if(vit,nvet.end(),bind2nd( greater<int>(),int(1024) ) ) )!=nvet.end() )
    {
        cout<<*vit<<' ';
        ++vit;
    }
    cout<<endl;
    multiplies<int> muti_num;
    for(vector<int>::iterator vit=nvet.begin();
    vit!=nvet.end();++vit)
    {
        *vit=muti_num(*vit,2);
    }
    cout<<"该串数字乘以2后的结果:"<<endl;
    for(vector<int>::iterator vit=nvet.begin();
    vit!=nvet.end();++vit)
    {
        cout<<*vit<<" ";
    }
    cout<<endl;
    vector<string>::iterator svit=svet.begin();
    cout<<"不与pooh的字符串相同的有:"<<endl;
    while( (svit=find_if(svit,svet.end(),bind2nd(not_equal_to<string>(),"pooh")) )!=svet.end() )
    {
        
        cout<<*svit<<' ';
        ++svit;
    }
    cout<<endl;
   	return 0;
}
