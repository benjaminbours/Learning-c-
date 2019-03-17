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
    // int i = p1.arbitrarynumber;

    Status s = Pending;
    s = Approved;

    FileError fe = FileError::notFound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    return 0;
}