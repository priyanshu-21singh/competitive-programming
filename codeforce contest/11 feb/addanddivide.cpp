#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
    int a, b;
    cin >> a >> b;
    int count = a + 3 ; // make sure that loop run suffiecient time for minimal valuea&b

        
    int start = 0;
        if (b < 2) {
            start = 2 - b;
        }
/
        
        for (int i = start; i < count; ++i) {
            int ans = i; 
            int A = a;
            int B = b + i;

           
            while (A != 0) {
                ans++;
                A /= B;
            }

            
            count = min(count, ans);
        }

        
        cout << count << "\n";
    }

    return 0;
}
