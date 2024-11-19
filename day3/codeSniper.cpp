#include <bits/stdc++.h>
using namespace std;

int main()  
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i =0; i<n; i++){
        mx = max(mx,a[i]);
    }
    for(int i =0; i<n; i++){
        mn = min(mx,a[i]);
    }
    cout <<mn << " "<<mx;
    return 0;
}