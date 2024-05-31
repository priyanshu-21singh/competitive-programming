#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int Min = INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<Min){
                Min = arr[i];
            }
        }if(Min == arr[0]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;//
        }
    }
    return 0;
}
