#include <iostream>
#include <string>
using std::string;
using std::cin;using std::cout;using std::endl;
int main()
{
	int word_cnt=0,word_lenth=0,word_larglen=0,word_smlen=10000;
	string line1="We were her pride of 10 she named us:";
	string line2="Benjamin, Phoenix, the Prodigal";
	string line3="and perspicacious pacific Suzanne";
	string sentence=line1+' '+line2+' '+line3;
	string max_word_str;
	string min_word_str;
	string::size_type ix=0;
	while(ix!=sentence.size())
	{
		if(isalpha(sentence[ix]))
			++word_lenth;
			else if(isalpha(sentence[ix-1]))
			{
				if(word_lenth>word_larglen){
					word_larglen=word_lenth;
					max_word_str=sentence.substr(ix-word_larglen,word_larglen);
				}
					else if(word_larglen==word_lenth)
						max_word_str+=","+sentence.substr(ix-word_larglen,word_larglen);
						else if(word_lenth<word_smlen){
							word_smlen=word_lenth;
							min_word_str=sentence.substr(ix-word_smlen,word_smlen);
						}
							else if(word_smlen==word_lenth)
								min_word_str+=","+sentence.substr(ix-word_smlen,word_smlen);
								++word_cnt;
								word_lenth=0;
			}
			ix++;
	}
	++word_cnt;
	cout<<sentence<<"\n最长单词长度为:"<<word_larglen
	<<"\n最长单词是:"<<max_word_str
	<<"\n最短单词长度为:"<<word_smlen
	<<"\n最短单词是:"<<min_word_str
	<<"\n段落总词数:"<<word_cnt<<endl;
	return 0;
}
