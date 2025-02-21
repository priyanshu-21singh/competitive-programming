#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int min_xy = min(x, y);
cout << min_xy + 1 << endl;
for (int i = 0; i <= min_xy; ++i) {
 cout << i << " " << (min_xy - i) << endl;
}
return 0;
}
