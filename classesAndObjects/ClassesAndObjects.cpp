#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Kate", "Gregory", 20);
    {
        Tweeter t1("Someone", "Else", 456, "@whoever");
        string name2 = t1.getName();
        Person p2;
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    cout << name << endl;

    cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;
    p1.setNumber(124);
    cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;

    return 0;
}