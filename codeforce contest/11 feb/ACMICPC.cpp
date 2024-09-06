#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a[6];
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 == 1) {
            cout << "NO" << endl;
        } else {
            sum /= 2;
            bool found = false;

            for (int i = 0; i < 4; i++) {
                for (int j = i + 1; j < 5; j++) {
                    for (int k = j + 1; k < 6; k++) {
                        if (a[i] + a[j] + a[k] == sum) {
                            cout << "YES" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
                if (found) break;
            }

            if (!found) {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
