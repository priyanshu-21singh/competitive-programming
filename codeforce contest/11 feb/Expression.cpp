#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> results;
    results.push_back(a + b + c);
    results.push_back(a * b * c);
    results.push_back((a + b) * c);
    results.push_back(a * (b + c));
    cout << *max_element(results.begin(), results.end()) << endl;
    return 0;
}
