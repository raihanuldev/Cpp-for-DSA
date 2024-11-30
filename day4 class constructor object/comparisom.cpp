#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char s;
    cin >> a;
    cin >>s;
    cin >> b;
    if(s=='>'){
        if(a>b){
            cout <<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    if(s=='<'){
        if(a<b){
            cout <<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    if(s=='='){
        if(a==b){
            cout <<"Right";
        }else{
            cout<<"Wrong";
        }
    }

    return 0;
}