#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::ostream;using std::string;using std::cin;using std::ofstream;
using std::cout;using std::endl;using std::vector;
ofstream &save_file(ofstream &ofile,const string &file_name)
{
    string end(".desktop"),name;
    name=file_name+end;
    ofile.close();
    ofile.clear();
	ofile.open(name.c_str());
	return ofile;
}
int main(int argc, char **argv)
{
	string tip("[Desktop Entry]"),s;
	vector<string> vets;vets.push_back(tip);
    vets.push_back("\n");
	ofstream outfile;
	cout<<"请输入名称："<<endl;
	tip="Name=";vets.push_back(tip);
	cin>>s;vets.push_back(s);vets.push_back("\n");
	cout<<"请输入注释:"<<endl;
	tip="Comment=";vets.push_back(tip);
	cin>>s;vets.push_back(s);vets.push_back("\n");
	cout<<"请输入执行程序或脚本路径:"<<endl;
	tip="Exec=";vets.push_back(tip);
	cin>>s;vets.push_back(s);vets.push_back("\n");
	cout<<"请输入xpm格式图标路径:"<<endl;
	tip="Icon=";vets.push_back(tip);
    cin>>s;vets.push_back(s);vets.push_back("\n");
	cout<<"启用终端？yes/no:"<<endl;
	cin>>tip;
	if(tip=="yes"|tip=="y"|tip=="Y"|tip=="Yes")
	{
		s="Terminal=true";vets.push_back(s);vets.push_back("\n");
	}
		if(tip=="no"|tip=="n"|tip=="N"|tip=="No")
	{
		s="Terminal=false";vets.push_back(s);vets.push_back("\n");
	}
    cin.clear();
	s="Type=Application";vets.push_back(s);vets.push_back("\n");
    s="Categories=Application;Development;";vets.push_back(s);vets.push_back("\n");
    cout<<"请输入该桌面快捷方式名称:"<<endl;
    cin>>tip;
	if(!save_file(outfile,tip))
    {
        cout<<"桌面程序创建失败！"<<endl;
        return -1;
    }
	for(vector<string>::const_iterator vit=vets.begin();vit!=vets.end();vit++)
    {
        outfile<<*vit;
    }
    outfile.close();
    outfile.clear();
	return 0;
}
