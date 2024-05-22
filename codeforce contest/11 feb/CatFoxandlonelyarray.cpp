#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int coun = 0;
        int sum = a +b +c;

        if( (sum) % 2 != 0) coun = -1;
        else{
        coun = min(sum/2, (a+b));
        }

        cout << coun;
       //// code by meeeeee priyaaaaaaaaaa
        cout << "\n";
    }
}