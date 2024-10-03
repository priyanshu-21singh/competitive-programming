#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> a(n);
    int Ones = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) Ones++;
    }
    if(Ones==n){
        cout<<n-1<<endl;
        return 0;
    }
    // Transform the array for flipping: 0 -> +1 and 1 -> -1
    vector<int> dp(n);
    for(int i=0;i<n;i++){
        dp[i] = (a[i]==0)?1:-1;
    }
    //Kadane algo to find max subarray 
    int MaxGain = dp[0];
    int currentGain = dp[0];
    for(int i=1;i<n;i++){
        currentGain = max(dp[i],currentGain+dp[i]);
        MaxGain = max(MaxGain,currentGain);
    }
    cout<<Ones+MaxGain<<endl;
    return 0;
}