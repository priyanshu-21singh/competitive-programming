#include <bits/stdc++.h>

using namespace std;

int main() {
    int testc;
    cin >> testc;
    
    while (testc--) {
        string a, b;
        cin >> a >> b;
        
        int p = a.length();
        int q = b.length();
        
        int maxLength = 0;
        
        
        for (int start = 0; start < q; ++start) {
            int bIndex = start;
            int subLength = 0;
            
            
            for (int i = 0; i < p && bIndex < q; ++i) {
                if (a[i] == b[bIndex]) {
                    bIndex++;
                    subLength++;
                }
            }
            
            
            maxLength = max(maxLength, subLength);
        }
        
        // find  the mini possible/length/size of the combined string
        int minLength = p - maxLength + q;
        
        cout << minLength << endl;
    }
    
    return 0;
}
