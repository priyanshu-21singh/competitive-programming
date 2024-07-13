#include<bits/stdc++.h>
using namespace std ;

int main () {
    int n ,i,j,t[500];
    string s,q;
    cin>>n>>k>>s;
    q=s;
    sort(q.begin(),q.end());
    for(int i=0;i<k;i++){
        t[q[i]]++;
    }
    for(int i=0;i<n;i++){
        if(t[s[i]]){
            t[s[i]]--;
        }else{
            t[s[i]]--;
        }
    }
    cout<<s[i];
      
}
