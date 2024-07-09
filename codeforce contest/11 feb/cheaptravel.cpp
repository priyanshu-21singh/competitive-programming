#include<bits/stdc++.h>
using namespace std
int main(){
    int t,n,m,a,b;
    cin>>t;
    while(t--){
    cin>>n>>m>>a>>b;
    cout<<min(n*a,n/m*b+min(b,n%m*a))<<'\n';
    }
    return 0;
}
