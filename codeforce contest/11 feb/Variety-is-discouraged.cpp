#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define int int64_t

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        bool all_duplicates = true;
        for (auto x : mp) {
            if (x.second == 1) {
                all_duplicates = false;
                break;
            }
        }
        if (all_duplicates) {
            cout << 0 << "\n";
            continue;
        }

        int bestlen = 0, bestl = -1, bestR = -1;
        int curr_l = -1, currlen = 0;

        for (int i = 0; i < n; i++) {
            if (mp[a[i]] == 1) {
                if (curr_l == -1) curr_l = i;
                currlen++;
                if (currlen > bestlen) {
                    bestlen = currlen;
                    bestl = curr_l;
                    bestR = i;
                }
            } else {
                currlen = 0;
                curr_l = -1;
            }
        }

        cout << bestl + 1 << " " << bestR + 1 << "\n";
    }
    return 0;
}
