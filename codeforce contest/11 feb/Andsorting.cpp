#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,ans=-1,a;
cin>>n;
for(int i=0;i<n;i++){
cin>>a;
if(a!=i) ans=ans&a;
}
cout<<ans<<endl;
}

}