#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
template <typename T>
void my_out(ostream &out,T val)
{
    out<<val<<endl;
}
void test(ostream &out)
{
    int i(5);
    float j(-5.5);
    double k(-5.556);
    string l("victory");
    my_out(out,i);
    my_out(out,j);
    my_out(out,k);
    my_out(out,l);
}
ofstream& save_file(ofstream& save,const string file_name)
{
    save.close();
    save.clear();
    save.open(file_name.c_str());
    return save;
}
int main(int argc, char **argv)
{
	ostringstream sout;
    ofstream fout;
    string s("test");
    if(!save_file(fout,s))
    {
        cout<<"文件创建失败"<<endl;
        return -1;
    }
    test(cout);
    test(sout);
    test(fout);
	return 0;
}
