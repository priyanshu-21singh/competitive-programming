#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int sa = 0, sb = 0, pos = 0, neg = 0;
     for (int i = 0; i < n; i++) {
        if (a[i] == 1 && b[i] == 1) pos++;
        else if (a[i] == -1 && b[i] == -1) neg++;
        else {
            if (a[i] >= b[i]) {
                sa += a[i];
            } else {
                sb += b[i];
            }
              }
    }
    while (pos--) {
        if (sa <= sb) sa++;
        else sb++;
    }
    while (neg--) {
        if (sa <= sb) sb--;
        else sa--;
    }
     cout << min(sa, sb) << "\n";
  }
}