#include <bits/stdc++.h>
using namespace std;

void processGamePieces(int n, vector<int>& a) {
    int h = 0;
    int p = 0;
    int l = 1; 
    int required_pieces = 1; 

    for (int i = 0; i < n; ++i) {
        p += a[i]; 

        while (p >= required_pieces) {
            p -= required_pieces; 
            l++;
            required_pieces = 8 * (l - 1); 
        }

        if (p == 0) {
            h++;
        }
    }

    cout << h << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt; 
    while (tt--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        processGamePieces(n, a);
    }

    return 0;
}
