#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    vector<int> result;
    result.reserve(n + m);  // Reserve space for the merged array

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }

    // If there are remaining elements in array a
    while (i < n) {
        result.push_back(a[i]);
        i++;
    }

    // If there are remaining elements in array b
    while (j < m) {
        result.push_back(b[j]);
        j++;
    }

    for (const int &num : result) {
        cout << num << " ";
    }

    return 0;
}
