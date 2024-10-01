#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
    cin >> a[i];  
    }

    vector<int> nut_position;
    // for 1s
    for(int i=0;i<n;i++){
        if(a[i]==1){
            nut_position.push_back(i);
        }
    }
    // for 0s 
    if (nut_positions.size() == 0) {
        cout << 0 << endl;
        return 0;
    }
if (nut_positions.size() == 1) {
        cout << 1 << endl;
        return 0;
    }
    long long ways = 1;
    for(int i=1;i<nut_position.size();i++){
        int gap = nut_positions[i]-nut_positions[i-1];
        ways*=gap;
    }

    cout << ways << endl;
    return 0;
}


