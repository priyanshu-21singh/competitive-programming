#include<bits/stdc++.h>
using namespace std;
bool can_make_x(int x){
    int max_b = x/111;
    for(int b = 0; b<= max_b;++b){
     int remainder = x-111*b;
     if(remainder>=0 && remainder %11 == 0){
        return true;
     }
    }
    return false;
}

int main (){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
      if(can_make_x(x)){
        cout<<"YES\n";
      } else {
        cout<<"NO\n";
      }
    }
    return 0;
}