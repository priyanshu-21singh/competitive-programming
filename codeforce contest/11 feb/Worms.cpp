#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;

    vector<int> worms(n);
    vector<int> prefix(n);

    for (int i = 0; i < n; i++) {
        cin >> worms[i];
        prefix[i] = worms[i] + (i > 0 ? prefix[i - 1] : 0);

    }
    int m;
    cin >> m;

    vector<int> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }
    for(int i = 0; i < m; i++) {
        int label = queries[i];

        int pile_index = lower_bound(prefix.begin(), prefix.end(), label) - prefix.begin();
        cout << pile_index + 1 << endl;
    }
    return 0;
}