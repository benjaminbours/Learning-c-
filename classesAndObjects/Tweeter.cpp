#include "Tweeter.h"
#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Tweeter::Tweeter(string first, string last, int arbitrary, string handle)
: Person(first, last, arbitrary),twitterhandle(handle)
{
    cout << "constructing tweeter" << twitterhandle << std::endl;
}

Tweeter::~Tweeter()
{
    cout << "destructing tweeter" << twitterhandle << endl;
}