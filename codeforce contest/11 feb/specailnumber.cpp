#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main (){
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    long long result = 0,power = 1;
    while(k>0){
        if(k&1){
            result = (result+power)%MOD;
        }
        power  = (power*n)%MOD;
        k>>=1;
    }
    cout<<result<<endl;
}
return 0;
}