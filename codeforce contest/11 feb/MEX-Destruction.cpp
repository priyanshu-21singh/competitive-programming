#include <bits/stdc++.h>
using namespace std;


int calculate_mex(const vector<int>& arr) {
    set<int> elements(arr.begin(), arr.end());
    int mex = 0;
    while (elements.count(mex)) {
        ++mex;
    }
    return mex;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the array

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if the array is already all zeros
        bool all_zero = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != 0) {
                all_zero = false;
                break;
            }
        }

        if (all_zero) {
            cout << 0 << endl;
            continue;
        }

        // Count distinct elements in the array
        set<int> distinct_elements(a.begin(), a.end());

        // If 0 is not in the array, at least two operations are needed
        if (distinct_elements.count(0) == 0) {
            cout << 2 << endl;
        } else {
            // If 0 is in the array, only one operation is needed
            cout << 1 << endl;
        }
    }

    return 0;
}
