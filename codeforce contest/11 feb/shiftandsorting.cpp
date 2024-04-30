#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count=0,f=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                f++;
            }
            else if(f){
                count+=(f+1);
            }
            // code by meeeee 
        }
        cout<<ans<<endl;
    }
    return 0;
}