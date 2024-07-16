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

        bool hasOne = false;

        
        for (char ch : s) {
            if (ch == '1') {
                hasOne = true;
                break;
            }
        }

        
        if (!hasOne) {
            cout << "NO" << endl;
            continue;
        }

        
        int count1 = 0, count0 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') count1++;
            if (s[i] == '0' && (i == 0 || s[i - 1] == '1')) count0++;
        }

        
        cout << (count0 < count1 ? "YES" : "NO") << endl;
    }
    return 0;
}