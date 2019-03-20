#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "../classesAndObjects/Person.h"
#include "Accum.h"

int main()
{
    // if I did'nt specify the type, it's possible the class detect it automatically
    Accum<int> integers(0);
    integers += 3;
    integers += 7;

    cout << integers.GetTotal() << endl;
    Accum<string> strings("");
    strings += "hello";
    strings += " world";
    cout << strings.GetTotal() << endl;

    // logical error
    // integers += "testing";$

    Person start("", "", 0);
    Accum<Person> people(start);
    Person p1("Kate", "Gregory", 123);
    Person p2("Someone", "Else", 456);
    people += p1;
    people += p2;
    cout << people.GetTotal().getNumber() << endl;

    return 0;
}