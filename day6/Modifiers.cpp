#include <bits/stdc++.h>
using namespace std;

int main()
{   
    string s = "Hello";
    s+=" Puspa"; //append new another string
    s.append(" Love You"); //append another string
    s.push_back('A'); // append charcuter last
    s.pop_back(); //remove last char 
    s = "MY LIFE MY RULES"; //assign new string
    s.assign("I Love more grils. beacuse i can't hurt them"); //assign new string
    // s.erase(); //give on here postion 
    // s.replace(9,4,"HI");
    s.insert(7,"ASFI,RIYA,KARISMA ");

    cout <<s<<endl;


    return 0;
}