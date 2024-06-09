#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void scanv(vi &v) {
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
}

int main() {
    int t;
    cin >> t;

    for (int tcase = 1; tcase <= t; tcase++) {
        int n;
        cin >> n;

        vi a(n), b(n);
        scanv(a);
        scanv(b);

        map<int, int> ans1, ans2;
        int cnt = 1;
        int mx = -1;

        // Process array a
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                ++cnt;
            } else {
                ans1[a[i - 1]] = max(ans1[a[i - 1]], cnt);
                mx = max(mx, ans1[a[i - 1]]);
                cnt = 1;
            }
        }
        ans1[a[n - 1]] = max(ans1[a[n - 1]], cnt);
        mx = max(ans1[a[n - 1]], mx);
        cnt = 1;

        // Process array b
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                ++cnt;
            } else {
                ans2[b[i - 1]] = max(ans2[b[i - 1]], cnt);
                mx = max(mx, ans2[b[i - 1]]);
                mx = max(mx, ans1[b[i - 1]] + ans2[b[i - 1]]);
                cnt = 1;
            }
        }
        ans2[b[n - 1]] = max(ans2[b[n - 1]], cnt);
        mx = max(ans2[b[n - 1]], mx);
        mx = max(mx, ans1[b[n - 1]] + ans2[b[n - 1]]);

        cout << mx << endl;
    }

    return 0;
}