#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "../classesAndObjects/Person.h"
#include "BankAccount.h"

template <class T>
T maximum(T const& t1, T const& t2)
{
    
    return t1 < t2 ? t2 : t1;
}

int main()
{
    cout << "max of 33 and 44 is " << maximum(33, 44) << endl;
    string s1 = "hello";
    string s2 = "world";
    cout << "max of " << s1 << " and " << s2 << " is " << maximum(s1, s2) << endl;

    Person p1("Kate", "Gregory", 123);
    Person p2("Someone", "Else", 456);
    cout << "max of " << p1.getName() << " and " << p2.getName() << " is " << maximum(p1, p2).getName() << endl;

    // if I want it to work for BankAccount, I should implement an overload operator
    BankAccount b1;
    BankAccount b2;
    cout << "max of " << b1.GetHolderName() << " and " << b2.GetHolderName() << " is " << maximum(b1, b2).GetHolderName() << endl;

    return 0;
}
