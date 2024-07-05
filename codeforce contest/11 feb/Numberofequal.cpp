#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    int i=0, j=0, ans= 0, last = 0;
    while(j<m){
        // cout << i << " " <<  j << " " << ans << " " << last << "\n"; 
        if(j!=0 && b[j]!=b[j-1]){
            last = 0;
        }

        if(j!=0 && b[j]==b[j-1]){
            ans = ans + last;
            j++;
        
        }
        else if(i<n && b[j] > a[i]){
            i++;
        }
        else if(i<n && b[j]==a[i]){
            last++;
            i++;
        }
        else if(i<n && b[j] < a[i]){
            ans = ans + last;
            j++;
        }        
    }

    cout << ans;
}