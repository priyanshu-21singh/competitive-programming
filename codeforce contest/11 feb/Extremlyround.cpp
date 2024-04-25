#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<10){
            cout<<n<<endl;
        }else{
            int num = 0;
            int x = n;
            while(x!=0){
                num++;
                x/=10;
            }
            int total = 0;
            num--;
            total += 9*num;
            total += n/pow(10,num);
            cout<<total<<endl;

            
        }
    }
    return 0;
}