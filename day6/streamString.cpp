#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    //stremString
    stringstream ss(s);

    string word;
    ss >>word;
    cout <<word << endl;
    ss >>word;
    cout <<word << endl;
    ss >>word;
    cout <<word << endl;
    ss >>word;
    cout <<word << endl;

    cout <<s<<endl;
    return 0;
}