#include <iostream>
 
using namespace std;
 
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
 
 
int main() {
    ll t, m, n;
    cin>>t;
    while (t--) {
        cin>>m>>n;
        if (m >= n and (m-n) % 2==0) yes;
        else no;
    }
    return 0;
}// on 27/05/2024