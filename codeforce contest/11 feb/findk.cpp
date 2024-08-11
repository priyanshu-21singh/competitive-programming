#include <bits/stdc++.h>

int main() {
    int T, n, x, y;
    std::cin >> T;

    while (T--) {  
        std::cin >> x >> y >> n;

       
        for (int i = x - n + 1; i < x + n; i += 2) {
            std::cout << i << ' ' << y << '\n';
        }
    }

    return 0;
}
