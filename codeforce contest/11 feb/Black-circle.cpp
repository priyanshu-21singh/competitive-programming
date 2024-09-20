#include<bits/stdc++.h>
using namespace std;
long long n,m,k,l,t,a[100007],b[100007],a1,a2,b1,b2;
int main (){
    cin>>t;
    while(t--){
        cin>>n;// no.of circle
        l=0;
       for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];// circle center at a[i],b[i]
        }
    cin>>a1>>a2>>b1>>b2;
    for(int i=1;i<=n;i++){
    if((a[i]-b1)*(a[i]-b1)+(b[i]-b2)*(b[i]-b2)<=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2)){
        l=1;// if we find a blocking circel set 1 to 1
    }
    }
    if(l){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    }
    return 0;
}