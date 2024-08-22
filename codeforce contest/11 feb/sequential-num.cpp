#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    bool win = false;
    for (int i = N - 1; i >= 0; --i) {
        if (!win) {
            win = true;
        } else {
            win = A[i] > 1;
        }
    }

    cout << (win ? "First" : "Second") << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
