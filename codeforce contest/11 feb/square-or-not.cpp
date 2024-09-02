#include <bits/stdc++.h>
using namespace std;

bool isps(int n) {
    int side = sqrt(n);
    return side * side == n;
}


bool isM(const string& s, int side) {
    
    for (int j = 0; j < side; j++) {
        if (s[j] != '1' || s[(side - 1) * side + j] != '1') {
            return false;
        }
    }

    // Check  first & last columns of each row, and inner elements
    for (int i = 1; i < side - 1; i++) {
        if (s[i * side] != '1' || s[i * side + side - 1] != '1') {
            return false;
        }
        for (int j = 1; j < side - 1; j++) {
            if (s[i * side + j] != '0') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

       //  perfect square 
        if (!isps(n)) {
            cout << "No" << endl;
            continue;
        }

       
        int side = sqrt(n);

       
        if (isM(s, side)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
