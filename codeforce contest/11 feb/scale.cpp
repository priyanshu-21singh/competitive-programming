#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }
        
        // a = reduced grid
        int p = n / k;
        vector<string> a(p, string(p, '0'));
        
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < p; ++j) {
                // Value of the top-left cell of the block determines the block value
                a[i][j] = grid[i * k][j * k];
            }
        }
        
        for (const auto &row : a) {
            cout << row << endl;
        }
    }
    
    return 0;
}
