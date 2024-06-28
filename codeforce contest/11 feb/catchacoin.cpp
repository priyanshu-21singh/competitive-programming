#include <bits/stdc++.h>

using namespace std;

int main() {
    int p;
    cin >> p;
    vector<pair<int, int>> coins(p);
    for (int i = 0; i < p; ++i) {
        cin >> coins[i].first >> coins[i].second;
    }
    
    for (const auto& coin : coins) {
        if (coin.second < -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
