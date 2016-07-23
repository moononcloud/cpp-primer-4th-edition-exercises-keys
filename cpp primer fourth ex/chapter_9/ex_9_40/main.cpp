#include <iostream>
#include <string>
using std::string;
using std::cin;using std::cout;using std::endl;

int main()
{
	string q1("When lilacs last in the dooryard bloom'd");
	string q2("The child is father of the man");
	string sentence;
	sentence.assign(q2,0,13);
	sentence.append(q1,17,15);
	cout<<"q1:"<<q1<<endl<<"q2:"<<q2<<endl
	<<"sentence:"<<sentence<<endl;
	return 0;
}
