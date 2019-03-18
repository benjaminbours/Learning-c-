#include <iostream>
using std::cout;
using std::endl;

#include "Utility.h"

bool IsPrime(int x)
{
    bool prime = true;
    for (int i = 2; i < x / i; i++)
    {
        int factor = x / i;
        if (factor * i == x)
        {
            cout << "factor found: " << i << " * " << factor << endl;
            prime = false;
            break;
        }
    }
    return prime;
}

bool Is2MorePrime(int const& x) // the function work with a const reference of the real x
// bool Is2MorePrime(int& x) // the function work with a reference so the real x
// bool Is2MorePrime(int x) // the function work with a copy of the parameter
{
    // x = x + 2;
    return IsPrime(x + 2);
}

// int& BadFunction() // It is dangerous to return a reference
// {
//     int a = 3;
//     return a;
// }