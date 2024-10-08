#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int W, H; // Room dimensions
        cin >> W >> H;
        
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2;
        
        int w, h; 
        cin >> w >> h;
        
        
        double min_dist = 1e9;

        // Check if the second table can fit in the remaining space
        if (w + (x2 - x1) > W && h + (y2 - y1) > H) {
            // if not then -1 
            cout << -1 << endl;
            continue;
        }
        
        // left or right
        if (w + (x2 - x1) <= W) {
            //  left 
            if (w <= x1) {
                min_dist = 0; 
            } else {
                min_dist = min(min_dist, (double)(w - x1)); 
            }
            // Check right side
            if (w <= W - x2) {
                min_dist = 0; 
            } else {
                min_dist = min(min_dist, (double)(w - (W - x2))); 
            }
        }
        
        // up or down
        if (h + (y2 - y1) <= H) {
            // Check down
            if (h <= y1) {
                min_dist = 0; 
            } else {
                min_dist = min(min_dist, (double)(h - y1)); 
            }
            // Check up
            if (h <= H - y2) {
                min_dist = 0; 
            } else {
                min_dist = min(min_dist, (double)(h - (H - y2))); 
            }
        }

        
        if (min_dist == 1e9) {
            cout << -1 << endl; 
        } else {
            cout << fixed << setprecision(6) << min_dist << endl;
        }
    }
    return 0;
}
