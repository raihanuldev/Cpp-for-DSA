#include <bits/stdc++.h>
using namespace std;

int* p;
//defination of stack memory

void dynamicMemory(){
    int *x = new int;
    *x = 100;
    p = x;
    cout << "From Dynamic Function: " <<*p <<endl;
    return;
}

int main(){
    dynamicMemory();
    cout << "From Dynamic Function: " <<*p <<endl;
    return 0;
}
