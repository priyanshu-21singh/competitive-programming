#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool isDiv = false;
    int divisors[] = {4, 7, 47, 477};
    
    for(int i = 0; i < 4; i++) {
        if(n % divisors[i] == 0) {
            isDiv = true;
            break;
        }
    }
    
    if(isDiv) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
