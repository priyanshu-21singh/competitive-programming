#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

ll t, n, m, a[200005], b[200005], c[200005];
string s;

int main() {
    cin >> t; // Read the number of test cases
    while (t--) {
        cin >> n >> m; // Read number of programmers and testers
        ll z = 0; // Total skill sum
        for (int i = 1; i <= n + m + 1; i++) {
            cin >> a[i]; // Read programming skills
        }

        ll c1 = 0, c2 = 0, d = 0; // c1: hired programmers count, c2: hired testers count
        for (int i = 1; i <= n + m + 1; i++) {
            cin >> b[i]; // Read testing skills
            c[i] = 0; // Initialize candidate status

            // Assign candidate to programmer or tester
            if (a[i] > b[i]) {
                if (c1 == n) {
                    c1++;
                    d = i; // Candidate cannot be programmer
                } else if (c1 < n) {
                    z += a[i]; 
                    c1++; 
                    c[i] = 1; // Hired as programmer
                } else {
                    z += b[i]; 
                    c2++; // Hired as tester
                }
            } else {
                if (c2 == m) {
                    c2++;
                    d = i; // Candidate cannot be tester
                } else if (c2 < m) {
                    z += b[i]; 
                    c2++; // Hired as tester
                } else {
                    z += a[i]; 
                    c1++; 
                    c[i] = 1; // Hired as programmer
                }
            }
        }

        c[d] = 2; // Mark the excluded candidate

        // Output results
        for (int i = 1; i <= n + m + 1; i++) {
            if (c[i] == 1) {
                cout << z + a[d] - a[i] << ' '; // Adjust total if programmer is excluded
            } else if (c[i] == 0) {
                cout << z + b[d] - b[i] << ' '; // Adjust total if tester is excluded
            } else {
                cout << z << ' '; // Excluded candidate doesn't change total
            }
        }
        cout << endl; // New line after each test case output
    }
    return 0;
}
