#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


void solve(){
    ll n;
    cin >> n;
    map<ll,ll>mp;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    auto ans = 0;
    for(auto &it : mp) {
        if(it.second>ans) ans = it.second;
    }

    cout << ans ;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // int t; cin >> t; while(t--)
        solve();
        
}