#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> l(n);
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        bool priyanshu  = false;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 2; j < n; j++) {
                if (l[i] == l[j]) {
                    cout << "YES" << endl;
                    priyanshu  = true;
                    break;
                }
            }
            if (priyanshu) break;
        }

        if (!priyanshu ) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
