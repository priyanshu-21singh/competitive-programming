#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,a,b;
    cin>>k>>a>>b;
    // check if its possinble to form a complete set
    if((a/k)+(b/k)==0 || (a/k == 0 && b%k!=0) || (b/k == 0 && a%k!=0)){
        cout<<-1<<endl;
    }else{
        cout<<(a/k)+(b/k)<<endl;   
         }
}