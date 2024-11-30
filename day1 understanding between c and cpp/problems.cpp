#include <iostream>
#include <cstdio>
#include<iomanip>

using namespace std;

int main() {
    // Complete the code.
    int a;
    long long int b;
    char c;
    float d;
    double e;
    cin >>a>>b>>c>>d>>e;
    cout <<a <<endl<<b <<endl<<c <<endl<<fixed <<setprecision(3)<< d <<endl;
    cout <<fixed <<setprecision(9)<<e;
    return 0;
}
