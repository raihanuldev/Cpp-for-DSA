#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "SaturDay";
        break;
    case 2:
        cout << "SunDay";
        break;
    case 3:
        cout << "MonDay";
        break;
    case 4:
        cout << "TuesDay";
        break;
    case 5:
        cout << "WednesDay";
        break;
    case 6:
        cout << "Thursday";
        break;
    case 7:
        cout << "Friday";
        break;
    default:
        cout << "Wrong input";
    }
    return 0;
}