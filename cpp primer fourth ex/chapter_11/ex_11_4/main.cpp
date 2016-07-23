#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <numeric>
using std::cin;using std::cout;using std::endl;
using std::vector;using std::string;using std::ifstream;
using std::ofstream;
ifstream &open_file(ifstream &ifile,const string &file_name)
{
	ifile.close();
	ifile.clear();
	ifile.open(file_name.c_str());
	return ifile;
}
ofstream &save_file(ofstream &ofile,const string &file_name)
{
	ofile.close();
	ofile.clear();
	ofile.open(file_name.c_str());
	return ofile;
}
int main(int argc, char **argv)
{
	ifstream in_file;
	if(argc<2||!open_file(in_file,argv[1]))
	{
		cout<<"无法打开文件:"<<argv[1]<<endl;
		return EXIT_FAILURE;
	}
	double numbers;
	vector<double> vet_doubles_sum;
	while(in_file>>numbers)
	{
		vet_doubles_sum.push_back(numbers);
	}
	cout<<"数据已载入到vector容器。"<<endl;
	cout<<"请输入保存输出结果的文件名称:"<<endl;
	string s;
	ofstream out_file;
	cin>>s;
	if(!save_file(out_file,s))
	{
		cout<<"无法创建保存文件。"<<endl;
		return EXIT_FAILURE;
	}
	cout<<"对文件中的数据求得的和:"<<accumulate(vet_doubles_sum.begin(),
	vet_doubles_sum.end(),double(0.0))<<endl;
	out_file<<"对文件中的数据求得的和:"<<accumulate(vet_doubles_sum.begin(),
	vet_doubles_sum.end(),double(0.0))<<endl;
	out_file.close();
	out_file.clear();
	return EXIT_SUCCESS;
}
