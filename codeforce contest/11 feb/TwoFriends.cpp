 #include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int ans = 0, f = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                f++;
            } else if (f) {
                ans += (f + 1);
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}
