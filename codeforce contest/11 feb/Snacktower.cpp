#include<bits/stdc++.h>
//PriyanshuSingh18
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<bool> available(n+1,false); 
    int expected = n;
    for(int i=0;i<n;i++){
        int snack;
        cin >> snack;
        available[snack] = true;
        while(expected > 0 && available[expected]){
            cout << expected << " ";
            expected--;
        }
        cout << endl;

    }
    return 0;
}