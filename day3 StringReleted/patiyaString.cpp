#include <bits/stdc++.h>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;
    
    // Convert both strings to lowercase
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    
    // Compare the strings
    if (first < second) {
        cout << "-1" << endl;
    } else if (first > second) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
