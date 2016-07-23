#include <iostream>
#include <vector>
#include <string>
using std::vector;using std::string;
using std::cin;using std::cout;using std::endl;

int main()
{
	int N_flag,lenth;
 vector<string> svec; 
 svec.reserve(1024); 
 string text_word="abcd";
 cout<<"请输入256,512,1000,1048中任意一个数:"<<endl;
 cin>>N_flag;
 switch (N_flag)
 {
 case 256 :lenth=256;break;
 case 512 :lenth=512;break;
 case 1000 :lenth=1000;break;
 case 1048 :lenth=1048;break;
 }
 while (svec.size()!=lenth)
 svec.push_back(text_word); 
 cout<<"svec: size:" <<svec.size()<<"\tcapacity:"<<svec.capacity()<<endl;
 svec.resize(svec.size()+svec.size()/2);
 cout<<"svec: size:" <<svec.size()<<"\tcapacity:"<<svec.capacity()<<endl;
	return 0;
}
