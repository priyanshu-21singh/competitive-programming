#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        map<int, int> count;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            count[num]++;
        }

        int totalCards = 0;
        for (auto it = count.begin(); it != count.end(); ++it) {
            int cnt = it->second;
            while (cnt >= k) {
                cnt -= k;
                totalCards += k;
            }
            totalCards += cnt;
        }

        cout << totalCards << endl;
    }

    return 0;
}
