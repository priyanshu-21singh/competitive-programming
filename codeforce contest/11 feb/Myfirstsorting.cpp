#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        // Swap x and y if x is greater than y
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        // Output the minimum of x and y followed by the maximum of x and y
        cout << x << " " << y << endl;
    }

    return 0;
}
