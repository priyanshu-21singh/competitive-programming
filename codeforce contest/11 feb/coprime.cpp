#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> last_occurrence;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            last_occurrence[a[i]] = i + 1; // Store 1-based index
        }

        int max_sum_indices = -1; // Initialize to -1 to handle case where no coprime pairs exist

        // Check all pairs (x, k) from the map
        for (auto x = last_occurrence.begin(); x != last_occurrence.end(); ++x) {
            for (auto k = last_occurrence.begin(); k != last_occurrence.end(); ++k) {
                if (__gcd(x->first, k->first) == 1) {
                    max_sum_indices = max(max_sum_indices, x->second + k->second);
                }
            }
        }

        cout << (max_sum_indices != -1 ? max_sum_indices : -1) << "\n";
    }

    return 0;
}
