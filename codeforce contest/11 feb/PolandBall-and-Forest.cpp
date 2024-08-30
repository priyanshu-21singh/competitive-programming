#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10004];
int visited[10004]={0};
int ans = 0;
void dfs(int node,int p){
    visited[node]=1;
    for(int c:adj[node]){
        if(c!=p){
            dfs(c,node);
        }
    }
}
int main (){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        cin>>j;
        // tree
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans++;
            dfs(i,-1);
        }
    }
    cout<<ans<<endl;
    return 0;
}