#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    
    
    while (getline(cin, line)) {
        
        line.erase(remove(line.begin(), line.end(), ' '), line.end());
        
        sort(line.begin(), line.end());
        cout << line << endl;
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string line;
    
//     // Read input until EOF
//     while (getline(cin, line)) {
//         stringstream ss(line); // Use stringstream to split words
//         string word, result = "";
        
//         while (ss >> word) {
//             sort(word.begin(), word.end()); // Sort each word
//             result += word + " ";          // Append sorted word with a space
//         }
        
//         if (!result.empty()) {
//             result.pop_back(); // Remove the trailing space
//         }
        
//         cout << result << endl;
//     }

//     return 0;
// }











// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char x[100000];
    
//     while (cin.getline(x, 100000)) {
//         string line = x;
//         line.erase(remove(line.begin(), line.end(), ' '), line.end()); 
//         sort(line.begin(), line.end());
//         cout << line << endl; 
//     }

//     return 0;
// }
