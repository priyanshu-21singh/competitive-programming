#include<bits/stdc++.h>
using namespace std;
int main () {
    long long  n;
    cin >> n;
    long long low = 1;
    long long high = n * n;
    long long median_position = (n * n + 1) / 2;// n*n + 1 / 2;

    while (low <= high) {
        long long  mid = (low + high) / 2;
        long long count = 0;

        for (long long i = 1; i <= n; i++) {
            count += min(mid / i, n); //for row
        }
        if (count >= median_position) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << low << endl;
}