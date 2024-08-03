#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        bool odd_count = true;
        for (char c : s) {
            if (c == '1') {
                odd_count = !odd_count;
            }
        }
        
        bool adjacent_ones = (s.rfind('1') - s.find('1') == 1);
        
        if (!odd_count && !adjacent_ones) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
