#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int Min = INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])<Min){
                    Min = __gcd(arr[i],arr[j]);
                }
            }
        }if(Min>2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}