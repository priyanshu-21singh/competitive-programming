#include <bits/stdc++.h>
using namespace std;

int minO(int n, int k) {
    if (n == 1) return 0; 

    int op = 0;

    
    while (n > 1) {
        
        n -= (k - 1);
        op++;
        if (n < 1) break; 
    }

    return op;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        cout << minO(n, k) << endl;
    }

    return 0;
}

