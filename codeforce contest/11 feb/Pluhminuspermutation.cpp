#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        
        ll a = n / x;
        ll b = n / y;
        ll lcm = (x * y) / __gcd(x, y);
        ll c = n / lcm;
        ll a1 = a - c;
        ll b1 = b - c;
        
        ll sum_n = (n * (n + 1)) / 2;
        ll sum_n_a1 = ((n - a1) * (n - a1 + 1)) / 2;
        ll sum_b1 = (b1 * (b1 + 1)) / 2;
        
        cout << (sum_n - sum_n_a1) - sum_b1 << endl;
    }
    return 0;
}
