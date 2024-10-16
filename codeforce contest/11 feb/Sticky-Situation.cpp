#include<bits/stdc++.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

bool isBlocked(int px, int py, int cx, int cy, int radius) {
    return distance(px, py, cx, cy) <= radius;
}

int main() {
    int n, m, w;
    cin >> n >> m >> w;

    bool startBlocked = false;
    bool endBlocked = false;

   
    for (int i = 0; i < w; ++i) {
        int x, y, r;
        cin >> x >> y >> r;

        
        if (isBlocked(0, 0, x, y, r)) {
            startBlocked = true;
        }

       
        if (isBlocked(n, m, x, y, r)) {
            endBlocked = true;
        }

        
        if (startBlocked && endBlocked) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}
