#ifndef __exercise_HPP
#define __exercise_HPP
struct exercise
{
    int operator() (int& a,int& b,int& c) { a>0 ? b:c;} 
};
#endif
