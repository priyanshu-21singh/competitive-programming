#include<bits/stdc++.h>
using namespace std;

int main () { 
    // author me priyanshu on 8-07-2024
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // this part will keep or store remainder
        vector<int> priyanshu;
        for(int j : a) {
            if(count(priyanshu.begin(),priyanshu.end(),j%10)<3){
                priyanshu.push_back(j%10);
            }
        }
        bool cat = true;
        for(int j=0;j<priyanshu.size();j++){
            for(int k = j+1;k<priyanshu.size();k++){
                for (int l = k + 1; l <priyanshu.size(); l++){
                    if((priyanshu[j]+priyanshu[k]+priyanshu[l]%10)==3) {
                        if(cat) {
                            cout<<"YES"<< endl;
                        }
                        cat = false;
                        break;
                    }
                }
                if(!cat) break;
            }
            if(!cat) break;
        }
        if(cat){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
