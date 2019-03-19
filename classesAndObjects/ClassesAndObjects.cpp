#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Kate", "Gregory", 200);
    Person p2("Kate", "Gregory", 200);
    {
        Tweeter t1("Someone", "Else", 456, "@whoever");
        string name2 = t1.getName();
        Person p3;
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    cout << name << endl;

    cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;
    p1.setNumber(124);
    cout << "p1: " << p1.getName() << " " << p1.getNumber() << endl;

    cout << "next exercice" << endl;
    cout << "p1 is " << endl;
    if (!(p1 < 300))
    {
        cout << "not ";
    }
    cout << "less than 300" << endl;

    cout << "3OO is " << endl;
    if (!(300 < p1))
    {
        cout << "not ";
    }
    cout << "less than p1" << endl;

    return 0;
}