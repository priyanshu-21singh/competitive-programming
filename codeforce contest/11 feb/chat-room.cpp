#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t = "hello";
    int n = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[n]) {
            n++;
        }
        if (n == 5) { // if 'hello' is found
            break;
        }
    }

    if (n == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
