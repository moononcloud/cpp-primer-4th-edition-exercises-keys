#include <iostream>
#include <string>
using std::string;
using std::cout;using std::endl;
string greet(string form,string lastname,string title,string::size_type pos,int length)
{
	form.replace(5,2,title,pos,length);
	form.replace(10,5,lastname);
	return form;
}
int main()
{
	string generic1("Dear Ms Daisy:");
	string generic2("MrsMsMissPeople");
	string lastname("AnnaP");
	string salute=greet(generic1,lastname,generic2,5,4);
	cout<<"salute:"<<salute<<endl;
	return 0;
}
