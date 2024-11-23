#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ="Hello";

    for(string::iterator it=s.begin(); it <s.end(); it++){
        cout <<*it <<endl;
    }

    cout <<*s.begin()<<endl;
    cout << *(s.end()-1) <<endl;

    return 0;
}   