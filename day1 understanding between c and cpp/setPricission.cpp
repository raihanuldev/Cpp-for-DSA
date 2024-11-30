#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double d = 3.141563323;
    cout <<fixed <<setprecision(6) <<d;
    return 0;
}

// in c we use formate specifier that's why there is no need to use any formate speacifer. like printf(".2lf",);