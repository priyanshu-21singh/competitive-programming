// 1700  rating question on codeforce solved by me 
#include <iostream>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 != 0) {
            cout << "Bob\n";
        } else {
            int count = 0;
            while (n % 2 == 0) {
                n /= 2;
                count++;
            }
            if (n > 1) {
                cout << "Alice\n";
            } else {
                if (count % 2 != 0) {
                    cout << "Bob\n";
                } else {
                    cout << "Alice\n";
                }
            }
        }
    }
    return 0;
}
