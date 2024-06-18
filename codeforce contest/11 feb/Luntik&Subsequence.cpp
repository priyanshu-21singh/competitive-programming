#include <iostream>
#include <vector>
#include <algorithm> // for count
using namespace std;

#define ll long long
#define vi vector<int>
#define nl '\n'

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vi arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll ones = count(arr.begin(), arr.end(), 1);
        ll zeros = count(arr.begin(), arr.end(), 0);

        if (ones == 0) {
            cout << 0 << nl;
        } else {
            cout << ones * (1LL << zeros) << nl;
        }
    }

    return 0;
}
