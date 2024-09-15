#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve(){
    ll n,q,a,b;
    cin >> n >> q;
    vector<ll>arr(n+1);
    arr[0] = 0;
    for(ll i=1; i<=n; i++) cin >> arr[i];
    sort(arr.rbegin(),arr.rend());
    for(ll i=n; i>0; i--) arr[i] = arr[i-1];
    arr[0] = 0;
    for(ll i=1; i<=n; i++) arr[i] += arr[i-1];
    while(q--) {
        cin >> a >> b;
        cout << arr[a] - arr[a-b] << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--)
        solve();
        
}