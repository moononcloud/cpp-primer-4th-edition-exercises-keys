#include <iostream>
#include "Screen.hpp"
using std::cout;
int main(int argc, char **argv)
{
	Screen myScreen(10,10,"testing the class Screen");
	myScreen.display(cout);
	myScreen.move(0,2).set('#').display(cout);
	return 0;
}
