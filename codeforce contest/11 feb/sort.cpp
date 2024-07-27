#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n, q; 
        cin >> n >> q;

        string a, b; 
        cin >> a >> b;

        
        vector<vector<int>> prefixA(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefixB(n + 1, vector<int>(26, 0));

        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                prefixA[i + 1][j] = prefixA[i][j]; 
            }
            prefixA[i + 1][a[i] - 'a']++; 
        }

        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                prefixB[i + 1][j] = prefixB[i][j]; 
            }
            prefixB[i + 1][b[i] - 'a']++; 
        }

        while (q--) {
            int l, r; 
            cin >> l >> r;
            l--; r--;  

            int d = 0; 
            
            for (int i = 0; i < 26; ++i) {
                int countA = prefixA[r + 1][i] - prefixA[l][i]; 
                int countB = prefixB[r + 1][i] - prefixB[l][i];
                d += abs(countA - countB); 
            }

           
            cout << d / 2 << '\n'; 
        }
    }

    return 0;
}

