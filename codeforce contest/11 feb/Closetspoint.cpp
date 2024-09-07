#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> points(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }
        
        if (n == 2) {
            
            if (abs(points[0] - points[1]) > 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
           
            cout << "NO" << endl;
        }
    }
    
    return 0;
}