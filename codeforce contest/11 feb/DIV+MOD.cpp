#include<bits/stdc++.h>
using namespace std;
int main (){
    int l,r,a;
    int t;
    cin>>t;
    while(t--){
        cin>>l>>r>>a;
        if(l/a!=(r+1)/a)
           r=1LL*a*((r+1)/a)-1;
        cout<<r/a+r%a<<endl;
    }
}