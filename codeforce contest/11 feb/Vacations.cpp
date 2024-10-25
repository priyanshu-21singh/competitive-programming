#include <iostream>
using namespace std;

int main() {
    int n;      // Number of vacation days
    cin >> n;
    
    int x = 0, y, s = 0;  // `x` keeps track of the previous day's activity, `s` is the rest days counter
    
    // Loop to process each day's information
    while (cin >> y) {
        // If no activity is possible today (`y == 0`) or the activity is the same as yesterday (`x == y`):
        if (!y || x == y) {
            s++;    // Increment rest days counter
            x = 0;  // Reset previous activity to rest
        }
        // If today there is either contest (`y == 1`) or gym (`y == 2`):
        else if (y < 3) {
            x = y;  // Update previous activity to today's activity
        }
        // If both contest and gym are possible today (`y == 3`):
        else {
            // If yesterday there was an activity (`x != 0`), alternate activity for today:
            // If yesterday was contest (x == 1), do gym today (3 - 1 = 2)
            // If yesterday was gym (x == 2), do contest today (3 - 2 = 1)
            // If no activity yesterday (x == 0), do nothing special (x stays 0)
            x = x ? 3 - x : 0;
        }
    }
    
    cout << s << endl;  // Output the number of rest days
    return 0;
}
