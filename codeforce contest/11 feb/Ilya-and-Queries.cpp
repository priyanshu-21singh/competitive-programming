#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> prefix(n, 0);
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            prefix[i] = 1;
        }
        prefix[i] += prefix[i-1];  
    }
    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r-1] - prefix[l-1] << endl;
    }

    return 0;
}
