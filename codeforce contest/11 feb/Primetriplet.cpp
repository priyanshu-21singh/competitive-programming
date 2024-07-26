#include <bits/stdc++.h>
using namespace std;



const long long N = 1e6 + 20;
vector<long long> p(N + 1);
vector<long long> req;

int main() {
   

  
    p[0] = p[1] = 0;
    for (long long i = 2; i <= N; i++) {
        if (p[i] == 0) {
            req.push_back(i * i);
            for (long long j = 2 * i; j <= N; j += i) {
                p[j] = 1; 
            }
        }
    }

    long long n;
    cin >> n;
    long long k = req.size();
    n -= 4; 

   
    if (n <= 0 || n % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

 
    bool ok = false;
    sort(req.begin(), req.end());
    for (long long i = 1; i < k; i++) {
        long long rem = n - req[i];
        if (rem <= 0) break; 
        if (rem == req[i]) continue; 

        // Binary search 
        long long l = 1;
        long long r = k - 1;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (req[mid] == rem) {
                ok = true; 
                break;
            } else if (req[mid] < rem) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (ok) break; 
    }

   
    cout << (ok ? "YES\n" : "NO\n");
    
    return 0;
}
