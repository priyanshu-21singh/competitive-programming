#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1); // Using 1-based indexing
        vector<long long> dp(n + 1, 0); // DP arrayto keep  maximum score

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        
        for (int i = n; i >= 1; i--) {
            
            if (i + a[i] > n) {
                dp[i] = a[i];
            } else {
               
                dp[i] = a[i] + dp[i + a[i]];
            }
        }

        
        long long max_score = *max_element(dp.begin() + 1, dp.end());
        cout << max_score << endl;
    }
}

int main() {
    solve();
    return 0;
}
