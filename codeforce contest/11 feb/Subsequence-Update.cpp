#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n, l, r;
        cin >> n >> l >> r;

        long long  a[500005], b[500005];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }

        //  r - l + 1;
        sort(a + 1, a + 1 + r);
        sort(b + l, b + 1 + n);

        long long  suma = 0;
        long long  sumb = 0;
        for (int i = 1; i <= r - l + 1; i++) {
            suma += a[i];
            sumb += b[i + l - 1];
        }

        cout << min(suma, sumb) << endl;
    }
    return 0;
}
