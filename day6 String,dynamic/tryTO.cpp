#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin >>tcase;
    int n;
    for(int i =0; i<tcase; i++){
        
        cin >>n;
        long long int sumN =0;
        long long int PowerSum =0;
        for(int i =1 ;i<=n;i++){
            sumN+=i;
            if ((i & (i - 1)) == 0){
                PowerSum+= i;
            }
            // if(2*(i)==i){
            //     PowerSum+=i;
            // }
        }
        // cout <<sumN-(PowerSum)<<endl;
        cout <<-PowerSum<<endl;
    }
    return 0;
}