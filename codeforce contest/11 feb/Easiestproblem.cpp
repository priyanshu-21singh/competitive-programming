#include <bits/stdc++.h>
using namespace std;

int smallest_multiple(int n, int k) {
    int m = (n / k) + 1;
    int multiple = m * k;
    return multiple;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << smallest_multiple(n, k) << endl;
    return 0;
}
