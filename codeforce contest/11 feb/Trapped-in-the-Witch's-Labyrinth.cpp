#include <bits/stdc++.h>
using namespace std;
    int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string c[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
            c[i] = "-" + c[i]; // 1 based indexing
        }
        vector<pair<int, int>> grid[n + 2][m + 2];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (c[i][j] == 'U') grid[i - 1][j].push_back({i, j});
                if (c[i][j] == 'R') grid[i][j + 1].push_back({i, j});
                if (c[i][j] == 'D') grid[i + 1][j].push_back({i, j});
                if (c[i][j] == 'L') grid[i][j - 1].push_back({i, j});
            }
        }

        int vis[n + 2][m + 2] = {};
        queue<pair<int, int>> q;
        for (int j = 0; j <= m + 1; j++) vis[0][j] = 1, q.push({0, j});
        for (int i = 1; i <= n + 1; i++) vis[i][0] = 1, q.push({i, 0});
        for (int j = 1; j <= m + 1; j++) vis[n + 1][j] = 1, q.push({n + 1, j});
        for (int i = 1; i <= n; i++) vis[i][m + 1] = 1, q.push({i, m + 1});
        // BFS 
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();
            for (auto [a, b] : grid[i][j]) {
                if (vis[a][b] == 0) {
                    vis[a][b] = 1;
                    q.push({a, b});
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (c[i][j] == '?' &&
                    vis[i - 1][j] && vis[i][j + 1] &&
                    vis[i + 1][j] && vis[i][j - 1]) {
                    vis[i][j] = 1;
                }
            }
        }
        int result = n * m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (vis[i][j] == 1) result--;
            }
        }

        cout << result << endl;
    }
    return 0;
}
