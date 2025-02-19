#include<bits/stdc++.h>
using namespace std;
int main () {
    string a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    cout << a << " " << b << endl;

    for (int i = 0; i < n; ++i) {
        string m, r;
        cin >> m >> r;

        if(a == m) 
           a = r;
        else
           b = r;
        cout << a << " " << b << endl;
    }
    
}