#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==1 || n<4) cout<<-1<<endl;
        else cout<<(n/2)/3+((n/2)%3!=0)<<" "<<n/4<<endl;
    }
    return 0;
}