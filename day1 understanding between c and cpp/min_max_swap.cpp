#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b;
    cin >>a>>b;
    cout <<min(a,b) <<endl;
    cout <<max(a,b)<<endl;
    swap(a,b);
    cout <<a <<" " <<b;
    return 0;
}

// in c++ we use bulidin function for min,max,swap
