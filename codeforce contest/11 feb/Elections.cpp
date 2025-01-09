#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n,c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {

            cin >> a[i];
        }
        if (n == 1) {
            cout << "0\n";
            continue;
        }
        //except candidate 0
        int mx = *max_element(a.begin() + 1, a.end());
        int maxi = max(a[0] + c, mx);

        int win;
        if (maxi == a[0]+ c) {
            win = 0;
        } else {
            for(int i = 1; i < n; ++i) {
                if(a[i] == mx){
                    win = i;
                    break;
                }
            }
        }
        long long sum = c;
        for(int i = 0; i<n; ++i ) {
            int ans;
            if (i==win) {
                ans = 0;
            } else if (sum + a[i] >= mx) {
                ans  = i;
            } else {
                ans = i  + 1;
            }
            cout << ans << (i == n - 1 ? "\n" :" ");
            sum += a[i];
        }

    }
    return 0;
}