#include <iostream>
#include <string>
using namespace std;
template <typename T> 
 int compare(const T &v1,const T &v2) 
 { 
 if (v1 < v2) return -1; 
 if (v2 < v1) return 1; 
 return 0; 
 }
 
int main(int argc, char **argv)
{
    string s1("hi"),s2("world");
    cout<<compare<string>(s1,s2)<<endl;
	return 0;
}
