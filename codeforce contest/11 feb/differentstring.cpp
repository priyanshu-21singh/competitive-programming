// different string 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i =  0; i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int minimum = min(a,b);
        int maximum = max(a,b);
        int count = 0;
          if(c>=minimum && c<=maximum){
            count++;
          }
          if(d>=minimum && d<=maximum){
            count++;
          }
        if(count%2==0){
          cout<<"NO"<<"\n";
        }
        else{
          cout<<"YES"<<"endl";
        }
    }
    // 37eegcodeforce 
    return 0;
}