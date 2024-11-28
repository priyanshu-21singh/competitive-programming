#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    vector<int> queries(k);
    for(int i=0;i<k;++i){
        cin>>queries[i];
    }
    for(int i=0;i<k;++i){
        int q = queries[i];
        // b.s
    int low = 0, high = n-1, ans = 0;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=q){
            ans = mid+1;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<ans<<"\n";
    }
    return 0;
}