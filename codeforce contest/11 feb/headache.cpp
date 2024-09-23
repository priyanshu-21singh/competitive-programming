#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
vector<vector<int>> cost(n, vector<int>(m));
for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cost[i][j];
        }
    }
int ans  = 0;
    
   for (int i = 0; i < n; i++) {
        int minr = *min_element(cost[i].begin(), cost[i].end());
        ans = max(ans , minr);
    }

    
    cout << ans  << endl;

    return 0;
}
