#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> right;
        for (int i = 0; i < n; i++) right[s[i]]++;
        unordered_map<char, int> left;

        int ans = INT_MIN;

        for (int i = 0; i < n - 1; i++) {
            left[s[i]]++;
            right[s[i]]--;
            if (right[s[i]] == 0) right.erase(s[i]);
            int l = left.size();
            int r = right.size();
            ans = max(ans, l + r);
        }
        cout << ans << endl;
    }
    return 0;
}
