#include <iostream>
using namespace std;
typedef long long LL;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        LL f, a, b, now(0), t;
        cin >> n >> f >> a >> b;
        while (n--) {
            cin >> t;
            f -= min(b, (t - now) * a);
            now = t;
        }
        if (f <= 0) 
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
}
