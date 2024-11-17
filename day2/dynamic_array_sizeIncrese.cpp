#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    for(int i =0; i<3; i++){
        cin >> a[i];
    }
    int *b = new int [5];
    for(int i =0; i <3; i++){
        b[i] = a[i];
    }
    delete[] a;
    b[3] = 40;
    b[4] = 50;
    for(int i =0; i<5; i++){
        cout << b[i]<<" ";
    }
    return 0;
}

//at frist i will declre a arry then again declare b array then rem,ove a array