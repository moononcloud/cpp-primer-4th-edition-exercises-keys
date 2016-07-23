#include <iostream>
using std::cin;using std::cout;using std::endl;

int main(int argc, char **argv)
{
	int i(0),sum(0);
	while(i!=argc)
		{
			sum+=argv[i];
			i++;
		}
		cout<<"和："<<sum<<endl;
	return 0;
}
