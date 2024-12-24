#include<bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long totalsum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalsum += a[i];
        }
        sort(a.begin(), a.end());
        long long count  = 0;
        for (int i = 0; i < n; i++) {
            long long lowerBound = totalsum - y - a[i];
            long long upperBound = totalsum - x - a[i];

            auto left = lower_bound (a.begin() + i + 1, a.end(), lowerBound);// j > i
            auto right = upper_bound (a.begin() + i + 1, a.end(), upperBound);
            count += (right  - left);
        }
        cout << count << "\n";
        
    }
    return 0;

}