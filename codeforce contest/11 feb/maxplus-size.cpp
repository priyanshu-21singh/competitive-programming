#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        
    
        int max_value1 = 0, red_count1 = 0;
        for (int i = 0; i < n; i += 2) {
            max_value1 = max(max_value1, v[i]);
            red_count1++;
        }
        int score1 = max_value1 + red_count1;

        
        int max_value2 = 0, red_count2 = 0;
        for (int i = 1; i < n; i += 2) {
            max_value2 = max(max_value2, v[i]);
            red_count2++;
        }
        int score2 = max_value2 + red_count2;
        
       
        cout << max(score1, score2) << "\n";
    }
}
  