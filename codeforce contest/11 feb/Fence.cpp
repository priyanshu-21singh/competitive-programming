#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int f[150001], x, p = 0, j = 0;

    // Step 1: Create the prefix sum array
    for (int i = 1; i <= n; i++) {
        cin >> x;
        p += x;
        f[i] = p;
    }

    // Step 2: Find the starting index of the k consecutive planks with the minimum sum
    for (int i = 1; i <= n - k; i++) {
        if (f[i + k] - f[i] < f[j + k] - f[j]) {
            j = i;
        }
    }

    // Output the result (1-based index)
    cout << j + 1 << endl;

    return 0;
}
