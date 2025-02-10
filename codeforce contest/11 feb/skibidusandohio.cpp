#include <bits/stdc++.h>
using namespace std;
int mini(string s) {
    int n = s.size();
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            return 1;  
        }
    }
    
    return n;  
}int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << mini(s) << endl;
    }

    return 0;
}
