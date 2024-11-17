#include <iostream>
using namespace std;


int main()
{
    char s[100];
    int x;
    cin >> x;
    cin.ignore();
    cin.getline(s,100);
    cout <<x <<endl;
    cout <<s;
    return 0;
}