#include<bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        // find thee character.. and sort them to create string...
        set<char> distinct(b.begin(), b.end());
        string r(distinct.begin(), distinct.end());

        //  Create  mapp from string  to  symmetric........ 
        unordered_map<char, char> map;
        int len = r.size();
        for (int i = 0; i < len; ++i) {
            map[r[i]] = r[len - 1 - i];
        }

        
        string s = b;
        for (int i = 0; i < n; ++i) {
            s[i] = map[b[i]];
        }

        // stringsss...
        cout << s << endl;
    }

    return 0;
}
