#include<bits/stdc++.h>
using namespace std;
#define long long as ll;
void solve(){
    int n;
    cin>>n;
    map<int,int> cnt;
    int ans  = 0;
    for(int i=0,x;i<n;++i){
        cin>>x;
        if(!cnt[x]){
            ++ans;
            ++cnt[((1ll<<31)-1)^x];
        }
        else --cnt[x];

    }
    cout<<ans<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)
}