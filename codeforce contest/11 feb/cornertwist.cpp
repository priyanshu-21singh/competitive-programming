#include <bits/stdc++.h>
using namespace std;
int main() {
    int testtc;
    cin >> testtc;
    while (testtc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
        vector<vector<char>> b(n, vector<char>(m));
        //  grid a
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        // grid b 
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> b[i][j];
            }
        }
        
        //diff%3
        vector<vector<int>> diff(n, vector<int>(m, 0));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                diff[i][j] = (b[i][j] - a[i][j] + 3) % 3;
            }
        }
        
        
       
for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < m - 1; ++j) {
        int d = diff[i][j];
        if (d != 0) {
            diff[i][j] = 0;
            diff[i + 1][j] = (diff[i + 1][j] + d) % 3;
            diff[i][j + 1] = (diff[i][j + 1] + d) % 3;
            diff[i + 1][j + 1] = (diff[i + 1][j + 1] - d + 3) % 3;
        }
    }
}

        
        
        bool priyanshu = true;
        for (int i = 0; i < n; ++i) {
            if (diff[i][m - 1] != 0) {
                priyanshu = false;
                break;
            }
        }
        
        if (priyanshu) {
            for (int j = 0; j < m; ++j) {
                if (diff[n - 1][j] != 0) {
                    priyanshu = false;
                    break;
                }
            }
        }
        
        
        if (priyanshu) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
