#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        for (ll i = 0; i < n; i++) cin >> arr[i];
        ll brr[q];
        for (ll i = 0; i < q; i++) cin >> brr[i];
set<ll> hs;
        for (ll i = 0; i < q; i++) {
            if (hs.count(brr[i])) continue;
            hs.insert(brr[i]);
            for (ll j = 0; j < n; j++) {
                if (arr[j] % (1 << brr[i]) == 0) arr[j] += (1 << (brr[i] - 1));
            }
        }
for (auto i : arr) cout << i << " ";
        cout << '\n';
    }
    return 0;
}
