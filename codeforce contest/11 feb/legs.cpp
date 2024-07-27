#include <iostream>
using namespace std;

int mini(int n) {
    int cows = n / 4;
    int legs = n % 4;
    int chick = legs / 2;
    int total = cows + chick;
    return total;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << mini(n) << endl;
    }
    return 0;
}