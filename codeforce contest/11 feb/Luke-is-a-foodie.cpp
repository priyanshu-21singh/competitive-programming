#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int change = 0;
        long long l = a[0] - x, h = a[0] + x;

        for (int i = 1; i < n; i++) {
            long long curr_low = a[i] - x;
            long long curr_high = a[i] + x;
             l = max(l, curr_low);
            h = min(h, curr_high);
            if (l > h) {
                change++;
                l = curr_low;
                h = curr_high;
            }
        }

        cout << change << "\n";
    }

    return 0;
}
