#include<bits/stdc++.h>
using namespace std;
int main (){
    long long t;
    cin>>t;
    while(t--){
      long long x;
      cin>>x;
      string ans = "NO";// LET CONsider no initially
      set<long long> cubes;

      for(long long i=1;i*i*i<=x;i++){
        long long cube =  i*i*i;
        cubes.insert(cube);//  stores i# in the set
         

         if(cubes.count(x-cube)){
            ans = "YES";
            break;
         }
      }
      cout<<ans<<"\n";
    }
    return 0;
}