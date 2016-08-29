#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include "GT_cls.hpp"
#include <cstdlib>
using namespace std;
ifstream& read_in(ifstream& in,const string &filename)
{
    in.close();
    in.clear();
    in.open(filename.c_str());
    return in;
}

 string make_plural(size_t ctr, const string &word, 
 const string &ending) 
 { 
 return (ctr == 1) ? word : word + ending; 
 }

int main()
{
	cout<<"请输入要读取的文件名称:"<<endl;
    string file,s;
    ifstream instrm;
    cin>>file;
    if(!read_in(instrm,file))
    {
        cout<<"文件读取失败！"<<endl;
        return -1;
    }
    cin.clear();
    vector<string> vet_str;
    while(instrm>>s)
    {
        vet_str.push_back(s);
    }
    sort(vet_str.begin(),vet_str.end());
    vector<string>::iterator end_unique=unique(vet_str.begin(),vet_str.end());
    vet_str.erase(end_unique,vet_str.end());
    cout<<"请输入字符长度限定值:"<<endl;
    size_t bound;
    cin>>bound;
    vector<string>::size_type wc=count_if(vet_str.begin(),vet_str.end(),GT_cls(bound));
    cout<<wc<<" "<<make_plural(wc,"word","s")<<" "<<bound<<" characters or longer"<<endl;
	return 0;
}
