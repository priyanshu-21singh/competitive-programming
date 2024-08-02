#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                cout << j << " " << i - j << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// tep-by-Step Explanation
// Input Handling:

// The main function reads the number of test cases t.
// It then iterates over each test case, calling the solve function.
// Function solve:

// Reading Input: The function reads the integers l and r.
// Iterating Through Possible Values of 
// 𝑎
// a: A loop iterates through each integer i from l to r.
// Finding Divisors of 
// 𝑖
// i:
// For each integer i, another loop checks for possible divisors j starting from 2 up to 
// 𝑖
// i
// ​
//  .
// If i is divisible by j (i.e., i % j == 0), it means j is a divisor, and we can form the pair (j, i - j).
// Printing the Result:
// If a valid pair is found, the pair (j, i - j) is printed, and the function returns to proceed to the next test case.
// No Valid Pair Found:
// If the loops complete without finding any valid pair, the function prints -1.
// Output:

// The solve function prints the result for each test case immediately upon finding a valid pair or determines that no valid pair exists and prints -1.
// This approach ensures that we check all possible values of 
// 𝑎
// a and their divisors to find a pair (a, b) such that 
// 𝑎
// +
// 𝑏
// a+b is within the range 
// [
// 𝑙
// ,
// 𝑟
// ]
// [l,r] and 
// gcd
// ⁡
// (
// 𝑎
// ,
// 𝑏
// )
// ≠
// 1
// gcd(a,b)
// 
// =1. If no such pair exists, the function correctly outputs -1.