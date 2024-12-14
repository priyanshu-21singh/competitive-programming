#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, t;
    cin >> n >> t;
    vector<long long> k(n);
    for(int i = 0; i < n; i++) {
        cin >> k[i];
    }

    long long low = 1;
    long long high = 1LL * t * *min_element(k.begin(), k.end());

    while (low < high) {
        long long mid = (low + high) / 2;
        long long totalproduxts = 0;

        for (int i = 0; i < n; i++) {
            totalproduxts += mid / k[i];
        }

        if (totalproduxts >= t) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << low << endl;
    return 0;
}