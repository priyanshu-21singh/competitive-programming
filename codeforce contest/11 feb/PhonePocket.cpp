#include<bits/stdc++.h>
using namespace std;

// author priyanshu 

int min_screens(int x, int y) {
    //2*2
    int screens_for_y = (y + 1) / 2;
    
    // place left after 2*2 screen and 15*2*2;
    int remaining_cells_after_y = (screens_for_y * 15) - (y * 4);
    
    // for 1*1 if any space left for that 
    int x_left = max(0, x - remaining_cells_after_y);
    
    
    int screens_for_x = (x_left + 14) / 15;
    // tottal screen
    int total_screens = screens_for_y + screens_for_x;
    return total_screens;
}
// output 
int main() {
    int t;
    cin >> t;
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y;
        results.push_back(min_screens(x, y));
    }
    for (const int &result : results) {
        cout << result << endl;
    }
    return 0;
}
