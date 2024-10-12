#include<bits/stdc++.h>
using namespaces std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;

            vector<int> b(n,-1);
            int cnt1 = 0,cnt2 = 0,cnt3=0;

            for(int i=0;i<n;i++){
                if(freq[a[i]]==1){
                    b[i]=1;
                }else if(freq[a[i]]==2&&cnt2<2){
                    b[i]=2;
                    cnt2++;
                }else if(freq[a[i]]>=3 && cnt<3){
                    b[i]=3;
                    cnt3++;
                }
            }
            if(cnt==3){
                for(int i=0;i<n;i++){
                    cout<<b[i]<<" ";
                }
            }else{
                cout<<-1;
            }
            cout<<endl;
        }
    }
    return 0;
}