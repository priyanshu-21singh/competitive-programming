#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll sum = (n + k - 1) / k;
    k *= sum;

    cout << (k + n - 1) / n << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) 
    {
        solve();
    }

}