#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> a(n);
        for(int& i : a)
            cin>>i;
            bool okh = true;
        for (int i = 1; i <= n - 2; i++){
            // Check if a[i] is divisible by gcd of a[i-1] and a[i+1]
            okh = okh & (a[i] % __gcd(a[i-1], a[i+1]) == 0);
        }
        // Output "YES" if ok is true, otherwise output "NO"
        cout << (okh ? "YES\n" : "NO\n");
        }
        return 0;
    }
