#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];

        int x = arr[0];
        int y = arr[n-1];
        int ans =0;
        if(x==y){
            int i = 0;
            int j = n-1;
            for(; i<n; i++){
                if(arr[i]!=x){
                    break;
                } 
            }
            for(; j>=0; j--){
                if(arr[j]!=x){
                    break;
                }
            }

            // cout << i << " " << j ;

            if(j<i) ans =0;
            else ans = j-i+1;
        }
        else if(x!=y){
            int i = 0;
            int j = n-1;
            for(; i<n; i++){
                if(arr[i]!=x){
                    break;
                } 
            }
            for(; j>=0; j--){
                if(arr[j]!=y){
                    break;
                }
            }
            ans = min (n-i, j+1);
        }

        cout << ans << "\n";
    }
}// by eee