#include <bits/stdc++.h>
using namespace std;
int main() {
    int testtc;
    cin >> testtc;
    while (testtc--) {
        int p, r;
        cin >> p >> r;
        vector<vector<long long>> a(p, vector<long long>(r));
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < r; ++j) {
                cin >> a[i][j];
            }
        }

        while (true) {
            pair<int, int> pri = {-1, -1};
            long long valuee = -1;

            // Find the local maxima
            for (int i = 0; i < p; ++i) {
                for (int j = 0; j < r; ++j) {
                    bool is_high = true;
                    long long value = a[i][j];

                    // Check the cell above
                    if (i > 0 && a[i-1][j] >= value) is_high = false;
                    // Check the cell below
                    if (i < p-1 && a[i+1][j] >= value) is_high = false;
                    // Check the cell to the left
                    if (j > 0 && a[i][j-1] >= value) is_high = false;
                    // Check the cell to the right
                    if (j < r-1 && a[i][j+1] >= value) is_high = false;

                    if (is_high && (pri.first == -1 || value > valuee)) {
                        valuee = value;
                        pri = {i, j};
                    }
                }
            }

            // If no local maxima found, break the loop
            if (valuee == -1) break;

            // Decrement the found local maxima
            int pi = pri.first;
            int rj = pri.second;
            a[pi][rj] -= 1;
        }

        // Output the resulting matrix
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < r; ++j) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
