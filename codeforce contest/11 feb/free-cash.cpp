#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int p=-1,pm = -1;
    int currentcount=0,maxcash = 0;

    for(int i=0;i<n;++i){
        int h,m;
        cin>>h>>m;

        if(h==p && m==pm){
            currentcount++;
        }else{
            maxcash = max(maxcash,currentcount);
            currentcount =  1;
            p=h;
            pm = m;
        }
    }
    maxcash = max(maxcash,currentcount);
    cout<<maxcash<<endl;
    return 0;
}