#include <bits/stdc++.h>
using namespace std;
int main() {
    int testc;
    cin >> testc;
    while (testc--) {
    int x, x2, y;
    cin >> x >> x2 >> y;
    int pri[3] = {x, x2, y};
    sort(pri, pri + 3);
    // median
    int a = pri[1];
    // fing absolute distance 
    int z = abs(x - a) + abs(x2 - a) + abs(y - a);
    cout << z << endl;
    }
    return 0;
}
