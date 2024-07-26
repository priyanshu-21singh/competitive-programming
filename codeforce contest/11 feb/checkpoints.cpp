#include <bits/stdc++.h>
using namespace std;


int mini(const map<int, int>& pts) {
    if (pts.size() == 1) 
        return 0; 
    return pts.rbegin()->first - pts.begin()->first; 
}


void priyanshu(int q, map<int, int>& pts) {
    while (q--) {
        string cmd;
        int k;
        cin >> cmd >> k;

        if (cmd == "ADD") {
            pts[k]++;
        } else if (cmd == "DEL") {
            if (--pts[k] == 0) {
                pts.erase(k); 
            }
        }

        cout << mini(pts) << endl; 
    }
}

int main() {
    int n, q;
    cin >> n >> q;

   
    map<int, int> pts;

    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        pts[x]++;
    }

    
    priyanshu(q, pts);

    return 0;
}
