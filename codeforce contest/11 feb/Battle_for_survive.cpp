#include<bits/stdc++.h>
using namespace std;
int main () {
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum  = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i < n - 2) {
                sum += a[i];
            }
        }
         cout << sum + a[n - 1] - a[n- 2] << "\n";
        
 }
    return 0;
}