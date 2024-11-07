#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n; 
        string s;
        cin >> s; 

        int l = 0, r = s.length() - 1;

        while(l < s.length() && s[l] == 'B'){
            l++;
        }
        while(r >= 0 && s[r] == 'A'){
            r--;
        }

        
        cout << max(0, r - l) << endl;
    }
    return 0;
}
