#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    //  LCM of x and y
    int p = lcm(x, y);

    //  multiples of p in the range [a b]
    int results = b / p - (a - 1) / p;

    
    cout << results << endl;

    return 0;
}
