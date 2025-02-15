#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    while(a != b) {
         if(a > b) {
            if(a % b != 0) {
                cout << -1 << "\n";
                return;
            } ll c = a / b;
            
            if(c % 8 == 0) {
                ans++;
                a /= 8;   
                continue;
            }
            else if(c % 4 == 0) {
                ans++;
                a /= 4;   
                continue;
            }
            else if(c % 2 == 0) {
                ans++;
                a /= 2;  
                continue;
            }
            
            cout << -1 << "\n";
            return;
        }
        else {
            
            if(b % a != 0) {
                cout << -1 << "\n";
                return;
            }
            
            if(a * 8 <= b) {
                ans++;
                a *= 8;   
                continue;
            }
            else if(a * 4 <= b) {
                ans++;
                a *= 4; 
                continue;
            }
            else if(a * 2 <= b) {
                ans++;
                a *= 2;   
                continue;
            }
            
            cout << -1 << "\n";
            return;
        }
    }
    
    cout << ans << "\n";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
