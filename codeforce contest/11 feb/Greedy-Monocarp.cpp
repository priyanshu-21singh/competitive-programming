#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    
    
    sort(a.begin(), a.end(), greater<ll>());
    
    
    vector<ll> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    
    ll res = LLONG_MAX; 
    for (int m = 1; m <= n; m++) {
        
        ll additions = k - prefix[m - 1] - a[m - 1];
        if (additions >= 0) {
            
            res = min(res, additions);
        }
    }
    
    
    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
