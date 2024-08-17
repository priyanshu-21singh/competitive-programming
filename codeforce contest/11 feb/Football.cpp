#include<bits/stdc++.h>
using namespace std;

string s[128];
int n, i;

int main() {
    cin >> n;  
    for(i = 0; i < n; ++i) 
        cin >> s[i];  

    sort(s, s + n);  
    cout << s[n / 2];  
    return 0;
}
