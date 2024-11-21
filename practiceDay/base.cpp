#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 90;  //this is static varibale
    int *dynamicVaribale = new int;
    *dynamicVaribale = 90;
    int staticArr[5] = {1,2,3,4,5};
    int *dynamicArr = new int[5];
    for(int i =0; i<5; i++){
        cin >> dynamicArr[i];
    }
    for(int i =0; i<5; i++){
        cout << dynamicArr[i];
    }
    // cout <<*dynamicVaribale;
    return 0;
}

//dynamic varibale create