#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Person::Person(string first, string last, int arbitrary)
:firstName(first), lastName(last), arbitrarynumber(arbitrary)
{
    cout << "constructing" << getName() << endl;
}
Person::Person(): arbitrarynumber(0)
{
    cout << "constructing" << getName() << endl;
}

Person::~Person()
{
    cout << "destructing" << getName() << endl;
}

string Person::getName() const
{
    return firstName + " " + lastName;
}