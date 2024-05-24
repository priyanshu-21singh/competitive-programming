#include <iostream>
using namespace std;
// author by priyanshu 
// created  on 22/5/2024
int main() {
    int k, r;
    cin >> k >> r;

    for (int n = 1; ; ++n) {
        int totalCost = n * k;
        if (totalCost % 10 == r || totalCost % 10 == 0) {
            cout << n << endl;
            break;
        }
    }
    
    return 0;
}
