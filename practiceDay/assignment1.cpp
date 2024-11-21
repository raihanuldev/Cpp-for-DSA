#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n;i++){
        cin >> a[i];
    }
    //asending_order
    sort(a,a+n);
    for(int i =0; i<n; i++){
        cout << a[i] << " ";
    }
    //desending
    sort(a,a+n,greater<int>());
    cout<<endl;
    for(int i =0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}