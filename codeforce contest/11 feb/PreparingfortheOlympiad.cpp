#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& a, vector<int>& b) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        count += max(a[i] - b[i + 1], 0);
    }
    count += a[n];
    return count;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        cout << solve(n, a, b) << "\n";
    }

    return 0;
}
