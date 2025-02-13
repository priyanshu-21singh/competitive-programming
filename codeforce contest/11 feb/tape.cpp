#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    long long m;
     cin>>n>>m>>k;
     vector<long long> b(n);
     for(int i=0;i<n;i++){
        cin>>b[i];
     }
     long long total_length = b[n-1]-b[0]+1;
     vector<long long> gap;
     for(int i=1;i<n;i++){
        long long gaps = b[i]-b[i-1]-1;
        if(gaps>0)
           gap.push_back(gaps);
     }
     sort(gap.rbegin(),gap.rend());
     for(int i=0;i<k-1 && i < gap.size();i++){
        total_length -= gap[i];
     }
     cout<<total_length << "\n";
     return 0;

}