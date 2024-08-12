#include <bits/stdc++.h>
using namespace std;
long long n, d, x, q = 0, w = 0; 
int a[100001]; 

int main() {
    cin >> n; 
    for (int i = 0; i < n; i++) {
        cin >> x; 
        a[x] = i; 
    }

    cin >> d; 
    while (d--) {
        cin >> x; 
        w += a[x] + 1; 
        q += n - a[x]; 
    }

    cout << w << " " << q; 
}
