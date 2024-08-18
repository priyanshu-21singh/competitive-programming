#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    
    if (n <= 5) {
        cout << s[n-1];
        return 0;
    }
    
    int p = 0;
    while (5 * (1 << p) <= n) {
        n -= 5 * (1 << p);
        p += 1;
    }
    
    cout << s[(n - 1) / (1 << p)];
    
    return 0;
}


