#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<string> grid(n, string(m, '.'));
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // Fill the entire row with '#'
            grid[i] = string(m, '#');
        } else if (i % 4 == 1) {
            // Fill the last cell with '#'
            grid[i][m - 1] = '#';
        } else if (i % 4 == 3) {
            // Fill the first cell with '#'
            grid[i][0] = '#';
        }
    }
    
    for (const auto &row : grid) {
        cout << row << endl;
    }
    
    return 0;
}
