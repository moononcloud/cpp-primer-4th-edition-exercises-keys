#ifndef EXERCISE_HPP
#define EXERCISE_HPP
#include <fstream>
#include <string>
class exercise
{
public:
	exercise(double *dp,std::ifstream &ifs):cstr("exercise"),dptr(dp),ifstrm(ifs) {}
	~exercise();
private:
	const std::string cstr;double *dptr;std::ifstream &ifstrm;

};

#endif // EXERCISE_HPP
