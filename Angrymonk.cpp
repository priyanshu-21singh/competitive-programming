#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        priority_queue<long long> pq;
        for (int i = 0; i < k; ++i) {
            long long a;
            cin >> a;
            pq.push(a);
        }

        int operations = 0;
        while (pq.size() > 1) {
            long long largest = pq.top();
            pq.pop();

            if (largest > 1) {
                pq.push(1);
                pq.push(largest - 1);
                ++operations;
            } else {
                long long second_largest = pq.top();
                pq.pop();
                pq.push(second_largest + 1);
                ++operations;
            }
        }

        cout << operations << endl;
    }

    return 0;
}
