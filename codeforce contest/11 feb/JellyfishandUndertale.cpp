#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define nl '\n'

int main() {
    int test;
    cin >> test;

    while (test--) {
        int a, b, n;
        cin >> a >> b >> n;
 
        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        ll total = b;
 
        for (auto x : arr) {
            total += min(1LL + x, a * 1LL) - 1;
        }
        cout << total << nl;
    }

    return 0;
}
