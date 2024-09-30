#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        string s;
        cin>>n>>m>>k>>s;

        int j=m;
        for (int i = 0; i < n && j; ++i) {
            if (s[i] == 'L') 
                j = m; 
            else if (s[i] == 'W' && j == 1 && k > 0)
                k--; 
            else
                j--; 
        }
        cout<<(j?"YES\n": "NO\n");
    }
    return 0;
}