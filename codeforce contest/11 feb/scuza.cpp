#include <bits/stdc++.h>
using namespace std;

int a[200005];        
long long b[200005];  

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n, q;
        cin >> n >> q;

        
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            // max height encountered up to step i
            a[i] = max(a[i - 1], x);
            //  sum of step heights
            b[i] = b[i - 1] + x;
        }

        
        while (q--) {
            int x;
            cin >> x;
            
            int idx = upper_bound(a + 1, a + n + 1, x) - a - 1;
            
            cout << b[idx] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
