#include <bits/stdc++.h>
using namespace std;

int main() {
    int tcase;
    cin >> tcase;
    while (tcase--) {
        long long n;
        cin >> n;
        
        long long sumN = n * (n + 1) / 2;
        
        // Calculate PowerSum
        long long powerSum = 0;
        long long power = 1; 
        while (power <= n) {
            powerSum += power;
            power *= 2; 
        }
        

        long long result = sumN - 2 * powerSum;
        cout << result << endl;
    }
    return 0;
}
