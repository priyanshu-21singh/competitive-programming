#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long size;
        cin >> size;

        vector<long long> c(size);
        for (long long i = 0; i < size; i++) {
            cin >> c[i];
        }

        if (size == 1) {
            cout << c[0] << endl;
            continue;
        }

        long long result = accumulate(c.begin(), c.end(), 0LL);

        for (long long i = 0; i < size - 1; ++i) {
            vector<long long> differences;
            for (long long j = 1; j < c.size(); ++j) {
                differences.push_back(c[j] - c[j - 1]);
            }
            c = differences;
            long long current_sum = accumulate(c.begin(), c.end(), 0LL);
            result = max(abs(current_sum), result);
        }

        cout << result << endl;
    }

    return 0;
}
