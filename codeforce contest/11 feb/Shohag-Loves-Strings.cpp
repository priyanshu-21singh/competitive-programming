#include<bits/stdc++.h>
using namespace std;
void solve () {
        string s;
        cin>>s;
        // same len = 2
        for(int i=0;i+2<=s.size();i++){
            if(s[i]==s[i+1]){
                cout<<s.substr(i,2)<<"\n";
                return;
            }
        }
        // for len  = 3
        for(int i=0;i+3<=s.size();i++){
            if(s[i]!=s[i+2]){
                cout<<s.substr(i,3)<<"\n";
                return ;
            }
        }
        cout<<-1<<"\n";
        
        
    }
    int main (){
        int t;
        cin>>t;
        while(t--) {
            solve();
        }
        return 0;
    }
