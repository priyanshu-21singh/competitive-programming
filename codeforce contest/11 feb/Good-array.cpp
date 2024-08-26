#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a < 2) {
                sum--;
            } else {
                sum += a - 1;
            }
        }
        if (sum > -1 && n > 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
