#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int priyanshu = 1;
        int count = 1;
        for(int i=1;i<n;i++){
            if(s[i]=s[i-1]){
            count++;
        }else{
           
            priyanshu = max(priyanshu,count);
             count = 1;
        }
        }
        cout<<priyanshu+1<<endl;

    }
}