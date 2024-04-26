#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int count = 0;
        int mini = INT_MAX;
        for(int i=0; i<n-1; i++){
            if(arr[i+1] < arr[i]){
                count = 1;
                break;
            }
            else{
                mini = min(arr[i+1]-arr[i], mini);
            }
        }
        if(count == 1){
            cout << 0 << endl;
        }
        else{
            mini++;
            if(mini%2 ==0){
                cout << mini/2 << endl;
            }
            else{
                cout << (mini/2)+1 << endl;
            }
        }
    
    }

    return 0;
}