#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin>>n>>m;
    vector<int> puzzles(m);
    for(int i=0;i<m;i++){
        cin>>puzzles[i];
    }
    sort(puzzles.begin(),puzzles.end());
    int mindiff=INT_MAX;
    for(int i=0;i<=m-n;i++){
        int currdiff = puzzles[i+n-1]-puzzles[i];
        mindiff = min(mindiff,currdiff);
    }
    cout<<mindiff<<endl;
    return 0;
}