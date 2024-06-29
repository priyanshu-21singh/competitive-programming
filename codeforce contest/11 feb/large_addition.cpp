#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);

int main() {
    fastIO;

    int t;
    cin >> t;
    while(t--) {
        string s; 
        cin >> s;
        int n = s.size();
        if (n == 1) {
            cout << "NO\n";
            continue;
        }
        if (s[0] != '1') {
            cout << "NO\n";
            continue;
        }
        if (s[n-1] == '9') {
            cout << "NO\n";
            continue;
        }
        bool isValid = true;
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == '0') {
                cout << "NO\n";
                isValid = false;
                break;
            }
        }
        if (isValid) {
            cout << "YES\n";
        }
    }

    return 0;
}
