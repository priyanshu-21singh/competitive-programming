#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int fl = 1;
        vector<int> ans(n, 0);
        for (int j = 0; j < n; j++) {
            vector<int> arr(m);
            for (int i = 0; i < m; i++) {
                cin >> arr[i];
            }
            int rem = arr[0] % n;
            ans[rem] = j + 1;
            for (int i = 0; i < m; i++) {
                if (arr[i] % n != rem) {
                    fl = 0;
                }
            }
        }
        if (fl == 0) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
