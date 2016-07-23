#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>
#include <list>
#include <iterator>
using std::ofstream;using std::ifstream;
using std::string;using std::vector;using std::list;
using std::cin;using std::cout;using std::endl;
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
 int main(int argc,char **argv) 
 { 
	 ifstream in_file;
	 if(argc<2||!open_file(in_file,argv[1]))
	 {
		 cout<<"无法打开文件:"<<argv[1]<<endl;
		 return -1;
	 }
 list<string> words; 
 // copy contents of each book into a single vector 
 string next_word; 
 while (in_file >> next_word) { 
 // insert next book's contents at end of words 
 words.push_back(next_word); 
 } 
 in_file.close();
 in_file.clear();
 // sort words alphabetically so we can find the duplicates 
 words.sort(); 
 /* eliminate duplicate words: 
 * unique reorders words so that each word appears once in the 
 * front portion of words and returns an iterator one past the unique range; 
 * erase uses a vector operation to remove the nonunique elements 
 */ 
 words.unique();
 list<string> lst(words.begin(),words.end());
 ofstream out_file;
 string s;
 cout<<"请输入保存unique algorithm结果的文件名:"<<endl;
 cin>>s;
 if(!save_file(out_file,s))
 {
	 cout<<"创建保存文件失败！"<<endl;
	 return -1;
 }
 out_file<<"unique 中的内容:"<<endl;
 for(list<string>::const_iterator lit=
 lst.begin();lit!=lst.end();++lit)
 {
	 out_file<<*lit<<"   ";
 }
 out_file.close();
 out_file.clear();
 return 0; 
 }
