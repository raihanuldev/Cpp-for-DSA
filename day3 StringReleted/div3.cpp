#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin >> n >>h;
    
    //create an friends array
    int a[n];
    int width =0;
    for(int i =0; i<n; i++){
        cin >> a[i];      
        if(a[i]>h){
            width++;
        }
        width++;
        
    }

    cout << width;
    return 0;
}