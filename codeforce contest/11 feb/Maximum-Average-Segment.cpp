#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    double L = -1e5; 
    double R = 1e5;  
    pair<int, int> result;

    
    for (int i = 0; i < 100; i++) {
        double M = (L + R) / 2;

        
        vector<double> pre(n + 1, 0), pmin(n + 1, 0);
        vector<int> pminidx(n + 1, 0);

        
        pre[0] = a[0] - M;
        pmin[0] = pre[0];
        pminidx[0] = 0;

       
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + a[i] - M;

            if (pre[i] < pmin[i - 1]) {
                pmin[i] = pre[i];
                pminidx[i] = i;
            } else {
                pmin[i] = pmin[i - 1];
                pminidx[i] = pminidx[i - 1];
            }
        }

        
        bool found = false;
        for (int R = d; R <= n; R++) {
            if (pre[R] >= pmin[R - d]) {
                result = {pminidx[R - d] + 1, R};
                found = true;
                break;
            }
        }

        if (found) {
            L = M;  
        } else {
            R = M;  
        }
    }

    
    cout << result.first << " " << result.second << endl;
    return 0;
}
