#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;

    while (x > 0)
    {
        switch (x)
        {
        case 1:
            cout << "you entered 1" << endl;
            break;
        case 2:
        case 3:
            cout << "you entered 2 or 3" << endl;
            break;
        case 4:
            cout << "you entered 4" << endl;
        case 5:
            cout << "you entered 5" << endl;
            break;
        default:
            cout << "you entered orther than 1 - 5" << endl;
        }
        cout << "Enter a number, 0 or negative to quit" << endl;
        cin >> x;
    }

    return 0;
}