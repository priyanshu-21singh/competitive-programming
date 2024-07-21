#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, start, end;
        cin >> n >> start >> end;
        start--, end--;

        vector<int> arr(n);

        // Set values between 'end' and 'start' to 1
        for (int i = end; i <= start; i++) {
            arr[i] = 1;
        }

        // Set values before 'end'
        for (int i = end - 1; i >= 0; i--) {
            arr[i] = (end - i) % 2 == 1 ? -1 : 1;
        }

        // Set values after 'start'
        for (int i = start + 1; i < n; i++) {
            arr[i] = (i - start) % 2 == 1 ? -1 : 1;
        }

        // Output the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << (i == n - 1 ? "\n" : " ");
        }
    }

    return 0;
}
